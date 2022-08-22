#ifndef VENTANACLIENTEEDITAR_H
#define VENTANACLIENTEEDITAR_H
#include "wxfb_project.h"
#include "ListadoClientes.h"
#include "VentanaClienteEditar.h"

class VentanaClienteEditar : public wx_VDatosCliente {
private:
	ListadoClientes *p_Clientes;
	int indicegrilla;
protected:
	void ClickCancelarCliente (wxCommandEvent & event);
	void ClickAceptarCliente (wxCommandEvent & event);
public:
	VentanaClienteEditar(wxWindow *parent, ListadoClientes *lista, int indice);
	~VentanaClienteEditar();
};

#endif

