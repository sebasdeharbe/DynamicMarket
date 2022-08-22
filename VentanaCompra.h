#ifndef VENTANACOMPRA_H
#define VENTANACOMPRA_H
#include "wxfb_project.h"
#include "Articulo.h"
#include "Stock.h"

class VentanaCompra : public wx_VCompra {
	
private:
	Stock *p_Stock; 
	Articulo aux;
	int pos;
protected:
	void EnterCodigo( wxCommandEvent& event )  override;
	void ClickCodigoCompra( wxCommandEvent& event )  override;
	void ClickTotalCompra( wxCommandEvent& event )  override;
	void ClickCancelarCompra( wxCommandEvent& event )  override;
	void ClickAceptarCompra( wxCommandEvent& event )  override;
	
public:
	VentanaCompra(wxWindow *parent, Stock *stock);
	~VentanaCompra();
};

#endif

