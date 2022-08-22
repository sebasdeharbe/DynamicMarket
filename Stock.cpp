#include "Stock.h"
#include "Articulo.h"
#include "Xtras.h"
#include <algorithm>
using namespace std;



Stock::Stock(string arch_articulos) {
	Archivo_articulos=arch_articulos;
	ifstream binario_articulos(Archivo_articulos.c_str(),ios::binary|ios::ate);
	if (binario_articulos.is_open()){
		int tamanio = binario_articulos.tellg();
		int cantidad_productos = tamanio/sizeof(Producto);
		vec_stock.resize(cantidad_productos);
		binario_articulos.seekg(0,ios::beg);
		for(int i=0;i<cantidad_productos;i++) { 
			vec_stock[i].CargarArchivoBin(binario_articulos); 
		}
		binario_articulos.close();
	}
}

bool Stock::GuardarDatos() {
	ofstream binario_articulos(Archivo_articulos.c_str(), ios::binary|ios::trunc);
	if(!binario_articulos.is_open()){
		return false;
	}
	int cantidad=CantidadProductos();
	for(int i=0;i<cantidad;i++) { 
		vec_stock[i].GuardarArchivoBin(binario_articulos);									   
	}
	binario_articulos.close(); 
	return true; 
}

int Stock::CantidadProductos(){
	return vec_stock.size();
}

Articulo &Stock::operator[] (int i){
	return vec_stock[i]; 
}

Articulo &Stock::VerArticulo (int i){
	return vec_stock[i]; 
}

void Stock::AgregarArticulo (Articulo &art){
	vec_stock.push_back(art);
}

void Stock::EliminarArticulo (int i){
	vec_stock.erase(vec_stock.begin()+i); 
}

bool Stock::ComprobarCodigo(long codigo_art){
	for(int i=0;i<CantidadProductos();i++) { 
		Articulo &aux=vec_stock[i];
		long codigo=aux.VerCodigo();
		if(codigo==codigo_art){
			return true;
		}
	}
	return false;
}

bool Stock::RegistrarVenta(Articulo &art, int cant){
	for(int i=0;i<CantidadProductos();i++) { 
		if(VerArticulo(i).VerCodigo()==art.VerCodigo() and VerArticulo(i).VerNombre()==art.VerNombre()){
			if(art.VerificarDisponibilidad(cant)){
				int aux=VerArticulo(i).VerCantidad()-cant; //nueva cantidad disponible
				VerArticulo(i).ModificarCantidad(aux);
				return true; 
			}
		}
	}
	return false; 
	
	
}

bool Stock::RegistrarCompra(Articulo &art, int cant){
	for(int i=0;i<CantidadProductos();i++) { 
		if(VerArticulo(i).VerCodigo()==art.VerCodigo() and VerArticulo(i).VerNombre()==art.VerNombre()){
			int aux=VerArticulo(i).VerCantidad()+cant; //nueva cantidad disponible
			VerArticulo(i).ModificarCantidad(aux);
			return true; 
		}
	}
	return false;
}

vector <int> Stock::BuscarPorNombre (string nombre_art){
	minusculas(nombre_art);
	vector <int> retorno; 
	for(int i=0;i<CantidadProductos();i++) { 
		Articulo &aux=vec_stock[i];
		string nombre=aux.VerNombre();
		minusculas(nombre);
		if(nombre.find(nombre_art)!=string::npos){
			retorno.push_back(i);
		}
	}
	return retorno; 
}

vector <int> Stock::BuscarPorCategoria (string categoria_art){
	minusculas(categoria_art);
	vector <int> retorno; 
	for(int i=0;i<CantidadProductos();i++) { 
		Articulo &aux=vec_stock[i];
		string categoria=aux.VerCategoria();
		minusculas(categoria);
		if(categoria.find(categoria_art)!=string::npos){
			retorno.push_back(i);
		}
	}
	return retorno; 
}

vector <int> Stock::BuscarPorCodigo (long codigo_art){
	vector <int> retorno; 
	for(int i=0;i<CantidadProductos();i++) { 
		Articulo &aux=vec_stock[i];
		long codigo=aux.VerCodigo();
		if(codigo==codigo_art){
			retorno.push_back(i);
		}
	}
	return retorno;  
}

void Stock::OrdenarCreciente(OrdenarPorComp crit_comparacion){
	switch(crit_comparacion){
	case ord_nombre:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_nombre_creciente);
		break;
	case ord_categoria:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_categoria_creciente);
		break;
	case ord_codigo:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_codigo_creciente);
		break;
	case ord_pcompra:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_pcompra_creciente);
		break;
	case ord_pventa:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_pventa_creciente);
		break;
	case ord_ganancia:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_ganancia_creciente);
		break;
	case ord_cantidad:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_cantidad_creciente);
		break;
	};
}

void Stock::OrdenarDecreciente(OrdenarPorComp crit_comparacion){
	switch(crit_comparacion){
	case ord_nombre:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_nombre_decreciente);
		break;
	case ord_categoria:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_categoria_decreciente);
		break;
	case ord_codigo:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_codigo_decreciente);
		break;
	case ord_pcompra:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_pcompra_decreciente);
		break;
	case ord_pventa:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_pventa_decreciente);
		break;
	case ord_ganancia:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_ganancia_decreciente);
		break;
	case ord_cantidad:
		sort(vec_stock.begin(), vec_stock.end(), comparacion_cantidad_decreciente);
		break;
	};
}
