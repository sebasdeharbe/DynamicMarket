///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

wx_VPrincipal::wx_VPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menubar1 = new wxMenuBar( 0 );
	m_MenuOpciones = new wxMenu();
	wxMenuItem* m_ItemAyuda;
	m_ItemAyuda = new wxMenuItem( m_MenuOpciones, wxID_ANY, wxString( wxT("Ayuda...") ) , wxEmptyString, wxITEM_NORMAL );
	m_MenuOpciones->Append( m_ItemAyuda );

	wxMenuItem* m_MenuAcerca;
	m_MenuAcerca = new wxMenuItem( m_MenuOpciones, wxID_ANY, wxString( wxT("Sobre DynamicMarket...") ) , wxEmptyString, wxITEM_NORMAL );
	m_MenuOpciones->Append( m_MenuAcerca );

	m_menubar1->Append( m_MenuOpciones, wxT("Opciones...") );

	this->SetMenuBar( m_menubar1 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	bSizer65->Add( m_staticText41, 0, wxALIGN_CENTER_VERTICAL|wxLEFT, 5 );

	m_BuscaNombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer65->Add( m_BuscaNombre, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer62->Add( bSizer65, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer66;
	bSizer66 = new wxBoxSizer( wxVERTICAL );

	m_button29 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer66->Add( m_button29, 0, wxALL|wxEXPAND, 5 );


	bSizer62->Add( bSizer66, 1, wxEXPAND, 5 );


	bSizer61->Add( bSizer62, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer67;
	bSizer67 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("Código"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	bSizer67->Add( m_staticText42, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_BuscaCodigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer67->Add( m_BuscaCodigo, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer63->Add( bSizer67, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxVERTICAL );

	m_button30 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( m_button30, 0, wxALL|wxEXPAND, 5 );


	bSizer63->Add( bSizer68, 1, wxEXPAND, 5 );


	bSizer61->Add( bSizer63, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer69;
	bSizer69 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("Categoría"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	bSizer69->Add( m_staticText43, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_BuscaCategoria = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer69->Add( m_BuscaCategoria, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer64->Add( bSizer69, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	m_button31 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer70->Add( m_button31, 0, wxALL|wxEXPAND, 5 );


	bSizer64->Add( bSizer70, 1, wxEXPAND, 5 );


	bSizer61->Add( bSizer64, 1, wxEXPAND, 5 );


	bSizer3->Add( bSizer61, 1, wxEXPAND, 5 );


	bSizer2->Add( bSizer3, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("PLANILLA DE STOCK DE ARTÍCULOS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer7->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer2->Add( bSizer7, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grilla->CreateGrid( 0, 7 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );

	// Columns
	grilla->SetColSize( 0, 100 );
	grilla->SetColSize( 1, 150 );
	grilla->SetColSize( 2, 130 );
	grilla->SetColSize( 3, 90 );
	grilla->SetColSize( 4, 90 );
	grilla->SetColSize( 5, 90 );
	grilla->SetColSize( 6, 45 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Código") );
	grilla->SetColLabelValue( 1, wxT("Nombre") );
	grilla->SetColLabelValue( 2, wxT("Categoría") );
	grilla->SetColLabelValue( 3, wxT("Precio Compra") );
	grilla->SetColLabelValue( 4, wxT("Precio Venta") );
	grilla->SetColLabelValue( 5, wxT("Ganancia") );
	grilla->SetColLabelValue( 6, wxT("Stock") );
	grilla->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 1 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer8->Add( grilla, 1, wxALL|wxEXPAND, 5 );


	bSizer2->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_button2 = new wxButton( this, wxID_ANY, wxT("Nuevo Artículo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button2, 0, wxALL, 5 );

	m_button19 = new wxButton( this, wxID_ANY, wxT("Realizar Compra"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button19, 1, wxALL, 5 );

	m_button3 = new wxButton( this, wxID_ANY, wxT("Realizar Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button3, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button4 = new wxButton( this, wxID_ANY, wxT("Modificar Artículo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button4, 1, wxALL, 5 );

	m_button23 = new wxButton( this, wxID_ANY, wxT("Eliminar Artículo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button23, 0, wxALL, 5 );


	bSizer2->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_button5 = new wxButton( this, wxID_ANY, wxT("PLANILLA PROVEEDORES"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button5, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button6 = new wxButton( this, wxID_ANY, wxT("PLANILLA CLIENTES"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button6, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button39 = new wxButton( this, wxID_ANY, wxT("REGISTRO VENTAS"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button39, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( bSizer10, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( wx_VPrincipal::CambiaRelacion ) );
	m_MenuOpciones->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wx_VPrincipal::ClickAyuda ), this, m_ItemAyuda->GetId());
	m_MenuOpciones->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( wx_VPrincipal::ClickAcercaDe ), this, m_MenuAcerca->GetId());
	m_BuscaNombre->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VPrincipal::EnterNombre ), NULL, this );
	m_button29->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickBuscaNombre ), NULL, this );
	m_BuscaCodigo->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VPrincipal::EnterCodigo ), NULL, this );
	m_button30->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickBuscarCodigo ), NULL, this );
	m_BuscaCategoria->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VPrincipal::EnterCategoria ), NULL, this );
	m_button31->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickBuscarCategoria ), NULL, this );
	grilla->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( wx_VPrincipal::DobleClickGrilla ), NULL, this );
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( wx_VPrincipal::ClickGrillaCreciente ), NULL, this );
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( wx_VPrincipal::ClickGrillaDecreciente ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::NuevoArticulo ), NULL, this );
	m_button19->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickRealizarCompra ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::RealizarVenta ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ModificarArticulo ), NULL, this );
	m_button23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickEliminarArticulo ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::OnClickProveedores ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::OnClickClientes ), NULL, this );
	m_button39->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::OnClickRegistro ), NULL, this );
}

wx_VPrincipal::~wx_VPrincipal()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( wx_VPrincipal::CambiaRelacion ) );
	m_BuscaNombre->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VPrincipal::EnterNombre ), NULL, this );
	m_button29->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickBuscaNombre ), NULL, this );
	m_BuscaCodigo->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VPrincipal::EnterCodigo ), NULL, this );
	m_button30->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickBuscarCodigo ), NULL, this );
	m_BuscaCategoria->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VPrincipal::EnterCategoria ), NULL, this );
	m_button31->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickBuscarCategoria ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( wx_VPrincipal::DobleClickGrilla ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( wx_VPrincipal::ClickGrillaCreciente ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( wx_VPrincipal::ClickGrillaDecreciente ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::NuevoArticulo ), NULL, this );
	m_button19->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickRealizarCompra ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::RealizarVenta ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ModificarArticulo ), NULL, this );
	m_button23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::ClickEliminarArticulo ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::OnClickProveedores ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::OnClickClientes ), NULL, this );
	m_button39->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VPrincipal::OnClickRegistro ), NULL, this );

}

wx_VArticulo::wx_VArticulo( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer17->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Nom_Art = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_Nom_Art, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer11->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Código"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	bSizer20->Add( m_staticText19, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Codigo_Art = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_Codigo_Art, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button7 = new wxButton( this, wxID_ANY, wxT("Verificar Código"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_button7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer11->Add( bSizer20, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Categoría"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	bSizer21->Add( m_staticText20, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Categoria_Art = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_Categoria_Art, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer11->Add( bSizer21, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Precio Compra"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer22->Add( m_staticText21, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_PCompra_Art = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_PCompra_Art, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("Precio Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer22->Add( m_staticText22, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_PVenta_Art = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_PVenta_Art, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer11->Add( bSizer22, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Cantidad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer23->Add( m_staticText23, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Cantidad_Art = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_Cantidad_Art, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("Cantidad Crítica"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	bSizer23->Add( m_staticText43, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CantidadCritica = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_CantidadCritica, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer11->Add( bSizer23, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( m_button9, 1, wxALL|wxEXPAND, 5 );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer24->Add( m_button10, 1, wxALL|wxEXPAND, 5 );


	bSizer11->Add( bSizer24, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer11 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VArticulo::ClickVerificarCodigo ), NULL, this );
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VArticulo::ClickAceptarNuevoArt ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VArticulo::ClickCancelarNuevoArt ), NULL, this );
}

wx_VArticulo::~wx_VArticulo()
{
	// Disconnect Events
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VArticulo::ClickVerificarCodigo ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VArticulo::ClickAceptarNuevoArt ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VArticulo::ClickCancelarNuevoArt ), NULL, this );

}

wx_VVenta::wx_VVenta( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer26->Add( m_staticText24, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_NombreArtVenta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_NombreArtVenta->Enable( false );

	bSizer26->Add( m_NombreArtVenta, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("Categoría"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer26->Add( m_staticText26, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CategoriaArtVenta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_CategoriaArtVenta->Enable( false );

	bSizer26->Add( m_CategoriaArtVenta, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer25->Add( bSizer26, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Código"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer31->Add( m_staticText28, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CodigoVenta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer31->Add( m_CodigoVenta, 1, wxALL, 5 );


	bSizer29->Add( bSizer31, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	m_CargarCodigo = new wxButton( this, wxID_ANY, wxT("Cargar Código"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_CargarCodigo, 0, wxALL|wxEXPAND, 5 );


	bSizer29->Add( bSizer32, 0, wxEXPAND, 5 );


	bSizer28->Add( bSizer29, 1, 0, 5 );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Precio Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer33->Add( m_staticText29, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_PVentaVenta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_PVentaVenta->Enable( false );

	bSizer33->Add( m_PVentaVenta, 1, wxALL, 5 );


	bSizer30->Add( bSizer33, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("Cantidad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	bSizer34->Add( m_staticText30, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CantidadVenta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_CantidadVenta, 1, wxALL, 5 );


	bSizer30->Add( bSizer34, 1, wxEXPAND, 5 );


	bSizer28->Add( bSizer30, 1, wxEXPAND, 5 );


	bSizer25->Add( bSizer28, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );

	m_CargarCantidad = new wxButton( this, wxID_ANY, wxT("Calcular Total Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_CargarCantidad, 0, wxALL, 5 );

	m_staticText32 = new wxStaticText( this, wxID_ANY, wxT("Total $"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	bSizer35->Add( m_staticText32, 0, wxALL, 5 );

	m_TotalVenta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_TotalVenta->Enable( false );

	bSizer35->Add( m_TotalVenta, 0, wxALL, 5 );


	bSizer25->Add( bSizer35, 1, wxALIGN_RIGHT, 5 );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );

	m_CancelarVenta = new wxButton( this, wxID_ANY, wxT("Cancelar Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_CancelarVenta, 1, wxALL|wxEXPAND, 5 );

	m_ConfirmarVenta = new wxButton( this, wxID_ANY, wxT("Confirmar Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_ConfirmarVenta, 1, wxALL|wxEXPAND, 5 );


	bSizer25->Add( bSizer36, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer25 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_CodigoVenta->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VVenta::EnterCodigo ), NULL, this );
	m_CargarCodigo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VVenta::CargarCodigo ), NULL, this );
	m_CargarCantidad->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VVenta::CalcularVenta ), NULL, this );
	m_CancelarVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VVenta::CancelarVenta ), NULL, this );
	m_ConfirmarVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VVenta::ConfirmarVenta ), NULL, this );
}

wx_VVenta::~wx_VVenta()
{
	// Disconnect Events
	m_CodigoVenta->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VVenta::EnterCodigo ), NULL, this );
	m_CargarCodigo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VVenta::CargarCodigo ), NULL, this );
	m_CargarCantidad->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VVenta::CalcularVenta ), NULL, this );
	m_CancelarVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VVenta::CancelarVenta ), NULL, this );
	m_ConfirmarVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VVenta::ConfirmarVenta ), NULL, this );

}

wx_VDatosProveedor::wx_VDatosProveedor( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText38 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer44->Add( m_staticText38, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_NombreProv = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer44->Add( m_NombreProv, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer43->Add( bSizer44, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText39 = new wxStaticText( this, wxID_ANY, wxT("Empresa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	bSizer45->Add( m_staticText39, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EmpresaProv = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_EmpresaProv, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer43->Add( bSizer45, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText40 = new wxStaticText( this, wxID_ANY, wxT("Categoría/Rubro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	bSizer46->Add( m_staticText40, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CategoriaProv = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer46->Add( m_CategoriaProv, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer43->Add( bSizer46, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Teléfono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	bSizer47->Add( m_staticText41, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_TelefonoProv = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer47->Add( m_TelefonoProv, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer43->Add( bSizer47, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("Dirección"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	bSizer48->Add( m_staticText42, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_DireccionProv = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_DireccionProv, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer43->Add( bSizer48, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("E-Mail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	bSizer49->Add( m_staticText43, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_EmailProv = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer49->Add( m_EmailProv, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer43->Add( bSizer49, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxHORIZONTAL );

	m_button21 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer50->Add( m_button21, 1, wxALL|wxEXPAND, 5 );

	m_button22 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer50->Add( m_button22, 1, wxALL|wxEXPAND, 5 );


	bSizer43->Add( bSizer50, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer43 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button21->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VDatosProveedor::ClickCancelarProv ), NULL, this );
	m_button22->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VDatosProveedor::ClickAceptarProv ), NULL, this );
}

wx_VDatosProveedor::~wx_VDatosProveedor()
{
	// Disconnect Events
	m_button21->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VDatosProveedor::ClickCancelarProv ), NULL, this );
	m_button22->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VDatosProveedor::ClickAceptarProv ), NULL, this );

}

wx_VCompra::wx_VCompra( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer39->Add( m_staticText27, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_NombreCompra = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_NombreCompra->Enable( false );

	bSizer39->Add( m_NombreCompra, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Categoría"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer39->Add( m_staticText28, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CategoriaCompra = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_CategoriaCompra->Enable( false );

	bSizer39->Add( m_CategoriaCompra, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer38->Add( bSizer39, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Código"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer43->Add( m_staticText29, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CodigoCompra = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer43->Add( m_CodigoCompra, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer41->Add( bSizer43, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxVERTICAL );

	m_button21 = new wxButton( this, wxID_ANY, wxT("Cargar Código"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer44->Add( m_button21, 0, wxALL|wxEXPAND, 5 );


	bSizer41->Add( bSizer44, 1, wxEXPAND, 5 );


	bSizer40->Add( bSizer41, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("Precio Compra"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	bSizer45->Add( m_staticText30, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_PCompraCompra = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_PCompraCompra, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer42->Add( bSizer45, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Cantidad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer46->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CantidadCompra = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer46->Add( m_CantidadCompra, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer42->Add( bSizer46, 1, wxEXPAND, 5 );


	bSizer40->Add( bSizer42, 1, wxEXPAND, 5 );


	bSizer38->Add( bSizer40, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );

	m_button22 = new wxButton( this, wxID_ANY, wxT("Calcular Total"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer91->Add( m_button22, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("Total    $"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	bSizer91->Add( m_staticText34, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_TotalCompra = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_TotalCompra->Enable( false );

	bSizer91->Add( m_TotalCompra, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer47->Add( bSizer91, 0, wxALIGN_RIGHT, 5 );


	bSizer38->Add( bSizer47, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );

	m_button23 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_button23, 1, wxALL|wxEXPAND, 5 );

	m_button24 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_button24, 1, wxALL|wxEXPAND, 5 );


	bSizer38->Add( bSizer48, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer38 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_CodigoCompra->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VCompra::EnterCodigo ), NULL, this );
	m_button21->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VCompra::ClickCodigoCompra ), NULL, this );
	m_button22->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VCompra::ClickTotalCompra ), NULL, this );
	m_button23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VCompra::ClickCancelarCompra ), NULL, this );
	m_button24->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VCompra::ClickAceptarCompra ), NULL, this );
}

wx_VCompra::~wx_VCompra()
{
	// Disconnect Events
	m_CodigoCompra->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VCompra::EnterCodigo ), NULL, this );
	m_button21->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VCompra::ClickCodigoCompra ), NULL, this );
	m_button22->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VCompra::ClickTotalCompra ), NULL, this );
	m_button23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VCompra::ClickCancelarCompra ), NULL, this );
	m_button24->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VCompra::ClickAceptarCompra ), NULL, this );

}

wx_VDatosCliente::wx_VDatosCliente( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText38 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer55->Add( m_staticText38, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_NombreCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( m_NombreCliente, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText39 = new wxStaticText( this, wxID_ANY, wxT("Número de Registro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	bSizer56->Add( m_staticText39, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_RegistroCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer56->Add( m_RegistroCliente, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer54->Add( bSizer56, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText40 = new wxStaticText( this, wxID_ANY, wxT("Dirección"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	bSizer57->Add( m_staticText40, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_DireccionCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer57->Add( m_DireccionCliente, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer54->Add( bSizer57, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Teléfono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	bSizer58->Add( m_staticText41, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_TelefonoCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer58->Add( m_TelefonoCliente, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer54->Add( bSizer58, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("E-Mail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	bSizer59->Add( m_staticText42, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EmailCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( m_EmailCliente, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer54->Add( bSizer59, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );

	m_button28 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer60->Add( m_button28, 1, wxALL|wxEXPAND, 5 );

	m_button29 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer60->Add( m_button29, 1, wxALL|wxEXPAND, 5 );


	bSizer54->Add( bSizer60, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer54 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button28->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VDatosCliente::ClickCancelarCliente ), NULL, this );
	m_button29->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VDatosCliente::ClickAceptarCliente ), NULL, this );
}

wx_VDatosCliente::~wx_VDatosCliente()
{
	// Disconnect Events
	m_button28->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VDatosCliente::ClickCancelarCliente ), NULL, this );
	m_button29->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VDatosCliente::ClickAceptarCliente ), NULL, this );

}

wx_VentClientes::wx_VentClientes( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* bSizer86;
	bSizer86 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer87;
	bSizer87 = new wxBoxSizer( wxVERTICAL );

	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("LISTADO DE CLIENTES"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	m_staticText41->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer87->Add( m_staticText41, 0, wxALL, 5 );


	bSizer86->Add( bSizer87, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer88;
	bSizer88 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer89;
	bSizer89 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	bSizer91->Add( m_staticText42, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_BuscaNombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer91->Add( m_BuscaNombre, 1, wxALL, 5 );


	bSizer89->Add( bSizer91, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxVERTICAL );

	m_button37 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer92->Add( m_button37, 0, wxALL|wxEXPAND, 5 );


	bSizer89->Add( bSizer92, 0, wxEXPAND, 5 );


	bSizer88->Add( bSizer89, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer90;
	bSizer90 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText44 = new wxStaticText( this, wxID_ANY, wxT("Registro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	bSizer93->Add( m_staticText44, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_BuscaRegistro = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer93->Add( m_BuscaRegistro, 1, wxALL, 5 );


	bSizer90->Add( bSizer93, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxVERTICAL );

	m_button38 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer94->Add( m_button38, 0, wxALL|wxEXPAND, 5 );


	bSizer90->Add( bSizer94, 1, wxEXPAND, 5 );


	bSizer88->Add( bSizer90, 1, wxEXPAND, 5 );


	bSizer86->Add( bSizer88, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxVERTICAL );

	grillaclient = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grillaclient->CreateGrid( 0, 4 );
	grillaclient->EnableEditing( false );
	grillaclient->EnableGridLines( true );
	grillaclient->EnableDragGridSize( false );
	grillaclient->SetMargins( 0, 0 );

	// Columns
	grillaclient->SetColSize( 0, 110 );
	grillaclient->SetColSize( 1, 180 );
	grillaclient->SetColSize( 2, 180 );
	grillaclient->SetColSize( 3, 150 );
	grillaclient->EnableDragColMove( false );
	grillaclient->EnableDragColSize( true );
	grillaclient->SetColLabelSize( 30 );
	grillaclient->SetColLabelValue( 0, wxT("Registro") );
	grillaclient->SetColLabelValue( 1, wxT("Nombre") );
	grillaclient->SetColLabelValue( 2, wxT("Dirección") );
	grillaclient->SetColLabelValue( 3, wxT("Teléfono") );
	grillaclient->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grillaclient->EnableDragRowSize( true );
	grillaclient->SetRowLabelSize( 0 );
	grillaclient->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	grillaclient->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer95->Add( grillaclient, 1, wxALL|wxEXPAND, 5 );


	bSizer86->Add( bSizer95, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxHORIZONTAL );

	m_button39 = new wxButton( this, wxID_ANY, wxT("Modificar Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer96->Add( m_button39, 1, wxALL, 5 );

	m_button40 = new wxButton( this, wxID_ANY, wxT("Nuevo Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer96->Add( m_button40, 1, wxALL, 5 );

	m_button41 = new wxButton( this, wxID_ANY, wxT("Eliminar Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer96->Add( m_button41, 1, wxALL, 5 );


	bSizer86->Add( bSizer96, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer86 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( wx_VentClientes::CambiaRelacion ) );
	m_BuscaNombre->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentClientes::EnterNombre ), NULL, this );
	m_button37->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::BuscarNombre ), NULL, this );
	m_BuscaRegistro->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentClientes::EnterRegistro ), NULL, this );
	m_button38->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::BuscarRegistro ), NULL, this );
	grillaclient->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( wx_VentClientes::ClickGrilla ), NULL, this );
	grillaclient->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( wx_VentClientes::GrillaOrdenaCreciente ), NULL, this );
	grillaclient->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( wx_VentClientes::GrillaOrdenaDecreciente ), NULL, this );
	m_button39->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::ModificarCliente ), NULL, this );
	m_button40->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::NuevoCliente ), NULL, this );
	m_button41->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::EliminarCliente ), NULL, this );
}

wx_VentClientes::~wx_VentClientes()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( wx_VentClientes::CambiaRelacion ) );
	m_BuscaNombre->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentClientes::EnterNombre ), NULL, this );
	m_button37->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::BuscarNombre ), NULL, this );
	m_BuscaRegistro->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentClientes::EnterRegistro ), NULL, this );
	m_button38->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::BuscarRegistro ), NULL, this );
	grillaclient->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( wx_VentClientes::ClickGrilla ), NULL, this );
	grillaclient->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( wx_VentClientes::GrillaOrdenaCreciente ), NULL, this );
	grillaclient->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( wx_VentClientes::GrillaOrdenaDecreciente ), NULL, this );
	m_button39->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::ModificarCliente ), NULL, this );
	m_button40->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::NuevoCliente ), NULL, this );
	m_button41->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentClientes::EliminarCliente ), NULL, this );

}

wx_VentProveedores::wx_VentProveedores( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* bSizer97;
	bSizer97 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer98;
	bSizer98 = new wxBoxSizer( wxVERTICAL );

	m_staticText44 = new wxStaticText( this, wxID_ANY, wxT("LISTADO DE PROVEEDORES"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	m_staticText44->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer98->Add( m_staticText44, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer97->Add( bSizer98, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer99;
	bSizer99 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer100;
	bSizer100 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	bSizer102->Add( m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_BuscaNombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer102->Add( m_BuscaNombre, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer100->Add( bSizer102, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer( wxVERTICAL );

	m_button42 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer103->Add( m_button42, 1, wxALL|wxEXPAND, 5 );


	bSizer100->Add( bSizer103, 1, wxEXPAND, 5 );


	bSizer99->Add( bSizer100, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer105;
	bSizer105 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText46 = new wxStaticText( this, wxID_ANY, wxT("Empresa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	bSizer105->Add( m_staticText46, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_BuscaEmpresa = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer105->Add( m_BuscaEmpresa, 1, wxALL, 5 );


	bSizer101->Add( bSizer105, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer106;
	bSizer106 = new wxBoxSizer( wxVERTICAL );

	m_button43 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer106->Add( m_button43, 0, wxALL|wxEXPAND, 5 );


	bSizer101->Add( bSizer106, 1, wxEXPAND, 5 );


	bSizer99->Add( bSizer101, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer104;
	bSizer104 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer107;
	bSizer107 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("Rubro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	bSizer107->Add( m_staticText47, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_BuscaRubro = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer107->Add( m_BuscaRubro, 1, wxALL, 5 );


	bSizer104->Add( bSizer107, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer108;
	bSizer108 = new wxBoxSizer( wxVERTICAL );

	m_button44 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer108->Add( m_button44, 0, wxALL|wxEXPAND, 5 );


	bSizer104->Add( bSizer108, 1, wxEXPAND, 5 );


	bSizer99->Add( bSizer104, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer97->Add( bSizer99, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer109;
	bSizer109 = new wxBoxSizer( wxVERTICAL );

	grillaprov = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grillaprov->CreateGrid( 0, 4 );
	grillaprov->EnableEditing( false );
	grillaprov->EnableGridLines( true );
	grillaprov->EnableDragGridSize( false );
	grillaprov->SetMargins( 0, 0 );

	// Columns
	grillaprov->SetColSize( 0, 170 );
	grillaprov->SetColSize( 1, 170 );
	grillaprov->SetColSize( 2, 140 );
	grillaprov->SetColSize( 3, 140 );
	grillaprov->EnableDragColMove( false );
	grillaprov->EnableDragColSize( true );
	grillaprov->SetColLabelSize( 30 );
	grillaprov->SetColLabelValue( 0, wxT("Nombre") );
	grillaprov->SetColLabelValue( 1, wxT("Empresa") );
	grillaprov->SetColLabelValue( 2, wxT("Rubro") );
	grillaprov->SetColLabelValue( 3, wxT("Teléfono") );
	grillaprov->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grillaprov->EnableDragRowSize( true );
	grillaprov->SetRowLabelSize( 0 );
	grillaprov->SetRowLabelValue( 0, wxT("Nombre") );
	grillaprov->SetRowLabelValue( 1, wxT("Empr") );
	grillaprov->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	grillaprov->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer109->Add( grillaprov, 1, wxALL|wxEXPAND, 5 );


	bSizer97->Add( bSizer109, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer110;
	bSizer110 = new wxBoxSizer( wxHORIZONTAL );

	m_button45 = new wxButton( this, wxID_ANY, wxT("Modificar Proveedor"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer110->Add( m_button45, 1, wxALL, 5 );

	m_button46 = new wxButton( this, wxID_ANY, wxT("Nuevo Proveedor"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer110->Add( m_button46, 1, wxALL, 5 );

	m_button47 = new wxButton( this, wxID_ANY, wxT("Eliminar Proveedor"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer110->Add( m_button47, 1, wxALL, 5 );


	bSizer97->Add( bSizer110, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer97 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( wx_VentProveedores::CambiaRelacion ) );
	m_BuscaNombre->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentProveedores::EnterNombre ), NULL, this );
	m_button42->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::BuscarNombre ), NULL, this );
	m_BuscaEmpresa->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentProveedores::EnterEmpresa ), NULL, this );
	m_button43->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::BuscarEmpresa ), NULL, this );
	m_BuscaRubro->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentProveedores::EnterCategoria ), NULL, this );
	m_button44->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::BuscarCategoria ), NULL, this );
	grillaprov->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( wx_VentProveedores::ClickGrilla ), NULL, this );
	grillaprov->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( wx_VentProveedores::GrillaOrdenaCreciente ), NULL, this );
	grillaprov->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( wx_VentProveedores::GrillaOrdenaDecreciente ), NULL, this );
	m_button45->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::ModificarProveedor ), NULL, this );
	m_button46->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::NuevoProveedor ), NULL, this );
	m_button47->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::EliminarProveedor ), NULL, this );
}

wx_VentProveedores::~wx_VentProveedores()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( wx_VentProveedores::CambiaRelacion ) );
	m_BuscaNombre->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentProveedores::EnterNombre ), NULL, this );
	m_button42->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::BuscarNombre ), NULL, this );
	m_BuscaEmpresa->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentProveedores::EnterEmpresa ), NULL, this );
	m_button43->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::BuscarEmpresa ), NULL, this );
	m_BuscaRubro->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_VentProveedores::EnterCategoria ), NULL, this );
	m_button44->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::BuscarCategoria ), NULL, this );
	grillaprov->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( wx_VentProveedores::ClickGrilla ), NULL, this );
	grillaprov->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( wx_VentProveedores::GrillaOrdenaCreciente ), NULL, this );
	grillaprov->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( wx_VentProveedores::GrillaOrdenaDecreciente ), NULL, this );
	m_button45->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::ModificarProveedor ), NULL, this );
	m_button46->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::NuevoProveedor ), NULL, this );
	m_button47->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VentProveedores::EliminarProveedor ), NULL, this );

}

wx_AuxCompra::wx_AuxCompra( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer86;
	bSizer86 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer87;
	bSizer87 = new wxBoxSizer( wxVERTICAL );

	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("INGRESE UN NUEVO PRECIO DE VENTA "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	m_staticText43->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer87->Add( m_staticText43, 0, wxALL, 5 );


	bSizer86->Add( bSizer87, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer88;
	bSizer88 = new wxBoxSizer( wxHORIZONTAL );

	m_NuevoPVenta = new wxStaticText( this, wxID_ANY, wxT("Precio Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	m_NuevoPVenta->Wrap( -1 );
	bSizer88->Add( m_NuevoPVenta, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_NPrecioVenta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer88->Add( m_NPrecioVenta, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer86->Add( bSizer88, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer89;
	bSizer89 = new wxBoxSizer( wxVERTICAL );

	m_button37 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer89->Add( m_button37, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer86->Add( bSizer89, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer86 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_NPrecioVenta->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_AuxCompra::EnterPrecio ), NULL, this );
	m_button37->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_AuxCompra::AceptarPrecio ), NULL, this );
}

wx_AuxCompra::~wx_AuxCompra()
{
	// Disconnect Events
	m_NPrecioVenta->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( wx_AuxCompra::EnterPrecio ), NULL, this );
	m_button37->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_AuxCompra::AceptarPrecio ), NULL, this );

}

wx_VRegistro::wx_VRegistro( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxVERTICAL );

	m_staticText44 = new wxStaticText( this, wxID_ANY, wxT("REGISTRO DE VENTA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	m_staticText44->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer92->Add( m_staticText44, 0, wxALL, 5 );


	bSizer95->Add( bSizer92, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxVERTICAL );

	m_grillaventa = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grillaventa->CreateGrid( 0, 5 );
	m_grillaventa->EnableEditing( false );
	m_grillaventa->EnableGridLines( true );
	m_grillaventa->EnableDragGridSize( false );
	m_grillaventa->SetMargins( 0, 0 );

	// Columns
	m_grillaventa->SetColSize( 0, 120 );
	m_grillaventa->SetColSize( 1, 105 );
	m_grillaventa->SetColSize( 2, 245 );
	m_grillaventa->SetColSize( 3, 115 );
	m_grillaventa->SetColSize( 4, 115 );
	m_grillaventa->EnableDragColMove( false );
	m_grillaventa->EnableDragColSize( true );
	m_grillaventa->SetColLabelSize( 30 );
	m_grillaventa->SetColLabelValue( 0, wxT("Fecha") );
	m_grillaventa->SetColLabelValue( 1, wxT("Código") );
	m_grillaventa->SetColLabelValue( 2, wxT("Nombre") );
	m_grillaventa->SetColLabelValue( 3, wxT("Cantidad Vendida") );
	m_grillaventa->SetColLabelValue( 4, wxT("Ganancia") );
	m_grillaventa->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grillaventa->EnableDragRowSize( true );
	m_grillaventa->SetRowLabelSize( 1 );
	m_grillaventa->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grillaventa->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer93->Add( m_grillaventa, 1, wxALL|wxEXPAND, 5 );


	bSizer95->Add( bSizer93, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Ganancia Total"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	bSizer94->Add( m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_GananciaTotal = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_GananciaTotal->Enable( false );

	bSizer94->Add( m_GananciaTotal, 0, wxALL, 5 );


	bSizer95->Add( bSizer94, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer95 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( wx_VRegistro::CambiaRelacion ) );
}

wx_VRegistro::~wx_VRegistro()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( wx_VRegistro::CambiaRelacion ) );

}

wx_VFechas::wx_VFechas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxVERTICAL );

	m_staticText46 = new wxStaticText( this, wxID_ANY, wxT("INGRESE DOS FECHAS PARA VER EL REGISTRO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	m_staticText46->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer96->Add( m_staticText46, 0, wxALL, 5 );


	bSizer95->Add( bSizer96, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );

	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("FECHA INICIO"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	bSizer101->Add( m_staticText47, 0, wxALL, 5 );


	bSizer95->Add( bSizer101, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText48 = new wxStaticText( this, wxID_ANY, wxT("Día"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	bSizer102->Add( m_staticText48, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_DiaInicio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( m_DiaInicio, 1, wxALL, 5 );

	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer102->Add( m_staticText49, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_MesInicio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( m_MesInicio, 1, wxALL, 5 );

	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	bSizer102->Add( m_staticText50, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_AnioInicio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( m_AnioInicio, 1, wxALL, 5 );


	bSizer95->Add( bSizer102, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer( wxVERTICAL );

	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("FECHA FIN"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer103->Add( m_staticText51, 0, wxALL, 5 );


	bSizer95->Add( bSizer103, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer104;
	bSizer104 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("Día"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	bSizer104->Add( m_staticText52, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_DiaFin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer104->Add( m_DiaFin, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer104->Add( m_staticText53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_MesFin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer104->Add( m_MesFin, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer104->Add( m_staticText54, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_AnioFin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer104->Add( m_AnioFin, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer95->Add( bSizer104, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer105;
	bSizer105 = new wxBoxSizer( wxHORIZONTAL );

	m_button39 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer105->Add( m_button39, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button40 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer105->Add( m_button40, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer95->Add( bSizer105, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer95 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button39->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VFechas::ClickCancelarFecha ), NULL, this );
	m_button40->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VFechas::ClickAceptarFecha ), NULL, this );
}

wx_VFechas::~wx_VFechas()
{
	// Disconnect Events
	m_button39->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VFechas::ClickCancelarFecha ), NULL, this );
	m_button40->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( wx_VFechas::ClickAceptarFecha ), NULL, this );

}
