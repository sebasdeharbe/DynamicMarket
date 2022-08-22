#include <wx/image.h>
#include "Application.h"
#include "VentanaPrincipal.h"
#include "Stock.h"


Application::Application() : p_stock("bin/ArchStock.dym") {

}

bool Application::OnInit() {
	wxInitAllImageHandlers();
	VentanaPrincipal *ventana = new VentanaPrincipal(&p_stock);
	ventana->Show();
	return true;
}

IMPLEMENT_APP(Application)
