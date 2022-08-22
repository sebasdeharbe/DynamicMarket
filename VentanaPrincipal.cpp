#include "VentanaPrincipal.h"
#include <wx/grid.h>
#include "Articulo.h"
#include "string_conv.h"
#include <cstring>
#include "VentanaArticulo.h"
#include "VentanaArticuloEditar.h"
#include <wx/msgdlg.h>
#include "VentanaVenta.h"
#include "VentanaCompra.h"
#include "VentanaProveedores.h"
#include "VentanaClientes.h"
#include <wx/icon.h>
#include <windows.h>
#include "images/DynamicLogo.xpm"
#include <wx/colour.h>
#include "VentanaRegistro.h"
#include <vector>
#include <wx/string.h>
#include "VentanaFechas.h"
using namespace std;


VentanaPrincipal::VentanaPrincipal(Stock *stock) : wx_VPrincipal(nullptr), p_Stock(stock), p_clientes("bin/ArchClientes.dym"), p_proveedores("bin/ArchProveedores.dym"), p_venta("bin/RegistroVentas.dym"){
	SetIcon(wxIcon(icono_xpm));
	int cant_datos = p_Stock->CantidadProductos();
	grilla->AppendRows(cant_datos);
	for(int i=0;i<cant_datos;i++) { 
		CargarFila(i,i);
	}
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
	
}

void VentanaPrincipal::CargarFila(int i, int j){
	Articulo &aux=(*p_Stock)[i];
	
	grilla->SetCellValue(j, 0, wxString()<<aux.VerCodigo());
	grilla->SetCellValue(j, 1, aux.VerNombre());
	grilla->SetCellValue(j, 2, aux.VerCategoria());
	grilla->SetCellValue(j, 3, wxString()<<aux.VerPrecioCompra());
	grilla->SetCellValue(j, 4, wxString()<<aux.VerPrecioVenta());
	grilla->SetCellValue(j, 5, wxString()<<aux.VerGanancia());
	grilla->SetCellValue(j, 6, wxString()<<aux.VerCantidad()); 
	
	if(aux.VerificarCantidadCritica()){
		char r=235;
		char g=50;
		char b=20;
		wxColour colorcelda (r,g,b);
		grilla->SetCellBackgroundColour(j,6, colorcelda);
		grilla->Update();
	}
	else{
		char r=255;
		char g=255;
		char b=255;
		wxColour colorcelda (r,g,b);
		grilla->SetCellBackgroundColour(j,6,colorcelda);
		grilla->Update();
	}
	
}

VentanaPrincipal::~VentanaPrincipal() {
	
}
	
void VentanaPrincipal::NuevoArticulo( wxCommandEvent& event )  {
	VentanaArticulo dialog_articulo(this, p_Stock);
	if(dialog_articulo.ShowModal()==1){
		grilla->AppendRows(1);
		int posicion = p_Stock->CantidadProductos()-1;
		CargarFila(posicion,posicion);
		grilla->SelectRow(posicion); 
	}
	

}

void VentanaPrincipal::RealizarVenta( wxCommandEvent& event )  {
	if(p_Stock->CantidadProductos()==0){
		wxMessageBox(std_to_wx("No tiene productos registrados para vender"), "Atención!");
	}
	else{
		VentanaVenta dialog_venta(this, p_Stock, &p_venta);
		if(dialog_venta.ShowModal()==1){
			int cant_datos = p_Stock->CantidadProductos();
			for(int i=0;i<cant_datos;i++) { 
				CargarFila(i,i);
			}
		}
	}
	
}

void VentanaPrincipal::ModificarArticulo( wxCommandEvent& event )  {
	if(p_Stock->CantidadProductos()==0){
		wxMessageBox(std_to_wx("No tiene productos registrados para modificar"), "Atención!");
	}
	else{
		//Considera que la grilla solo muestre datos filtrados
		int row=grilla->GetGridCursorRow();
		long codigoindice;
		grilla->GetCellValue(row, 0).ToLong(&codigoindice);
		vector <int> indice=p_Stock->BuscarPorCodigo(codigoindice);
		int buscar=indice[0];
		VentanaArticuloEditar dialog_editarart(this, p_Stock, buscar);
		if (dialog_editarart.ShowModal()){
			CargarFila(buscar, row);
		}
	}
	
}

void VentanaPrincipal::ClickAyuda( wxCommandEvent& event )  {
	/*string manual="Manual_de_Usuario.pdf";*/
	ShellExecute(NULL, _T("open"), _T("Manual_de_Usuario.pdf") , NULL, NULL, SW_SHOW); 
}

void VentanaPrincipal::ClickAcercaDe( wxCommandEvent& event )  {
	wxMessageBox("Programado por Sebastián Deharbe. 2022","Dynamic Market"); 
}

void VentanaPrincipal::DobleClickGrilla( wxGridEvent& event )  {
	int row=grilla->GetGridCursorRow();
	long codigoindice;
	grilla->GetCellValue(row, 0).ToLong(&codigoindice);
	vector <int> indice=p_Stock->BuscarPorCodigo(codigoindice);
	int buscar=indice[0];
	VentanaArticuloEditar dialog_editarart(this, p_Stock, buscar);
	if (dialog_editarart.ShowModal()){
		CargarFila(buscar, row);
	}
}

void VentanaPrincipal::ClickGrillaCreciente( wxGridEvent& event )  {
	int nro_columna=event.GetCol();
	int cant_datos=p_Stock->CantidadProductos();
	
	//Para ordenar el (des)orden de manera creciente o en el orden del alfabeto
	switch(nro_columna){
		case 0: 
			p_Stock->OrdenarCreciente(ord_codigo);
			break;
		case 1:
			p_Stock->OrdenarCreciente(ord_nombre);
			break;
		case 2:
			p_Stock->OrdenarCreciente(ord_categoria);
			break;
		case 3:
			p_Stock->OrdenarCreciente(ord_pcompra);
			break;
		case 4:
			p_Stock->OrdenarCreciente(ord_pventa);
			break;
		case 5:
			p_Stock->OrdenarCreciente(ord_ganancia);
			break;
		case 6:
			p_Stock->OrdenarCreciente(ord_cantidad);
			break; 
	}
	
	for(int i=0;i<cant_datos;i++) { 
		CargarFila(i,i); //actualizar la grilla
	}
}

void VentanaPrincipal::ClickGrillaDecreciente( wxGridEvent& event )  {
	int nro_columna=event.GetCol();
	int cant_datos=p_Stock->CantidadProductos();
	
	//Para ordenar el (des)orden de manera decreciente o en el orden inverso del alfabeto
	switch(nro_columna){
	case 0: 
		p_Stock->OrdenarDecreciente(ord_codigo);
		break;
	case 1:
		p_Stock->OrdenarDecreciente(ord_nombre);
		break;
	case 2:
		p_Stock->OrdenarDecreciente(ord_categoria);
		break;
	case 3:
		p_Stock->OrdenarDecreciente(ord_pcompra);
		break;
	case 4:
		p_Stock->OrdenarDecreciente(ord_pventa);
		break;
	case 5:
		p_Stock->OrdenarDecreciente(ord_ganancia);
		break;
	case 6:
		p_Stock->OrdenarDecreciente(ord_cantidad);
		break; 
	}
	
	for(int i=0;i<cant_datos;i++) { 
		CargarFila(i,i); //actualizar la grilla
	}
}

void VentanaPrincipal::ClickEliminarArticulo( wxCommandEvent& event )  {
	if(p_Stock->CantidadProductos()==0){
		wxMessageBox(std_to_wx("No tiene productos registrados para eliminar"), "Atención!");
	}
	else{
		int fila=grilla->GetGridCursorRow();
		
		int mensaje = wxMessageBox(c_to_wx("¿Está seguro de eliminar el Producto?"),grilla->GetCellValue(fila,1),wxYES_NO);
		if (mensaje==wxYES) {
			long codigoindice;
			grilla->GetCellValue(fila, 0).ToLong(&codigoindice);
			vector <int> indice=p_Stock->BuscarPorCodigo(codigoindice);
			int buscar=indice[0];
			grilla->DeleteRows(fila,1);
			p_Stock->EliminarArticulo(buscar);
			p_Stock->GuardarDatos();
		}
	}
}

void VentanaPrincipal::ClickRealizarCompra( wxCommandEvent& event )  {
	if(p_Stock->CantidadProductos()==0){
		wxMessageBox(std_to_wx("No tiene productos registrados para comprar"));
	}
	else{
		VentanaCompra dialog_compra (this, p_Stock);
		if(dialog_compra.ShowModal()==1){
			int cant_datos = p_Stock->CantidadProductos();
			for(int i=0;i<cant_datos;i++) { 
				CargarFila(i,i);
			}
		}
	}
	
}

void VentanaPrincipal::ClickBuscaNombre( wxCommandEvent& event )  {
	vector <int> busqueda=p_Stock->BuscarPorNombre(wx_to_std(m_BuscaNombre->GetValue()));
	if (busqueda.size()==0)
		wxMessageBox("No se encontraron coincidencias");
	else {
		grilla->ClearGrid();
		for(int i=0;i<busqueda.size();i++) { 
			CargarFila(busqueda[i],i);
			grilla->SetGridCursor(busqueda[i],1); 
			grilla->SelectRow(busqueda[i]);
		}
	}
}

void VentanaPrincipal::ClickBuscarCodigo( wxCommandEvent& event )  {
	long codigo;
	m_BuscaCodigo->GetValue().ToLong(&codigo);
	vector <int> busqueda=p_Stock->BuscarPorCodigo(codigo);
	if (busqueda.size()==0){
		wxMessageBox("No se encontraron coincidencias");
		for(int i=0;i<p_Stock->CantidadProductos();i++) { 
			CargarFila(i,i);//actualiza la grilla si no ha coincidencia
		}
	}
	else {
		grilla->ClearGrid();
		for(int i=0;i<busqueda.size();i++) { 
			CargarFila(busqueda[i],i);
			grilla->SetGridCursor(busqueda[i],0); 
			grilla->SelectRow(busqueda[i]);
		}
	}
}

void VentanaPrincipal::ClickBuscarCategoria( wxCommandEvent& event )  {
	vector <int> busqueda=p_Stock->BuscarPorCategoria(wx_to_std(m_BuscaCategoria->GetValue()));
	if (busqueda.size()==0)
		wxMessageBox("No se encontraron coincidencias");
	else {
		grilla->ClearGrid();
		for(int i=0;i<busqueda.size();i++) { 
			CargarFila(busqueda[i],i);
			grilla->SetGridCursor(busqueda[i],2); 
			grilla->SelectRow(busqueda[i]);
		}
	}
}

void VentanaPrincipal::CambiaRelacion( wxSizeEvent& event )  {
	Layout(); 
	int Tamanio[7], AnchoAnterior=0; 
	for (int i=0;i<7;i++) { 
		Tamanio[i] = grilla->GetColSize(i);
		AnchoAnterior += Tamanio[i];
	}
	int AnchoNuevo=grilla->GetSize().GetWidth(); 
	grilla->BeginBatch(); 
	for (int i=0;i<7;i++) 
		grilla->SetColSize(i,Tamanio[i]*AnchoNuevo/AnchoAnterior);
	grilla->EndBatch();
}

void VentanaPrincipal::EnterNombre( wxCommandEvent& event )  {
	ClickBuscaNombre(event);
}

void VentanaPrincipal::EnterCodigo( wxCommandEvent& event )  {
	ClickBuscarCodigo(event);
}

void VentanaPrincipal::EnterCategoria( wxCommandEvent& event )  {
	ClickBuscarCategoria(event);
}

void VentanaPrincipal::OnClickProveedores( wxCommandEvent& event )  {
	VentanaProveedores *ventana_proveedores= new VentanaProveedores (this, &p_proveedores); 
	ventana_proveedores->Show();

}

void VentanaPrincipal::OnClickClientes( wxCommandEvent& event )  {
	VentanaClientes *ventana_clientes= new VentanaClientes (this, &p_clientes);	
	ventana_clientes->Show();
	
}

void VentanaPrincipal::OnClickRegistro( wxCommandEvent& event )  {
	VentanaFechas dialog_fechas(this, &p_venta);
	if(dialog_fechas.ShowModal()==1){
		VentanaRegistro *ventana_registro= new VentanaRegistro (this, &p_venta, p_Stock);
		ventana_registro->Show();
	}
}

