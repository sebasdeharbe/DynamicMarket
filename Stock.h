#ifndef STOCK_H
#define STOCK_H
#include "Articulo.h"
#include <vector>
#include "Stock.h"
using namespace std;

enum OrdenarPorComp {ord_nombre, ord_categoria, ord_codigo, ord_pcompra, ord_pventa, ord_ganancia, ord_cantidad};

class Stock {
private:
	string Archivo_articulos="bin/DatosStock.dym"; 
	vector <Articulo> vec_stock;
public:
	//El constructor de la clase Stock carga los datos desde el archivo binario que guarda los datos de los artículos
	Stock(string arch_articulos);
	
	bool GuardarDatos();
	
	//Cantidad de articulos registrados
	int CantidadProductos();
	
	//Acceder a un Articulo desde una posicion
	Articulo &operator[] (int i);
	Articulo &VerArticulo (int i); 
	
	//Agregar un Articulo al vector
	void AgregarArticulo (Articulo &art);
	
	//Eliminar un Articulo del vector
	void EliminarArticulo (int i); 
	
	//Verificar que un codigo de articulo no este repetido
	bool ComprobarCodigo(long codigo_art); 
	
	//Registrar la venta de stock de un Articulo
	bool RegistrarVenta(Articulo &art, int cant);
	
	bool RegistrarCompra(Articulo &art, int cant);
	
	//Búsquedas de articulos
	vector <int> BuscarPorNombre (string nombre_art);
	vector <int> BuscarPorCategoria (string categoria_art);
	vector <int> BuscarPorCodigo (long codigo_art); 
	
	//Ordenar listados
	void OrdenarCreciente(OrdenarPorComp crit_comparacion); 
	void OrdenarDecreciente(OrdenarPorComp crit_comparacion); 
	
};

#endif

