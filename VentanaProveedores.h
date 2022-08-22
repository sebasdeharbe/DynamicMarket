#ifndef VENTANAPROVEEDORES_H
#define VENTANAPROVEEDORES_H
#include "wxfb_project.h"
#include "ListadoProveedores.h"

class VentanaProveedores : public wx_VentProveedores {
	
private:
	ListadoProveedores *p_Proveedores;
	void CargarFila(int i, int j);
	
protected:
	void CambiaRelacion( wxSizeEvent& event )  override;
	void ClickGrilla( wxGridEvent& event )  override;
	void GrillaOrdenaCreciente( wxGridEvent& event )  override;
	void GrillaOrdenaDecreciente( wxGridEvent& event )  override;
	void EnterNombre( wxCommandEvent& event )  override;
	void BuscarNombre( wxCommandEvent& event )  override;
	void EnterEmpresa( wxCommandEvent& event )  override;
	void BuscarEmpresa( wxCommandEvent& event )  override;
	void EnterCategoria( wxCommandEvent& event )  override;
	void BuscarCategoria( wxCommandEvent& event )  override;
	void ModificarProveedor( wxCommandEvent& event )  override;
	void NuevoProveedor( wxCommandEvent& event )  override;
	void EliminarProveedor( wxCommandEvent& event )  override;
	
public:
	VentanaProveedores(wxWindow *parent, ListadoProveedores *lista);
	~VentanaProveedores();
};

#endif

