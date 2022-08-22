#ifndef VENTANAPROVEEDOREDITAR_H
#define VENTANAPROVEEDOREDITAR_H
#include "wxfb_project.h"
#include "VentanaProveedorEditar.h"
#include "ListadoProveedores.h"

class VentanaProveedorEditar : public wx_VDatosProveedor {
private:
	ListadoProveedores *p_Proveedores;
	int indice_grilla;
	
protected:
	void ClickCancelarProv (wxCommandEvent & event);
	void ClickAceptarProv (wxCommandEvent & event);
public:
	VentanaProveedorEditar(wxWindow *parent, ListadoProveedores *lista, int indice);
};

#endif

