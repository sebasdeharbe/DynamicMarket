#ifndef VENTAUXCOMPRA_H
#define VENTAUXCOMPRA_H
#include "wxfb_project.h"
#include "Articulo.h"

class VentAuxCompra : public wx_AuxCompra {
	
private:
	Articulo *p_Art;
protected:
	void EnterPrecio( wxCommandEvent& event )  override;
	void AceptarPrecio( wxCommandEvent& event )  override;
	
public:
	VentAuxCompra(wxWindow *parent, Articulo *aux);
	~VentAuxCompra();
};

#endif

