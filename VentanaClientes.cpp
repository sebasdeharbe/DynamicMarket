#include "VentanaClientes.h"
#include <wx/grid.h>
#include "string_conv.h"
#include <vector>
#include <wx/event.h>
#include <wx/msgdlg.h>
#include "VentanaDatosCliente.h"
#include <wx/string.h>
#include "VentanaClienteEditar.h"



using namespace std;

VentanaClientes::VentanaClientes(wxWindow *parent, ListadoClientes *lista) : wx_VentClientes(parent), p_Clientes(lista) {
	int cant_clientes = p_Clientes->CantidadClientes();
	grillaclient->AppendRows(cant_clientes);
	for(int i=0;i<cant_clientes;i++) { 
		CargarFila(i,i);
	}
	grillaclient->SetSelectionMode(wxGrid::wxGridSelectRows);
	
}

void VentanaClientes::CargarFila (int i, int j){
	Cliente &aux=(*p_Clientes)[i];
	
	grillaclient->SetCellValue(j, 0, wxString()<<aux.VerCodigoCliente());
	grillaclient->SetCellValue(j, 1, aux.VerNombre());
	grillaclient->SetCellValue(j, 2, aux.VerDireccion());
	grillaclient->SetCellValue(j, 3, aux.VerTelefono());
	
}

void VentanaClientes::EnterNombre( wxCommandEvent& event )  {
	BuscarNombre(event);
}

void VentanaClientes::BuscarNombre( wxCommandEvent& event )  {
	vector <int> busqueda=p_Clientes->BuscarPorNombre(wx_to_std(m_BuscaNombre->GetValue()));
	if(busqueda.size()==0){
		wxMessageBox("No se encontraron coincidencias");
	}
	else{
		grillaclient->ClearGrid();
		for(int i=0;i<busqueda.size();i++) { 
			CargarFila(busqueda[i], i);
			grillaclient->SetGridCursor(busqueda[i],1); 
			grillaclient->SelectRow(busqueda[i]);
		}
	}

}

void VentanaClientes::BuscarRegistro( wxCommandEvent& event )  {
	long nrocliente;
	m_BuscaRegistro->GetValue().ToLong(&nrocliente);
	vector<int> busqueda=p_Clientes->BuscarPorRegistro(nrocliente);
	if(busqueda.size()==0){
		wxMessageBox("No se encontraron coincidencias");
		for(int i=0;i<p_Clientes->CantidadClientes();i++) { 
			CargarFila(i,i);//actualiza la grilla si no ha coincidencia
		}
	}
	else{
		grillaclient->ClearGrid();
		for(int i=0;i<busqueda.size();i++) { 
			CargarFila(busqueda[i],i);
			grillaclient->SetGridCursor(busqueda[i],0); 
			grillaclient->SelectRow(busqueda[i]);
		}
	}
	
}


void VentanaClientes::EnterRegistro( wxCommandEvent& event )  {
	BuscarRegistro(event);
}

void VentanaClientes::ModificarCliente( wxCommandEvent& event )  {
	if(p_Clientes->CantidadClientes()==0){
		wxMessageBox(std_to_wx("No tiene clientes registrados para modificar"), "Atención!");
	}
	else{
		int row=grillaclient->GetGridCursorRow();
		long codigoindice;
		grillaclient->GetCellValue(row,0).ToLong(&codigoindice);
		int codigo=codigoindice;
		string nombre=wx_to_std(grillaclient->GetCellValue(row, 1));
		string direccion=wx_to_std(grillaclient->GetCellValue(row, 2));
		string telefono=wx_to_std(grillaclient->GetCellValue(row, 3));
		vector <int> indice=p_Clientes->BuscarPorRegistro(codigo);
		int buscar;
		if(indice.size()==1){
			buscar=indice[0];
		}
		else{
			for(int i=0;i<indice.size();i++) { 
				Cliente &aux=(*p_Clientes)[indice[i]];
				if(aux.VerCodigoCliente()==codigo and
				   aux.VerNombre()==nombre and
				   aux.VerDireccion()==direccion and
				   aux.VerTelefono()==telefono){
					buscar=indice[i];
				}
			}
		}
		
		
		VentanaClienteEditar dialog_client(this, p_Clientes, buscar);
		if (dialog_client.ShowModal()){
			CargarFila(buscar, row);
		}
	}
	

}

void VentanaClientes::NuevoCliente( wxCommandEvent& event )  {
	VentanaDatosCliente dialog_cliente(this, p_Clientes);
	if(dialog_cliente.ShowModal()==1){
		grillaclient->AppendRows(1);
		int posicion = p_Clientes->CantidadClientes()-1;
		CargarFila(posicion, posicion);
		grillaclient->SelectRow(posicion);
	}
	
}

void VentanaClientes::EliminarCliente( wxCommandEvent& event )  {
	if(p_Clientes->CantidadClientes()==0){
		wxMessageBox(std_to_wx("No tiene clientes registrados para eliminar"), "Atención!");
	}
	else{
		int fila=grillaclient->GetGridCursorRow();
		int mensaje=wxMessageBox("¿Está seguro de eliminar el registro del Cliente?", grillaclient->GetCellValue(fila,1), wxYES_NO);
		if(mensaje==wxYES){
			long codigoindice;
			grillaclient->GetCellValue(fila,0).ToLong(&codigoindice);
			int codigo=codigoindice;
			string nombre=wx_to_std(grillaclient->GetCellValue(fila, 1));
			string direccion=wx_to_std(grillaclient->GetCellValue(fila, 2));
			string telefono=wx_to_std(grillaclient->GetCellValue(fila, 3));
			vector <int> indice=p_Clientes->BuscarPorRegistro(codigo);
			if(indice.size()==1){
				p_Clientes->EliminarCliente(indice[0]);
			}
			else{
				for(int i=0;i<indice.size();i++) { 
					Cliente &aux=(*p_Clientes)[indice[i]];
					if(aux.VerCodigoCliente()==codigo and
					   aux.VerNombre()==nombre and
					   aux.VerDireccion()==direccion and
					   aux.VerTelefono()==telefono){
						p_Clientes->EliminarCliente(indice[i]);
					}
				}
			}
			grillaclient->DeleteRows(fila);
			p_Clientes->GuardarDatos();
		}
	}
	
}


void VentanaClientes::ClickGrilla( wxGridEvent& event )  {
	int row=grillaclient->GetGridCursorRow();
	long codigoindice;
	grillaclient->GetCellValue(row,0).ToLong(&codigoindice);
	int codigo=codigoindice;
	string nombre=wx_to_std(grillaclient->GetCellValue(row, 1));
	string direccion=wx_to_std(grillaclient->GetCellValue(row, 2));
	string telefono=wx_to_std(grillaclient->GetCellValue(row, 3));
	vector <int> indice=p_Clientes->BuscarPorRegistro(codigo);
	int buscar;
	if(indice.size()==1){
		buscar=indice[0];
	}
	else{
		for(int i=0;i<indice.size();i++) { 
			Cliente &aux=(*p_Clientes)[indice[i]];
			if(aux.VerCodigoCliente()==codigo and
			   aux.VerNombre()==nombre and
			   aux.VerDireccion()==direccion and
			   aux.VerTelefono()==telefono){
				buscar=indice[i];
			}
		}
	}
	
	
	VentanaClienteEditar dialog_client(this, p_Clientes, buscar);
	if (dialog_client.ShowModal()){
		CargarFila(buscar, row);
	}
}

void VentanaClientes::GrillaOrdenaCreciente( wxGridEvent& event )  {
	int nro_columna=event.GetCol();
	int cantidad_clientes=p_Clientes->CantidadClientes();
	
	switch(nro_columna){
	case 0:
		p_Clientes->OrdenarCreciente(orden_registro);
		break;
	case 1:
		p_Clientes->OrdenarCreciente(orden_nombre);
		break;
	case 2:
		p_Clientes->OrdenarCreciente(orden_direccion);
		break;
	case 3:
		p_Clientes->OrdenarCreciente(orden_telefono);
		break;
	}
	
	for(int i=0;i<cantidad_clientes;i++) { 
		CargarFila(i,i);
	}
}

void VentanaClientes::GrillaOrdenaDecreciente( wxGridEvent& event )  {
	int nro_columna=event.GetCol();
	int cantidad_clientes=p_Clientes->CantidadClientes();
	
	switch(nro_columna){
	case 0:
		p_Clientes->OrdenarDecreciente(orden_registro);
		break;
	case 1:
		p_Clientes->OrdenarDecreciente(orden_nombre);
		break;
	case 2:
		p_Clientes->OrdenarDecreciente(orden_direccion);
		break;
	case 3:
		p_Clientes->OrdenarDecreciente(orden_telefono);
		break;
	}
	
	for(int i=0;i<cantidad_clientes;i++) { 
		CargarFila(i,i);
	}
}

void VentanaClientes::CambiaRelacion( wxSizeEvent& event )  {
	Layout();
	int Tamanio[4], AnchoAnterior=0;
	for(int i=0;i<4;i++) { 
		Tamanio[i]=grillaclient->GetColSize(i);
		AnchoAnterior += Tamanio[i];
	}
	int AnchoNuevo=grillaclient->GetSize().GetWidth(); 
	grillaclient->BeginBatch();
	for(int i=0;i<4;i++) { 
		grillaclient->SetColSize(i,Tamanio[i]*AnchoNuevo/AnchoAnterior);
	}
	grillaclient->EndBatch();
}


VentanaClientes::~VentanaClientes() {
	
}

