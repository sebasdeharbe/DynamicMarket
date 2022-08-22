#ifndef VENTANADATOSPROVEEDOR_H
#define VENTANADATOSPROVEEDOR_H
#include "wxfb_project.h"
#include "ListadoProveedores.h"

class VentanaDatosProveedor : public wx_VDatosProveedor {
	
private:
	ListadoProveedores *p_Proveedores;
protected:
	void ClickCancelarProv( wxCommandEvent& event )  override;
	void ClickAceptarProv( wxCommandEvent& event )  override;
	
public:
	VentanaDatosProveedor(wxWindow *parent, ListadoProveedores *lista);
	~VentanaDatosProveedor();
};

#endif

