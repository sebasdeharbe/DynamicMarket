#include "VentanaDatosCliente.h"
#include "ListadoClientes.h"
#include "string_conv.h"
#include "Cliente.h"
#include <wx/msgdlg.h>

VentanaDatosCliente::VentanaDatosCliente(wxWindow *parent, ListadoClientes *lista) : wx_VDatosCliente(parent), p_Clientes(lista) {
	
}

void VentanaDatosCliente::ClickCancelarCliente( wxCommandEvent& event )  {
	EndModal(0);
}

void VentanaDatosCliente::ClickAceptarCliente( wxCommandEvent& event )  {
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
		p_Clientes->AgregarCliente(aux);
		p_Clientes->GuardarDatos();
		EndModal(1);
	}
	
}

VentanaDatosCliente::~VentanaDatosCliente() {
	
}

