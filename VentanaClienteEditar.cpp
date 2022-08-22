#include "VentanaClienteEditar.h"
#include "Cliente.h"
#include "ListadoClientes.h"
#include <wx/string.h>
#include "string_conv.h"
#include <wx/msgdlg.h>

VentanaClienteEditar::VentanaClienteEditar(wxWindow *parent, ListadoClientes *lista, int indice) : wx_VDatosCliente(parent), p_Clientes(lista), indicegrilla(indice) {
	Cliente aux=(*p_Clientes)[indicegrilla];
	m_NombreCliente->SetValue(std_to_wx(aux.VerNombre()));
	m_RegistroCliente->SetValue(wxString()<<aux.VerCodigoCliente());
	m_DireccionCliente->SetValue(std_to_wx(aux.VerDireccion()));
	m_TelefonoCliente->SetValue(std_to_wx(aux.VerTelefono()));
	m_EmailCliente->SetValue(std_to_wx(aux.VerEmail()));
	
}

void VentanaClienteEditar::ClickCancelarCliente (wxCommandEvent & event) {
	EndModal(0);
}

void VentanaClienteEditar::ClickAceptarCliente (wxCommandEvent & event) {
	long registro;
	m_RegistroCliente->GetValue().ToLong(&registro);
	
	Cliente aux(wx_to_std(m_NombreCliente->GetValue()),
				wx_to_std(m_TelefonoCliente->GetValue()),
				wx_to_std(m_DireccionCliente->GetValue()),
				wx_to_std(m_EmailCliente->GetValue()),
				registro);
	
	string salidaerrores=aux.Validaciones();
	if(salidaerrores.size()){
		wxMessageBox(std_to_wx(salidaerrores), "Atención!", wxOK|wxICON_ERROR,this);
	}
	else{
		(*p_Clientes)[indicegrilla]=aux;
		p_Clientes->GuardarDatos();
		EndModal(1);
	}

}

VentanaClienteEditar::~VentanaClienteEditar(){
	
}
