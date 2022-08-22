#include "VentanaVenta.h"
#include "Stock.h"
#include "Articulo.h"
#include "string_conv.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include "FuncionFecha.h"


VentanaVenta::VentanaVenta(wxWindow *parent, Stock *stock, Registro *listaventa) : wx_VVenta(parent), p_Stock(stock), p_RegistroVenta(listaventa) {
	
}

VentanaVenta::~VentanaVenta() {
	
}

void VentanaVenta::CancelarVenta( wxCommandEvent& event )  {
	EndModal(0);
}

void VentanaVenta::ConfirmarVenta( wxCommandEvent& event )  {
	int cantidad;
	long cantlong;
	m_CantidadVenta->GetValue().ToLong(&cantlong);
	cantidad=cantlong;
	
	if(p_Stock->RegistrarVenta(aux, cantidad)){
		p_Stock->GuardarDatos();
		Articulo aux2=aux;
		aux2.ModificarCantidad(aux.VerCantidad()-cantidad);
		if(aux2.VerificarCantidadCritica()){
			string salida;
			int a=aux2.VerCantidad();
			salida+="La cantidad del producto es baja\n";
			salida+="Cantidad: ";
			salida+=to_string(a);
			salida+="\n";
			salida+="Comuníquese con el Proveedor\n";
			wxMessageBox(std_to_wx(salida), "Atención!");  
		}
		ProductoVenta vendido;
		vendido.codigoart=aux.VerCodigo();
		string fecha=ObtenerFechayHora();
		strcpy(vendido.fecha, fecha.c_str());
		vendido.cantidad=cantidad;
		vendido.ganancia=(aux.VerGanancia()*cantidad);
		if(!p_RegistroVenta->GuardarVenta(vendido)){
			wxMessageBox(std_to_wx("no se pudo guardar"));
		}

		EndModal(1);
	}
	else{
		wxMessageBox("No se ha podido realizar la venta por insuficiencia de Stock del Artículo. Comuníquese con el Proveedor.", "Atención!", wxOK);
	}
	
}

void VentanaVenta::CargarCodigo( wxCommandEvent& event )  {
	long codigo;
	m_CodigoVenta->GetValue().ToLong(&codigo);
	vector <int> vcodigo;
	vcodigo=p_Stock->BuscarPorCodigo(codigo);
	if(vcodigo.size()>0){
		aux=(*p_Stock)[vcodigo[0]];
		m_NombreArtVenta->SetValue(std_to_wx(aux.VerNombre()));
		m_CategoriaArtVenta->SetValue(std_to_wx(aux.VerCategoria()));
		m_PVentaVenta->SetValue(wxString()<<(aux.VerPrecioVenta())); 
	}
	else{
		wxMessageBox("El código no corresponde a ningún producto", "Código inválido");
	}
}

void VentanaVenta::CalcularVenta( wxCommandEvent& event )  {
	long cantidad;
	m_CantidadVenta->GetValue().ToLong(&cantidad);
	double total=aux.VerPrecioVenta()*cantidad;
	m_TotalVenta->SetValue(wxString()<<total);
}

void VentanaVenta::EnterCodigo( wxCommandEvent& event )  {
	CargarCodigo(event);
}

