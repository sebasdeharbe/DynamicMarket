#ifndef REGISTRO_H
#define REGISTRO_H
#include <string>
#include "Articulo.h"
#include <vector>
using namespace std;

struct ProductoVenta{
	long codigoart;
	int cantidad;
	double ganancia;
	char fecha[25];
	
};

class Registro {
private:
	string Archivo_Venta;
	vector <ProductoVenta> vec_Venta;
	string p_fecha_inicial="0";
	string p_fecha_final="0";
	int cantidadprod;

public:
	Registro(string arch_venta);
		
	bool CargarFechas(string fecha_inicial, string fecha_final); 
	
	bool GuardarVenta(ProductoVenta aux);
	
	int CantidadProductos();
	
	ProductoVenta &operator[] (int i);
	
	ProductoVenta &VerVendido(int i);
	

	
	double VerGananciaTotal(); 
	

};

//FUNCIONES
bool OrdenarxFecha (ProductoVenta a, ProductoVenta b);

#endif

