#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H
#include "wxfb_project.h"
#include "Stock.h"
#include "ListadoProveedores.h"
#include "ListadoClientes.h"
#include "Registro.h"

class VentanaPrincipal : public wx_VPrincipal {
	
private:
	Stock *p_Stock;
	ListadoClientes p_clientes;
	ListadoProveedores p_proveedores;
	Registro p_venta;
	
	void CargarFila(int i, int j);
	
protected:
	void OnClickRegistro( wxCommandEvent& event )  override;
	void OnClickProveedores( wxCommandEvent& event )  override;
	void OnClickClientes( wxCommandEvent& event )  override;
	void EnterNombre( wxCommandEvent& event )  override;
	void EnterCodigo( wxCommandEvent& event )  override;
	void EnterCategoria( wxCommandEvent& event )  override;
	void CambiaRelacion( wxSizeEvent& event )  override;
	void ClickBuscaNombre( wxCommandEvent& event )  override;
	void ClickBuscarCodigo( wxCommandEvent& event )  override;
	void ClickBuscarCategoria( wxCommandEvent& event )  override;
	void ClickRealizarCompra( wxCommandEvent& event )  override;
	void DobleClickGrilla( wxGridEvent& event )  override;
	void ClickGrillaCreciente( wxGridEvent& event )  override;
	void ClickGrillaDecreciente( wxGridEvent& event )  override;
	void ClickEliminarArticulo( wxCommandEvent& event )  override;
	void ClickAyuda( wxCommandEvent& event )  override;
	void ClickAcercaDe( wxCommandEvent& event )  override;
	void NuevoArticulo( wxCommandEvent& event )  override;
	void RealizarVenta( wxCommandEvent& event )  override;
	void ModificarArticulo( wxCommandEvent& event )  override;
	
public:
	VentanaPrincipal(Stock *stock);
	~VentanaPrincipal();
};

#endif

