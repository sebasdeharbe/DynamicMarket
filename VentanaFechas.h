#ifndef VENTANAFECHAS_H
#define VENTANAFECHAS_H
#include "wxfb_project.h"
#include "Registro.h"

class VentanaFechas : public wx_VFechas {
	
private:
	Registro *p_Venta;
	
protected:
	void ClickCancelarFecha( wxCommandEvent& event )  override;
	void ClickAceptarFecha( wxCommandEvent& event )  override;
	
public:
	VentanaFechas(wxWindow *parent, Registro *lista);
	~VentanaFechas();
};

#endif

