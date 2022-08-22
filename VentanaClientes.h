#ifndef VENTANACLIENTES_H
#define VENTANACLIENTES_H
#include "wxfb_project.h"
#include "ListadoClientes.h"

class VentanaClientes : public wx_VentClientes {
	
private:
	ListadoClientes *p_Clientes;
	void CargarFila (int i, int j);
	
	
protected:
	void CambiaRelacion( wxSizeEvent& event )  override;
	void ClickGrilla( wxGridEvent& event )  override;
	void GrillaOrdenaCreciente( wxGridEvent& event )  override;
	void GrillaOrdenaDecreciente( wxGridEvent& event )  override;
	void EnterRegistro( wxCommandEvent& event )  override;
	void ModificarCliente( wxCommandEvent& event )  override;
	void NuevoCliente( wxCommandEvent& event )  override;
	void EliminarCliente( wxCommandEvent& event )  override;
	void EnterNombre( wxCommandEvent& event )  override;
	void BuscarNombre( wxCommandEvent& event )  override;
	void BuscarRegistro( wxCommandEvent& event )  override;
	
public:
	VentanaClientes(wxWindow *parent, ListadoClientes *lista);
	~VentanaClientes();
};

#endif

