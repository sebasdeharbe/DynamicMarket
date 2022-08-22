#include "VentanaArticuloEditar.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

VentanaArticuloEditar::VentanaArticuloEditar(wxWindow *parent, Stock *stock, int indicegrilla) : wx_VArticulo(parent), p_Stock(stock), p_indicegrilla(indicegrilla){
	Articulo aux=(*p_Stock)[p_indicegrilla];
	m_Nom_Art->SetValue(std_to_wx(aux.VerNombre()));
	m_Codigo_Art->SetValue(wxString()<<(aux.VerCodigo()));
	m_PCompra_Art->SetValue(wxString()<<(aux.VerPrecioCompra()));
	m_PVenta_Art->SetValue(wxString()<<(aux.VerPrecioVenta()));
	m_Cantidad_Art->SetValue(wxString()<<(aux.VerCantidad()));
	m_Categoria_Art->SetValue(wxString()<<(aux.VerCategoria()));
	m_CantidadCritica->SetValue(wxString()<<(aux.VerCantidadCritica()));
	m_Codigo_Art->Disable();
	m_Cantidad_Art->Disable();
}

void VentanaArticuloEditar::ClickVerificarCodigo (wxCommandEvent & event) {
	
	wxMessageBox("El código corresponde a este producto y no se puede modificar");
}

void VentanaArticuloEditar::ClickAceptarNuevoArt (wxCommandEvent & event) {
	long codigo;
	double pventa;
	double pcompra;
	long cantidad;
	long cant_critica;
	m_Codigo_Art->GetValue().ToLong(&codigo);
	m_PCompra_Art->GetValue().ToDouble(&pcompra);
	m_PVenta_Art->GetValue().ToDouble(&pventa);
	m_Cantidad_Art->GetValue().ToLong(&cantidad);
	m_CantidadCritica->GetValue().ToLong(&cant_critica);
	
	
	
	
	Articulo aux(codigo,
				 wx_to_std(m_Nom_Art->GetValue()),
				 cantidad,
				 wx_to_std(m_Categoria_Art->GetValue()),
				 pcompra,
				 pventa,
				 cant_critica);
	
	
	string salidaerrores=aux.Validaciones();
	
	if(p_Stock->ComprobarCodigo(codigo) and codigo!=aux.VerCodigo()){
		wxMessageBox(std_to_wx("El código ya corresponde a otro producto"), "Atención!", wxOK|wxICON_ERROR,this);
	}
	
	if(aux.VerificarCantidadCritica()){
		string salida;
		int a=aux.VerCantidad();
		cantidad=aux.VerCantidad();
		salida+="La cantidad del producto es baja\n";
		salida+="Cantidad: ";
		salida+=to_string(a);
		salida+="\n";
		salida+="Comuniquesé con el Proveedor\n";
		wxMessageBox(std_to_wx(salida), "Atención!");  
	}
	
	if (salidaerrores.size()){
		wxMessageBox(std_to_wx(salidaerrores), "Atención!", wxOK|wxICON_ERROR,this);
	}
	else{
		(*p_Stock)[p_indicegrilla]=aux;
		p_Stock->GuardarDatos();
		EndModal(1); 
	}
}

void VentanaArticuloEditar::ClickCancelarNuevoArt (wxCommandEvent & event) {
	EndModal(0);
}

VentanaArticuloEditar::~VentanaArticuloEditar(){
	 
}

