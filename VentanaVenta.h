#ifndef VENTANAVENTA_H
#define VENTANAVENTA_H
#include "wxfb_project.h"
#include "Stock.h"
#include "Articulo.h"
#include "Registro.h"

class VentanaVenta : public wx_VVenta {
	
private:
	Stock *p_Stock; 
	Registro *p_RegistroVenta;
	Articulo aux;
	int pos;
protected:
	void EnterCodigo( wxCommandEvent& event )  override;
	void CargarCodigo( wxCommandEvent& event )  override;
	void CalcularVenta( wxCommandEvent& event )  override;
	void CancelarVenta( wxCommandEvent& event )  override;
	void ConfirmarVenta( wxCommandEvent& event )  override;
	
public:
	VentanaVenta(wxWindow *parent, Stock *stock, Registro *listaventa);
	~VentanaVenta();
};

#endif

