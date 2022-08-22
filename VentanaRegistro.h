#ifndef VENTANAREGISTRO_H
#define VENTANAREGISTRO_H
#include "wxfb_project.h"
#include "Registro.h"
#include "Stock.h"

class VentanaRegistro : public wx_VRegistro {
	
private:
	Registro *p_ListaVenta;
	Stock *p_Stock;
	void CargarFila(int i);
protected:
	void CambiaRelacion( wxSizeEvent& event )  override;
	
public:
	VentanaRegistro(wxWindow *parent, Registro *lista, Stock *stock);
	~VentanaRegistro();
};

#endif

