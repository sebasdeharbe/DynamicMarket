#include "VentAuxCompra.h"
#include "Articulo.h"
#include <wx/msgdlg.h>

VentAuxCompra::VentAuxCompra(wxWindow *parent, Articulo *aux) : wx_AuxCompra(parent), p_Art(aux) {
	
}

void VentAuxCompra::AceptarPrecio( wxCommandEvent& event )  {
	double pventa;
	m_NPrecioVenta->GetValue().ToDouble(&pventa);
	if (pventa>p_Art->VerPrecioCompra()){
		p_Art->ModificarPrecioVenta(pventa);
		EndModal(1);
	}
	else{
		wxMessageBox("El nuevo precio de venta es menor al precio de compra", "Atención!");
	}
	
	
}

VentAuxCompra::~VentAuxCompra() {
	
}

void VentAuxCompra::EnterPrecio( wxCommandEvent& event )  {
	AceptarPrecio(event);
}

