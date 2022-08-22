#include "VentanaDatosProveedor.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "Proveedor.h"
#include "ListadoProveedores.h"

VentanaDatosProveedor::VentanaDatosProveedor(wxWindow *parent, ListadoProveedores *lista) : wx_VDatosProveedor(parent), p_Proveedores(lista) {
	
}

void VentanaDatosProveedor::ClickCancelarProv( wxCommandEvent& event )  {
	EndModal(0);
}

void VentanaDatosProveedor::ClickAceptarProv( wxCommandEvent& event )  {
	Proveedor aux(wx_to_std(m_NombreProv->GetValue()),
				  wx_to_std(m_TelefonoProv->GetValue()),
				  wx_to_std(m_DireccionProv->GetValue()),
				  wx_to_std(m_EmailProv->GetValue()),
				  wx_to_std(m_CategoriaProv->GetValue()),
				  wx_to_std(m_EmpresaProv->GetValue()));
	
	string salidaerrores=aux.Validaciones();
	if(salidaerrores.size()){
		wxMessageBox(std_to_wx(salidaerrores), "Atención!", wxOK|wxICON_ERROR,this);
	}
	else{
		p_Proveedores->AgregarProveedor(aux);
		p_Proveedores->GuardarDatos();
		EndModal(1);
	}
}

VentanaDatosProveedor::~VentanaDatosProveedor() {
	
}

