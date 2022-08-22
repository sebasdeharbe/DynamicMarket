#include "VentanaProveedorEditar.h"
#include "Proveedor.h"
#include "ListadoProveedores.h"
#include "string_conv.h"
#include <wx/string.h>
#include <wx/msgdlg.h>

VentanaProveedorEditar::VentanaProveedorEditar(wxWindow *parent, ListadoProveedores *lista, int indice) : wx_VDatosProveedor(parent), p_Proveedores(lista), indice_grilla(indice)  {
	Proveedor aux=(*p_Proveedores)[indice_grilla];
	m_NombreProv->SetValue(std_to_wx(aux.VerNombre()));
	m_EmpresaProv->SetValue(std_to_wx(aux.VerEmpresa()));
	m_CategoriaProv->SetValue(std_to_wx(aux.VerRubro()));
	m_EmailProv->SetValue(std_to_wx(aux.VerEmail()));
	m_DireccionProv->SetValue(std_to_wx(aux.VerDireccion()));
	m_TelefonoProv->SetValue(wxString()<<aux.VerTelefono());
	
}

void VentanaProveedorEditar::ClickCancelarProv (wxCommandEvent & event) {
	EndModal(0);
}

void VentanaProveedorEditar::ClickAceptarProv (wxCommandEvent & event) {
	long telefono;
	m_TelefonoProv->GetValue().ToLong(&telefono);
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
		(*p_Proveedores)[indice_grilla]=aux;
		p_Proveedores->GuardarDatos();
		EndModal(1);
	}
}

