#ifndef ARTICULO_H
#define ARTICULO_H
#include <string>
#include <fstream>
using namespace std;


//struct auxiliar 
struct Producto {
	long codigo;
	char nombre[256];
	char categoria[256];
	double precio_compra;
	double precio_venta;
	double ganancia;
	int cantidad;
	int cant_critica;
};



class Articulo {
private: 
	//Cada articulo se puede identificar mediante su código que es unico o su nombre
	long p_codigo;
	string p_nombre; 
	//Los articulos pertenecen a una categoria que los clasifica ante los distintos proveedores
	string p_categoria;
	//Precio de compra es el precio al cual se compra el producto a los proveedores
	double p_precio_compra;
	//Precio de venta es el precio al cual se vende el producto a los clientes
	double p_precio_venta;
	//La ganancia se obtiene restando el precio de compra al precio de venta
	double p_ganancia;
	//La cantidad representa la cantidad del articulo disponible para la venta
	int p_cantidad; 
	//Cantidad crítica es un estándar para evaluar cuando la cantidad del producto sea baja
	int p_cantidad_critica;

public:
	//CONSTRUCTORES 
	Articulo(); 
	Articulo(long codigo, string nombre, int cantidad, double ganancia);
	Articulo(long codigo, string nombre, int cantidad, string categoria, double precio_compra, double precio_venta, int cant_critica);
	
	//MÉTODOS PARA VER LOS ATRIBUTOS DE LA CLASE
	long VerCodigo()const; //return el codigo del producto
	string VerNombre()const; //return el nombre del producto
	double VerPrecioVenta()const; //return el precio de venta
	double VerPrecioCompra()const;//return el precio de compra
	double VerGanancia()const;//return la ganancia de la venta de un producto
	string VerCategoria()const;//return la categoria
	int VerCantidad()const;//return la cantidad del articulo
	int VerCantidadCritica()const;//return la cantidad critica del articulo
	string VerFecha()const;//return fecha en caso de que exista
	
	//MÉTODOS PARA MODIFICAR LOS ATRIBUTOS DE LA CLASE
	void ModificarCodigo(long nuevo_codigo); //función para modificar el codigo del producto
	void ModificarNombre(string nuevo_nombre); //función para modificar el nombre del producto
	void ModificarCategoria (string nueva_categoria); //función para cambiar de categoria un producto
	void ModificarPrecioCompra(double nuevo_pcompra); //función para modificar el precio de compra
	void ModificarPrecioVenta (double nuevo_pventa); // función para modificar el precio de venta
	void ModificarCantidad (int nueva_cantidad); //función para cambiar la cantidad 
	void ModificarCantidadCritica(int nueva_cantidad_critica);
	void ModificarGanancia(double nueva_ganancia);
	
	
	//bool para verificar la cantidad disponible es valida para una venta
	bool VerificarDisponibilidad(int cant);
	
	bool VerificarCantidadCritica();
	
	//función para Validar que los datos cargados del artículo sean válidos
	string Validaciones(); 
	
	//funcion para cargar los artículos desde el archivo binario
	void CargarArchivoBin(ifstream &archivo_productos); 
	
	//funcion para guardar los artículos en el archivo binario
	void GuardarArchivoBin(ofstream &archivo_productos); 
	
	
};

///FUNCIONES DE COMPARACIÓN PARA ORDENAR PLANILLA
bool comparacion_nombre_creciente(const Articulo &a1, const Articulo &a2);
bool comparacion_nombre_decreciente(const Articulo &a1, const Articulo &a2);
bool comparacion_categoria_creciente(const Articulo &a1, const Articulo &a2);
bool comparacion_categoria_decreciente(const Articulo &a1, const Articulo &a2);
bool comparacion_codigo_creciente(const Articulo &a1, const Articulo &a2);
bool comparacion_codigo_decreciente(const Articulo &a1, const Articulo &a2);
bool comparacion_pcompra_creciente(const Articulo &a1, const Articulo &a2);
bool comparacion_pcompra_decreciente(const Articulo &a1, const Articulo &a2);
bool comparacion_pventa_creciente(const Articulo &a1, const Articulo &a2);
bool comparacion_pventa_decreciente(const Articulo &a1, const Articulo &a2);
bool comparacion_ganancia_creciente(const Articulo &a1, const Articulo &a2);
bool comparacion_ganancia_decreciente(const Articulo &a1, const Articulo &a2);
bool comparacion_cantidad_creciente(const Articulo &a1, const Articulo &a2);
bool comparacion_cantidad_decreciente(const Articulo &a1, const Articulo &a2);


#endif

