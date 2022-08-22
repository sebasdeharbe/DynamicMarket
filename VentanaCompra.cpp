#include "VentanaCompra.h"
#include "Stock.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "VentAuxCompra.h"
#include <wx/wx.h>

VentanaCompra::VentanaCompra(wxWindow *parent, Stock *stock) : wx_VCompra(parent), p_Stock(stock) {
	
}

void VentanaCompra::ClickCodigoCompra( wxCommandEvent& event )  {
	long codigo;
	m_CodigoCompra->GetValue().ToLong(&codigo);
	vector <int> vcodigo;
	vcodigo=p_Stock->BuscarPorCodigo(codigo);
	if(vcodigo.size()>0){
		aux=(*p_Stock)[vcodigo[0]];
		m_NombreCompra->SetValue(std_to_wx(aux.VerNombre()));
		m_CategoriaCompra->SetValue(std_to_wx(aux.VerCategoria()));
	}
	else{
		wxMessageBox("El código no corresponde a ningún producto", "Código inválido");
	}
}

void VentanaCompra::ClickTotalCompra( wxCommandEvent& event )  {
	long cantidad;
	double preciocompra;
	m_PCompraCompra->GetValue().ToDouble(&preciocompra);
	m_CantidadCompra->GetValue().ToLong(&cantidad);
	double total=preciocompra*cantidad;
	m_TotalCompra->SetValue(wxString()<<total);
}

void VentanaCompra::ClickCancelarCompra( wxCommandEvent& event )  {
	EndModal(0);
}

void VentanaCompra::ClickAceptarCompra( wxCommandEvent& event )  {
	long codigo;
	m_CodigoCompra->GetValue().ToLong(&codigo);
	vector <int> vcodigo;
	vcodigo=p_Stock->BuscarPorCodigo(codigo);
	aux=(*p_Stock)[vcodigo[0]];
	double pcompra;
	m_PCompraCompra->GetValue().ToDouble(&pcompra);
	if(aux.VerPrecioCompra()==pcompra){
		int cantidad;
		long cantlong;
		m_CantidadCompra->GetValue().ToLong(&cantlong);
		cantidad=cantlong;
		if(p_Stock->RegistrarCompra(aux, cantidad)){
			p_Stock->GuardarDatos();
			EndModal(1);
		}
		else{
			wxMessageBox("No se ha podido realizar la venta por insuficiencia de Stock del Artículo. Comuníquese con el Proveedor.", "Atención", wxOK);
		}
	}
	else{
		aux.ModificarPrecioCompra(pcompra);
		
		if(aux.VerPrecioVenta()<=pcompra){
			VentAuxCompra dialog_pventa (this, &aux);
			if (dialog_pventa.ShowModal()==1){
				p_Stock->GuardarDatos();
			}
		}
		else{
			int mensaje=wxMessageBox("¿Desea modificar el precio de venta?", std_to_wx(aux.VerNombre()), wxYES_NO);
			if(mensaje==wxYES){
				VentAuxCompra dialog_pventa (this, &aux);
				if (dialog_pventa.ShowModal()==1){
					p_Stock->GuardarDatos();
				}
			}
		}
		
		(*p_Stock)[vcodigo[0]]=aux;
		int cantidad;
		long cantlong;
		m_CantidadCompra->GetValue().ToLong(&cantlong);
		cantidad=cantlong;
		if(p_Stock->RegistrarCompra(aux, cantidad)){
			p_Stock->GuardarDatos();
			EndModal(1);
		}
		else{
			wxMessageBox("No se ha podido realizar la venta por insuficiencia de Stock del Artículo. Comuníquese con el Proveedor.", "Atención", wxOK);
		}
	}
		
}

VentanaCompra::~VentanaCompra() {
	
}

void VentanaCompra::EnterCodigo( wxCommandEvent& event )  {
	ClickCodigoCompra(event);
}


