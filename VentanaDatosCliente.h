#ifndef VENTANADATOSCLIENTE_H
#define VENTANADATOSCLIENTE_H
#include "wxfb_project.h"
#include "ListadoClientes.h"

class VentanaDatosCliente : public wx_VDatosCliente {
	
private:
	ListadoClientes *p_Clientes;
	
	
protected:
	void ClickCancelarCliente( wxCommandEvent& event )  override;
	void ClickAceptarCliente( wxCommandEvent& event )  override;
	
public:
	VentanaDatosCliente(wxWindow *parent, ListadoClientes *lista);
	~VentanaDatosCliente();
};

#endif

