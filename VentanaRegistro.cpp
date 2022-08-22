#include "VentanaRegistro.h"
#include <wx/grid.h>
#include "Articulo.h"
#include "Registro.h"
#include <wx/string.h>
#include "string_conv.h"

VentanaRegistro::VentanaRegistro(wxWindow *parent, Registro *lista, Stock *stock) : wx_VRegistro(parent), p_ListaVenta(lista), p_Stock(stock)  {
	int cant_datos=p_ListaVenta->CantidadProductos();
	m_grillaventa->AppendRows(cant_datos);
	for(int i=0;i<cant_datos;i++) { 
		CargarFila(i);
	}
	if(p_ListaVenta->VerGananciaTotal()==0){
		m_GananciaTotal->SetValue(std_to_wx("No hay registro"));
	}
	else{
		m_GananciaTotal->SetValue(wxString()<<(p_ListaVenta->VerGananciaTotal()));
	}
	
}

void VentanaRegistro::CargarFila(int i){
	ProductoVenta &aux=(*p_ListaVenta)[i];
	string fecha=aux.fecha;
	vector <int> posart=p_Stock->BuscarPorCodigo(aux.codigoart);
	if(posart.size()){
		int pos=posart[0];
		Articulo &a=(*p_Stock)[pos];
		
		m_grillaventa->SetCellValue(i, 0, wxString()<<aux.fecha);
		m_grillaventa->SetCellValue(i, 1, wxString()<<aux.codigoart);
		m_grillaventa->SetCellValue(i, 2, wxString()<<a.VerNombre());
		m_grillaventa->SetCellValue(i, 3, wxString()<<aux.cantidad);
		m_grillaventa->SetCellValue(i, 4, wxString()<<aux.ganancia);
	}
	else{
		m_grillaventa->SetCellValue(i, 0, wxString()<<aux.fecha);
		m_grillaventa->SetCellValue(i, 1, wxString()<<aux.codigoart);
		m_grillaventa->SetCellValue(i, 2, std_to_wx("Atención! Producto eliminado del stock"));
		m_grillaventa->SetCellValue(i, 3, wxString()<<aux.cantidad);
		m_grillaventa->SetCellValue(i, 4, wxString()<<aux.ganancia);
	}
	
}

VentanaRegistro::~VentanaRegistro() {
	
}

void VentanaRegistro::CambiaRelacion( wxSizeEvent& event )  {
	Layout();
	int Tamanio[5];
	int AnchoAnterior=0;
	for(int i=0;i<5;i++) { 
		Tamanio[i]=m_grillaventa->GetColSize(i);
		AnchoAnterior+=Tamanio[i];
	}
	int AnchoNuevo=m_grillaventa->GetSize().GetWidth();
	m_grillaventa->BeginBatch();
	for(int i=0;i<5;i++) { 
		m_grillaventa->SetColSize(i, Tamanio[i]*AnchoNuevo/AnchoAnterior);
	}
	m_grillaventa->EndBatch();
}
