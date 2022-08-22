#include "VentanaArticulo.h"
#include "Stock.h"
#include "Articulo.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include <wx/wx.h>
#include <string>
using namespace std;

VentanaArticulo::VentanaArticulo(wxWindow *parent, Stock *stock) : wx_VArticulo(parent), p_Stock(stock) {
	
}


void VentanaArticulo::ClickVerificarCodigo( wxCommandEvent& event )  {
	long codigo;
	m_Codigo_Art->GetValue().ToLong(&codigo);
	if(p_Stock->ComprobarCodigo(codigo)){
		wxMessageBox(std_to_wx("El c�digo ya corresponde a otro producto"), "Atenci�n!", wxOK|wxICON_ERROR,this);
		
	}
	else{
		wxMessageBox(std_to_wx("C�digo de producto disponible"), " ", wxOK,this);
	}
}

void VentanaArticulo::ClickAceptarNuevoArt( wxCommandEvent& event )  {
	long codigo;
	double pventa;
	double pcompra;
	long cantidad;
	long cantcritica;
	m_Codigo_Art->GetValue().ToLong(&codigo);
	m_PCompra_Art->GetValue().ToDouble(&pcompra);
	m_PVenta_Art->GetValue().ToDouble(&pventa);
	m_Cantidad_Art->GetValue().ToLong(&cantidad);
	m_CantidadCritica->GetValue().ToLong(&cantcritica);
	
	Articulo aux(codigo,
				 wx_to_std(m_Nom_Art->GetValue()),
				 cantidad,
				 wx_to_std(m_Categoria_Art->GetValue()),
				 pcompra,
				 pventa,
				 cantcritica);
	
	
	if(aux.VerificarCantidadCritica()){
		string salida;
		int a=aux.VerCantidad();
		cantidad=aux.VerCantidad();
		salida+="La cantidad del producto es baja\n";
		salida+="Cantidad: ";
		salida+=to_string(a);
		salida+="\n";
		salida+="Comun�quese con el Proveedor\n";
		wxMessageBox(std_to_wx(salida), "Atenci�n!");  
	}
	
	string salidaerrores=aux.Validaciones();
	if (salidaerrores.size()){
		wxMessageBox(std_to_wx(salidaerrores), "Atenci�n!", wxOK|wxICON_ERROR,this);
	}
	else{
		if(p_Stock->ComprobarCodigo(codigo)){
			wxMessageBox(std_to_wx("El c�digo ya corresponde a otro producto"), "Atenci�n!", wxOK|wxICON_ERROR,this);
		}
		else{
			p_Stock->AgregarArticulo(aux);
			p_Stock->GuardarDatos();
			EndModal(1); 
		}
	}
}

void VentanaArticulo::ClickCancelarNuevoArt( wxCommandEvent& event )  {
	EndModal(0);
}

VentanaArticulo::~VentanaArticulo() {
	
}

