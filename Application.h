#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "Stock.h"
#include "ListadoProveedores.h"

class Application : public wxApp {
public:
	virtual bool OnInit();
	Application();
private:
	Stock p_stock; 
	
};

	
#endif
