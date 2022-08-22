#include "Articulo.h"
#include <cstring>
#include "Xtras.h"
#include "Fecha_Hora.h"
using namespace std;

Articulo::Articulo(){
	
}

Articulo::Articulo( long codigo,
				   string nombre, 
				   int cantidad,
				   double ganancia){
	p_codigo=codigo;
	p_nombre=nombre;
	p_cantidad=cantidad;
	p_ganancia=ganancia;
}

Articulo::Articulo(long codigo, 
				   string nombre, 
				   int cantidad, 
				   string categoria, 
				   double precio_compra, 
				   double precio_venta,
				   int cant_critica){
	p_codigo=codigo;
	p_nombre=nombre;
	p_categoria=categoria;
	p_precio_compra=precio_compra;
	p_precio_venta=precio_venta;
	p_ganancia=precio_venta-precio_compra;
	p_cantidad=cantidad; 
	p_cantidad_critica=cant_critica;
}
long Articulo::VerCodigo()const{
	return p_codigo;
}
string Articulo::VerNombre()const{
	return p_nombre; 
}
double Articulo::VerPrecioVenta()const{
	return p_precio_venta;
}
double Articulo::VerPrecioCompra()const{
	return p_precio_compra;
}
double Articulo::VerGanancia()const{
	return p_ganancia;
}
string Articulo::VerCategoria()const{
	return p_categoria;
}

int Articulo::VerCantidad()const{ 
	return p_cantidad; 
}

int Articulo::VerCantidadCritica()const{
	return p_cantidad_critica;
}

void Articulo::ModificarCodigo(long nuevo_codigo){
	p_codigo=nuevo_codigo;
}
void Articulo::ModificarNombre(string nuevo_nombre){
	p_nombre=nuevo_nombre; 
}

void Articulo::ModificarCategoria (string nueva_categoria){
	p_categoria=nueva_categoria; 
}

void Articulo::ModificarPrecioCompra(double nuevo_pcompra){
	if (nuevo_pcompra>0){
		p_precio_compra=nuevo_pcompra;
		p_ganancia=p_precio_venta-p_precio_compra;
	}
}
void Articulo::ModificarPrecioVenta (double nuevo_pventa){
	if (nuevo_pventa>0){
		p_precio_venta=nuevo_pventa;
		p_ganancia=p_precio_venta-p_precio_compra;
	};
}
void Articulo::ModificarCantidad (int nueva_cantidad){
	p_cantidad=nueva_cantidad;
}

void Articulo::ModificarCantidadCritica(int nueva_cantidad_critica){
	p_cantidad_critica=nueva_cantidad_critica;
}

void Articulo::ModificarGanancia(double nueva_ganancia){
	p_ganancia=nueva_ganancia;
}

bool Articulo::VerificarDisponibilidad(int cant){
	if(p_cantidad>=cant){
		return true;
	}
	else{
		return false; 
	}
}

bool Articulo::VerificarCantidadCritica(){
	if(p_cantidad<=p_cantidad_critica){
		return true;
	}
	else{
		return false;
	}
}

void Articulo::CargarArchivoBin(ifstream &archivo_productos){
	Producto cargar;
	archivo_productos.read(reinterpret_cast <char*> (&cargar), sizeof(Producto));
	p_codigo=cargar.codigo;
	p_nombre=cargar.nombre;
	p_categoria=cargar.categoria;
	p_precio_compra=cargar.precio_compra;
	p_precio_venta=cargar.precio_venta;
	p_ganancia=cargar.ganancia;
	p_cantidad=cargar.cantidad;
	p_cantidad_critica=cargar.cant_critica;
}

void Articulo::GuardarArchivoBin(ofstream &archivo_productos){
	Producto guardar;
	guardar.codigo=p_codigo;
	strcpy(guardar.nombre,p_nombre.c_str());
	strcpy(guardar.categoria,p_categoria.c_str());
	guardar.precio_compra=p_precio_compra;
	guardar.precio_venta=p_precio_venta;
	guardar.ganancia=p_ganancia;
	guardar.cantidad=p_cantidad;
	guardar.cant_critica=p_cantidad_critica;
	archivo_productos.write(reinterpret_cast<char*> (&guardar), sizeof(Producto)); 	
}

//La siguiente funcion verifica que los parámetros que se cargan en cada Articulo sean correctos
/*El nombre o la categoria no pueden estar vacios o superar el tamaño del arreglo de char 
Los precios no pueden ser negativos o estar vacios
La ganancia no puede ser negativa
La cantidad no puede ser menor a 0
*/
string Articulo::Validaciones() {
	string errores;
	if (p_nombre.size()==0){
		errores+="El nombre no puede estar vacio\n";
	}
	if (p_nombre.size()>256){
		errores+="El nombre es demasiado largo\n";
	}
	if (p_categoria.size()==0){
		errores+="La categoria no puede estar vacía\n";
	}
	if (p_categoria.size()>256){
		errores+="El nombre de la categoría es demasiado largo\n";
	}
	if (p_precio_compra<=0){
		errores+="El precio de compra no puede ser cero o negativo\n";
	}
	if (p_precio_venta<p_precio_compra){
		errores+="El precio de compra no puede ser mayor al precio de venta\n";
	}
	if (p_ganancia<=0){
		errores+="La ganancia no puede ser cero o negativa\n";
	}
	if (p_cantidad<0){
		errores+="La cantidad de unidades del producto no puede ser negativa\n"; 
	}
	return errores;
}


///FUNCIONES DE COMPARACIÓN
bool comparacion_nombre_creciente(const Articulo &a1, const Articulo &a2){
	string s1=a1.VerNombre();
	string s2=a2.VerNombre();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}

bool comparacion_nombre_decreciente(const Articulo &a1, const Articulo &a2){
	string s1=a1.VerNombre();
	string s2=a2.VerNombre();
	minusculas(s1);
	minusculas(s2);
	return s1>s2; 
}

bool comparacion_categoria_creciente(const Articulo &a1, const Articulo &a2){
	string s1=a1.VerCategoria();
	string s2=a2.VerCategoria();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}

bool comparacion_categoria_decreciente(const Articulo &a1, const Articulo &a2){
	string s1=a1.VerCategoria();
	string s2=a2.VerCategoria();
	minusculas(s1);
	minusculas(s2);
	return s1>s2; 
}

bool comparacion_codigo_creciente(const Articulo &a1, const Articulo &a2){
	return a1.VerCodigo()<a2.VerCodigo();
}

bool comparacion_codigo_decreciente(const Articulo &a1, const Articulo &a2){
	return a1.VerCodigo()>a2.VerCodigo();
}
bool comparacion_pcompra_creciente(const Articulo &a1, const Articulo &a2){
	return a1.VerPrecioCompra()<a2.VerPrecioCompra();
}

bool comparacion_pcompra_decreciente(const Articulo &a1, const Articulo &a2){
	return a1.VerPrecioCompra()>a2.VerPrecioCompra();
}

bool comparacion_pventa_creciente(const Articulo &a1, const Articulo &a2){
	return a1.VerPrecioVenta()<a2.VerPrecioVenta();
}

bool comparacion_pventa_decreciente(const Articulo &a1, const Articulo &a2){
	return a1.VerPrecioVenta()>a2.VerPrecioVenta();
}

bool comparacion_ganancia_creciente(const Articulo &a1, const Articulo &a2){
	return a1.VerGanancia()<a2.VerGanancia();
}
bool comparacion_ganancia_decreciente(const Articulo &a1, const Articulo &a2){
	return a1.VerGanancia()>a2.VerGanancia();
}

bool comparacion_cantidad_creciente(const Articulo &a1, const Articulo &a2){
	return a1.VerCantidad()<a2.VerCantidad();
}

bool comparacion_cantidad_decreciente(const Articulo &a1, const Articulo &a2){
	return a1.VerCantidad()>a2.VerCantidad();
}

