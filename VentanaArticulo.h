#ifndef VENTANAARTICULO_H
#define VENTANAARTICULO_H
#include "wxfb_project.h"
#include "Stock.h"

class VentanaArticulo : public wx_VArticulo {
	
private:
	Stock *p_Stock; 
	
protected:
	void ClickVerificarCodigo( wxCommandEvent& event )  override;
	void ClickAceptarNuevoArt( wxCommandEvent& event )  override;
	void ClickCancelarNuevoArt( wxCommandEvent& event )  override;
	
public:
	VentanaArticulo(wxWindow *parent, Stock *stock);
	~VentanaArticulo();
};

#endif

