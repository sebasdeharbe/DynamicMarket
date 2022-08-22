#ifndef VENTANAARTICULOEDITAR_H
#define VENTANAARTICULOEDITAR_H
#include "wxfb_project.h"
#include "Stock.h"

class VentanaArticuloEditar : public wx_VArticulo {
private:
	Stock *p_Stock;
	int p_indicegrilla;
protected:
	void ClickVerificarCodigo (wxCommandEvent & event);
	void ClickAceptarNuevoArt (wxCommandEvent & event);
	void ClickCancelarNuevoArt (wxCommandEvent & event);
public:
	VentanaArticuloEditar(wxWindow *parent, Stock *stock, int indicegrilla);
	~VentanaArticuloEditar(); 
};

#endif

