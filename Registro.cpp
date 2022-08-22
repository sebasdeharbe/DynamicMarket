#include "Registro.h"
#include <algorithm>
#include "Articulo.h"
#include <cstring>

using namespace std;

Registro::Registro(string arch_venta) {
	Archivo_Venta=arch_venta;	
}

bool Registro::CargarFechas(string fecha_inicial, string fecha_final){
	p_fecha_inicial=fecha_inicial;
	p_fecha_final=fecha_final;
	
	vec_Venta.clear();
	
	ifstream binario_venta(Archivo_Venta.c_str(), ios::binary|ios::ate);
	if(binario_venta.is_open()){
		int tamanioarch=binario_venta.tellg();
		int cantidadprod=tamanioarch/(sizeof(ProductoVenta));
		binario_venta.seekg(0);
		ProductoVenta leer;
		for(int i=0;i<cantidadprod;i++) { 
			binario_venta.seekg(i*sizeof(ProductoVenta));
			binario_venta.read(reinterpret_cast <char*> (&leer), sizeof(ProductoVenta));
			if(leer.fecha>=p_fecha_inicial and leer.fecha<=p_fecha_final){
				vec_Venta.push_back(leer);
			}
		}
	}
	else{
		return 0;
	}
	sort(vec_Venta.begin(), vec_Venta.end(), OrdenarxFecha);
	binario_venta.close();
	return 1;
	
}

bool Registro::GuardarVenta(ProductoVenta aux){
	ofstream binario_venta(Archivo_Venta.c_str(), ios::binary|ios::app);
	binario_venta.seekp(0,ios::end);
	if(binario_venta.is_open()){
		binario_venta.write(reinterpret_cast<char*> (&aux), sizeof(ProductoVenta));
	}
	else{
		return false;
	}
	binario_venta.close();
	return true;
}

int Registro::CantidadProductos(){
	return vec_Venta.size();
}

ProductoVenta &Registro::operator[](int i){
	return vec_Venta[i];
}

ProductoVenta &Registro::VerVendido(int i){
	return vec_Venta[i];
}

double Registro::VerGananciaTotal(){
	double ganancia;
	for(int i=0;i<CantidadProductos();i++) { 
		ganancia+=vec_Venta[i].ganancia;
	}
	if(CantidadProductos()==0){
		return 0;
	}
	else{
		return ganancia;
	}
	
}



bool OrdenarxFecha(ProductoVenta a, ProductoVenta b) {
	string fechaA=a.fecha;
	string fechaB=b.fecha;
	if (fechaB<fechaA){
		return 1;
	}
	else{
		return 0;
	}
}
	


