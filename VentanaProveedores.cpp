#include "VentanaProveedores.h"
#include <wx/grid.h>
#include "Proveedor.h"
#include <wx/string.h>
#include "VentanaDatosProveedor.h"
#include <wx/msgdlg.h>
#include <wx/wx.h>
#include "ListadoProveedores.h"
#include "string_conv.h"
#include "VentanaProveedorEditar.h"


VentanaProveedores::VentanaProveedores(wxWindow *parent, ListadoProveedores *lista) : wx_VentProveedores(parent), p_Proveedores(lista) {
	int cant_datos=p_Proveedores->CantidadProveedores();
	grillaprov->AppendRows(cant_datos);
	for(int i=0;i<cant_datos;i++) { 
		CargarFila(i,i);
	}
	grillaprov->SetSelectionMode(wxGrid::wxGridSelectRows);
}

void VentanaProveedores::CargarFila(int i, int j){
	Proveedor &aux=(*p_Proveedores)[i];
	
	grillaprov->SetCellValue(j, 0, wxString()<<aux.VerNombre());
	grillaprov->SetCellValue(j, 1, wxString()<<aux.VerEmpresa());
	grillaprov->SetCellValue(j, 2, wxString()<<aux.VerRubro());
	grillaprov->SetCellValue(j, 3, wxString()<<aux.VerTelefono());
	
}
void VentanaProveedores::EnterNombre( wxCommandEvent& event )  {
	BuscarNombre(event);
}

void VentanaProveedores::BuscarNombre( wxCommandEvent& event )  {
	vector <int> busqueda=p_Proveedores->BuscarPorNombre(wx_to_std(m_BuscaNombre->GetValue()));
	if (busqueda.size()==0)
		wxMessageBox("No se encontraron coincidencias");
	else {
		grillaprov->ClearGrid();
		for(int i=0;i<busqueda.size();i++) { 
			CargarFila(busqueda[i],i);
			grillaprov->SetGridCursor(busqueda[i],1); 
			grillaprov->SelectRow(busqueda[i]);
		}
	}
}

void VentanaProveedores::EnterEmpresa( wxCommandEvent& event )  {
	BuscarEmpresa(event);
}

void VentanaProveedores::BuscarEmpresa( wxCommandEvent& event )  {
	vector <int> busqueda=p_Proveedores->BuscarPorEmpresa(wx_to_std(m_BuscaEmpresa->GetValue()));
	if (busqueda.size()==0)
		wxMessageBox("No se encontraron coincidencias");
	else {
		grillaprov->ClearGrid();
		for(int i=0;i<busqueda.size();i++) { 
			CargarFila(busqueda[i],i);
			grillaprov->SetGridCursor(busqueda[i],1); 
			grillaprov->SelectRow(busqueda[i]);
		}
	}
}

void VentanaProveedores::EnterCategoria( wxCommandEvent& event )  {
	BuscarCategoria(event);
}

void VentanaProveedores::BuscarCategoria( wxCommandEvent& event )  {
	vector <int> busqueda=p_Proveedores->BuscarPorRubro(wx_to_std(m_BuscaRubro->GetValue()));
	if (busqueda.size()==0)
		wxMessageBox("No se encontraron coincidencias");
	else {
		grillaprov->ClearGrid();
		for(int i=0;i<busqueda.size();i++) { 
			CargarFila(busqueda[i],i);
			grillaprov->SetGridCursor(busqueda[i],1); 
			grillaprov->SelectRow(busqueda[i]);
		}
	}
}

void VentanaProveedores::ModificarProveedor( wxCommandEvent& event )  {
	if(p_Proveedores->CantidadProveedores()==0){
		wxMessageBox(std_to_wx("No tiene proveedores registrados para modificar"), "Atención!");
	}
	else{
		int row=grillaprov->GetGridCursorRow();
		string nombre=wx_to_std(grillaprov->GetCellValue(row, 0));
		vector <int> indice=p_Proveedores->BuscarPorNombre(nombre);
		string empresa=wx_to_std(grillaprov->GetCellValue(row, 1));
		string rubro=wx_to_std(grillaprov->GetCellValue(row, 2));
		string telefono=wx_to_std(grillaprov->GetCellValue(row, 3));
		int buscar;
		if (indice.size()==1){
			buscar=indice[0];
		}
		else{
			for(int i=0;i<indice.size();i++) { 
				Proveedor &aux=(*p_Proveedores)[indice[i]];
				if(aux.VerNombre()==nombre and
				   aux.VerEmpresa()==empresa and
				   aux.VerRubro()==rubro and
				   aux.VerTelefono()==telefono){
					buscar=indice[i];
				}
			}
		}
		
		VentanaProveedorEditar dialog_prov(this, p_Proveedores, buscar);
		if (dialog_prov.ShowModal()){
			CargarFila(buscar, row);
		}
	}
	
}

void VentanaProveedores::NuevoProveedor( wxCommandEvent& event )  {
	VentanaDatosProveedor dialog_proveedor(this, p_Proveedores);
	if (dialog_proveedor.ShowModal()==1){
		grillaprov->AppendRows(1);
		int posicion = p_Proveedores->CantidadProveedores()-1;
		CargarFila(posicion, posicion);
		grillaprov->SelectRow(posicion);
	}
}

void VentanaProveedores::EliminarProveedor( wxCommandEvent& event )  {
	if(p_Proveedores->CantidadProveedores()==0){
		wxMessageBox(std_to_wx("No tiene proveedores registrados para eliminar"), "Atención!");
	}
	else{
		int fila=grillaprov->GetGridCursorRow();
		int mensaje=wxMessageBox("¿Está seguro de eliminar el registro del Proveedor?", grillaprov->GetCellValue(fila,0), wxYES_NO);
		if(mensaje==wxYES){
			int row=grillaprov->GetGridCursorRow();
			string nombre=wx_to_std(grillaprov->GetCellValue(row, 0));
			vector <int> indice=p_Proveedores->BuscarPorNombre(nombre);
			string empresa=wx_to_std(grillaprov->GetCellValue(row, 1));
			string rubro=wx_to_std(grillaprov->GetCellValue(row, 2));
			string telefono=wx_to_std(grillaprov->GetCellValue(row, 3));
			int buscar;
			if (indice.size()==1){
				buscar=indice[0];
			}
			else{
				for(int i=0;i<indice.size();i++) { 
					Proveedor &aux=(*p_Proveedores)[indice[i]];
					if(aux.VerNombre()==nombre and
					   aux.VerEmpresa()==empresa and
					   aux.VerRubro()==rubro and
					   aux.VerTelefono()==telefono){
						buscar=indice[i];
					}
				}
			}
			grillaprov->DeleteRows(fila,1);
			p_Proveedores->EliminarProveedor(buscar);
			p_Proveedores->GuardarDatos();
		}
	}
	
}

VentanaProveedores::~VentanaProveedores() {
	
}

void VentanaProveedores::ClickGrilla( wxGridEvent& event )  {
	int row=grillaprov->GetGridCursorRow();
	long codigoindice;
	string nombre=wx_to_std(grillaprov->GetCellValue(row, 0));
	vector <int> indice=p_Proveedores->BuscarPorNombre(nombre);
	string empresa=wx_to_std(grillaprov->GetCellValue(row, 1));
	string rubro=wx_to_std(grillaprov->GetCellValue(row, 2));
	string telefono=wx_to_std(grillaprov->GetCellValue(row, 3));
	int buscar;
	for(int i=0;i<indice.size();i++) { 
		Proveedor &aux=(*p_Proveedores)[indice[i]];
		if(aux.VerNombre()==nombre and
		   aux.VerEmpresa()==empresa and
		   aux.VerRubro()==rubro and
		   aux.VerTelefono()==telefono){
			buscar=indice[i];
		}
	}
	
	VentanaProveedorEditar dialog_prov(this, p_Proveedores, buscar);
	if (dialog_prov.ShowModal()){
		CargarFila(buscar, row);
	}
}

void VentanaProveedores::GrillaOrdenaCreciente( wxGridEvent& event )  {
	int nro_columna=event.GetCol();
	int cantidad_prov=p_Proveedores->CantidadProveedores();
	
	switch(nro_columna){
	case 0:
		p_Proveedores->OrdenarCreciente(orde_nombre);
		break;
	case 1:
		p_Proveedores->OrdenarCreciente(orde_empresa);
		break;
	case 2:
		p_Proveedores->OrdenarCreciente(orde_rubro);
		break;
	case 3:
		p_Proveedores->OrdenarCreciente(orde_telefono);
		break;
	}
	
	for(int i=0;i<cantidad_prov;i++) { 
		CargarFila(i,i);
	}
}

void VentanaProveedores::GrillaOrdenaDecreciente( wxGridEvent& event )  {
	int nro_columna=event.GetCol();
	int cantidad_prov=p_Proveedores->CantidadProveedores();
	
	switch(nro_columna){
	case 0:
		p_Proveedores->OrdenarDecreciente(orde_nombre);
		break;
	case 1:
		p_Proveedores->OrdenarDecreciente(orde_empresa);
		break;
	case 2:
		p_Proveedores->OrdenarDecreciente(orde_rubro);
		break;
	case 3:
		p_Proveedores->OrdenarDecreciente(orde_telefono);
		break;
	}
	
	for(int i=0;i<cantidad_prov;i++) { 
		CargarFila(i,i);
	}
}

void VentanaProveedores::CambiaRelacion( wxSizeEvent& event )  {
	Layout(); 
	int Tamanio[4], AnchoAnterior=0; 
	for (int i=0;i<4;i++) { 
		Tamanio[i] = grillaprov->GetColSize(i);
		AnchoAnterior += Tamanio[i];
	}
	int AnchoNuevo=grillaprov->GetSize().GetWidth(); 
	grillaprov->BeginBatch(); 
	for (int i=0;i<4;i++) 
		grillaprov->SetColSize(i,Tamanio[i]*AnchoNuevo/AnchoAnterior);
	grillaprov->EndBatch();
}

