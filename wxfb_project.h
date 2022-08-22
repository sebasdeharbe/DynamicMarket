///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class wx_VPrincipal
///////////////////////////////////////////////////////////////////////////////
class wx_VPrincipal : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_MenuOpciones;
		wxStaticText* m_staticText41;
		wxTextCtrl* m_BuscaNombre;
		wxButton* m_button29;
		wxStaticText* m_staticText42;
		wxTextCtrl* m_BuscaCodigo;
		wxButton* m_button30;
		wxStaticText* m_staticText43;
		wxTextCtrl* m_BuscaCategoria;
		wxButton* m_button31;
		wxStaticText* m_staticText7;
		wxGrid* grilla;
		wxButton* m_button2;
		wxButton* m_button19;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button23;
		wxButton* m_button5;
		wxButton* m_button6;
		wxButton* m_button39;

		// Virtual event handlers, overide them in your derived class
		virtual void CambiaRelacion( wxSizeEvent& event ) { event.Skip(); }
		virtual void ClickAyuda( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAcercaDe( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnterNombre( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscaNombre( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnterCodigo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscarCodigo( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnterCategoria( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscarCategoria( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrillaCreciente( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrillaDecreciente( wxGridEvent& event ) { event.Skip(); }
		virtual void NuevoArticulo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickRealizarCompra( wxCommandEvent& event ) { event.Skip(); }
		virtual void RealizarVenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void ModificarArticulo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminarArticulo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickProveedores( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickClientes( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickRegistro( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("DynamicMarket"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 720,540 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~wx_VPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VArticulo
///////////////////////////////////////////////////////////////////////////////
class wx_VArticulo : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText16;
		wxTextCtrl* m_Nom_Art;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_Codigo_Art;
		wxButton* m_button7;
		wxStaticText* m_staticText20;
		wxTextCtrl* m_Categoria_Art;
		wxStaticText* m_staticText21;
		wxTextCtrl* m_PCompra_Art;
		wxStaticText* m_staticText22;
		wxTextCtrl* m_PVenta_Art;
		wxStaticText* m_staticText23;
		wxTextCtrl* m_Cantidad_Art;
		wxStaticText* m_staticText43;
		wxTextCtrl* m_CantidadCritica;
		wxButton* m_button9;
		wxButton* m_button10;

		// Virtual event handlers, overide them in your derived class
		virtual void ClickVerificarCodigo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAceptarNuevoArt( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelarNuevoArt( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VArticulo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ARTÍCULO..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 480,360 ), long style = wxDEFAULT_DIALOG_STYLE );
		~wx_VArticulo();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VVenta
///////////////////////////////////////////////////////////////////////////////
class wx_VVenta : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText24;
		wxTextCtrl* m_NombreArtVenta;
		wxStaticText* m_staticText26;
		wxTextCtrl* m_CategoriaArtVenta;
		wxStaticText* m_staticText28;
		wxTextCtrl* m_CodigoVenta;
		wxButton* m_CargarCodigo;
		wxStaticText* m_staticText29;
		wxTextCtrl* m_PVentaVenta;
		wxStaticText* m_staticText30;
		wxTextCtrl* m_CantidadVenta;
		wxButton* m_CargarCantidad;
		wxStaticText* m_staticText32;
		wxTextCtrl* m_TotalVenta;
		wxButton* m_CancelarVenta;
		wxButton* m_ConfirmarVenta;

		// Virtual event handlers, overide them in your derived class
		virtual void EnterCodigo( wxCommandEvent& event ) { event.Skip(); }
		virtual void CargarCodigo( wxCommandEvent& event ) { event.Skip(); }
		virtual void CalcularVenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void CancelarVenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void ConfirmarVenta( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VVenta( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Realizar Venta..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 573,236 ), long style = wxDEFAULT_DIALOG_STYLE );
		~wx_VVenta();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VDatosProveedor
///////////////////////////////////////////////////////////////////////////////
class wx_VDatosProveedor : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText38;
		wxTextCtrl* m_NombreProv;
		wxStaticText* m_staticText39;
		wxTextCtrl* m_EmpresaProv;
		wxStaticText* m_staticText40;
		wxTextCtrl* m_CategoriaProv;
		wxStaticText* m_staticText41;
		wxTextCtrl* m_TelefonoProv;
		wxStaticText* m_staticText42;
		wxTextCtrl* m_DireccionProv;
		wxStaticText* m_staticText43;
		wxTextCtrl* m_EmailProv;
		wxButton* m_button21;
		wxButton* m_button22;

		// Virtual event handlers, overide them in your derived class
		virtual void ClickCancelarProv( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAceptarProv( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VDatosProveedor( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Proveedor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 480,360 ), long style = wxDEFAULT_DIALOG_STYLE );
		~wx_VDatosProveedor();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VCompra
///////////////////////////////////////////////////////////////////////////////
class wx_VCompra : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText27;
		wxTextCtrl* m_NombreCompra;
		wxStaticText* m_staticText28;
		wxTextCtrl* m_CategoriaCompra;
		wxStaticText* m_staticText29;
		wxTextCtrl* m_CodigoCompra;
		wxButton* m_button21;
		wxStaticText* m_staticText30;
		wxTextCtrl* m_PCompraCompra;
		wxStaticText* m_staticText31;
		wxTextCtrl* m_CantidadCompra;
		wxButton* m_button22;
		wxStaticText* m_staticText34;
		wxTextCtrl* m_TotalCompra;
		wxButton* m_button23;
		wxButton* m_button24;

		// Virtual event handlers, overide them in your derived class
		virtual void EnterCodigo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCodigoCompra( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickTotalCompra( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelarCompra( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAceptarCompra( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VCompra( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Realizar Compra"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 566,220 ), long style = wxDEFAULT_DIALOG_STYLE );
		~wx_VCompra();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VDatosCliente
///////////////////////////////////////////////////////////////////////////////
class wx_VDatosCliente : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText38;
		wxTextCtrl* m_NombreCliente;
		wxStaticText* m_staticText39;
		wxTextCtrl* m_RegistroCliente;
		wxStaticText* m_staticText40;
		wxTextCtrl* m_DireccionCliente;
		wxStaticText* m_staticText41;
		wxTextCtrl* m_TelefonoCliente;
		wxStaticText* m_staticText42;
		wxTextCtrl* m_EmailCliente;
		wxButton* m_button28;
		wxButton* m_button29;

		// Virtual event handlers, overide them in your derived class
		virtual void ClickCancelarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAceptarCliente( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VDatosCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Cliente"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 480,360 ), long style = wxDEFAULT_DIALOG_STYLE );
		~wx_VDatosCliente();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VentClientes
///////////////////////////////////////////////////////////////////////////////
class wx_VentClientes : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText41;
		wxStaticText* m_staticText42;
		wxTextCtrl* m_BuscaNombre;
		wxButton* m_button37;
		wxStaticText* m_staticText44;
		wxTextCtrl* m_BuscaRegistro;
		wxButton* m_button38;
		wxGrid* grillaclient;
		wxButton* m_button39;
		wxButton* m_button40;
		wxButton* m_button41;

		// Virtual event handlers, overide them in your derived class
		virtual void CambiaRelacion( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterNombre( wxCommandEvent& event ) { event.Skip(); }
		virtual void BuscarNombre( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnterRegistro( wxCommandEvent& event ) { event.Skip(); }
		virtual void BuscarRegistro( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void GrillaOrdenaCreciente( wxGridEvent& event ) { event.Skip(); }
		virtual void GrillaOrdenaDecreciente( wxGridEvent& event ) { event.Skip(); }
		virtual void ModificarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void NuevoCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void EliminarCliente( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VentClientes( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 720,540 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_FLOAT_ON_PARENT|wxMAXIMIZE_BOX|wxRESIZE_BORDER|wxSTAY_ON_TOP|wxSYSTEM_MENU|wxTAB_TRAVERSAL );

		~wx_VentClientes();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VentProveedores
///////////////////////////////////////////////////////////////////////////////
class wx_VentProveedores : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText44;
		wxStaticText* m_staticText45;
		wxTextCtrl* m_BuscaNombre;
		wxButton* m_button42;
		wxStaticText* m_staticText46;
		wxTextCtrl* m_BuscaEmpresa;
		wxButton* m_button43;
		wxStaticText* m_staticText47;
		wxTextCtrl* m_BuscaRubro;
		wxButton* m_button44;
		wxGrid* grillaprov;
		wxButton* m_button45;
		wxButton* m_button46;
		wxButton* m_button47;

		// Virtual event handlers, overide them in your derived class
		virtual void CambiaRelacion( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterNombre( wxCommandEvent& event ) { event.Skip(); }
		virtual void BuscarNombre( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnterEmpresa( wxCommandEvent& event ) { event.Skip(); }
		virtual void BuscarEmpresa( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnterCategoria( wxCommandEvent& event ) { event.Skip(); }
		virtual void BuscarCategoria( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void GrillaOrdenaCreciente( wxGridEvent& event ) { event.Skip(); }
		virtual void GrillaOrdenaDecreciente( wxGridEvent& event ) { event.Skip(); }
		virtual void ModificarProveedor( wxCommandEvent& event ) { event.Skip(); }
		virtual void NuevoProveedor( wxCommandEvent& event ) { event.Skip(); }
		virtual void EliminarProveedor( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VentProveedores( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 720,540 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_FLOAT_ON_PARENT|wxMAXIMIZE_BOX|wxRESIZE_BORDER|wxSTAY_ON_TOP|wxSYSTEM_MENU|wxTAB_TRAVERSAL );

		~wx_VentProveedores();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_AuxCompra
///////////////////////////////////////////////////////////////////////////////
class wx_AuxCompra : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText43;
		wxStaticText* m_NuevoPVenta;
		wxTextCtrl* m_NPrecioVenta;
		wxButton* m_button37;

		// Virtual event handlers, overide them in your derived class
		virtual void EnterPrecio( wxCommandEvent& event ) { event.Skip(); }
		virtual void AceptarPrecio( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_AuxCompra( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Nuevo Precio de Venta"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 348,175 ), long style = wxCAPTION );
		~wx_AuxCompra();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VRegistro
///////////////////////////////////////////////////////////////////////////////
class wx_VRegistro : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText44;
		wxGrid* m_grillaventa;
		wxStaticText* m_staticText45;
		wxTextCtrl* m_GananciaTotal;

		// Virtual event handlers, overide them in your derived class
		virtual void CambiaRelacion( wxSizeEvent& event ) { event.Skip(); }


	public:

		wx_VRegistro( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 720,540 ), long style = wxCAPTION|wxCLOSE_BOX|wxMAXIMIZE_BOX|wxSTAY_ON_TOP|wxTAB_TRAVERSAL );

		~wx_VRegistro();

};

///////////////////////////////////////////////////////////////////////////////
/// Class wx_VFechas
///////////////////////////////////////////////////////////////////////////////
class wx_VFechas : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText46;
		wxStaticText* m_staticText47;
		wxStaticText* m_staticText48;
		wxTextCtrl* m_DiaInicio;
		wxStaticText* m_staticText49;
		wxTextCtrl* m_MesInicio;
		wxStaticText* m_staticText50;
		wxTextCtrl* m_AnioInicio;
		wxStaticText* m_staticText51;
		wxStaticText* m_staticText52;
		wxTextCtrl* m_DiaFin;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_MesFin;
		wxStaticText* m_staticText54;
		wxTextCtrl* m_AnioFin;
		wxButton* m_button39;
		wxButton* m_button40;

		// Virtual event handlers, overide them in your derived class
		virtual void ClickCancelarFecha( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAceptarFecha( wxCommandEvent& event ) { event.Skip(); }


	public:

		wx_VFechas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 465,214 ), long style = wxDEFAULT_DIALOG_STYLE );
		~wx_VFechas();

};

