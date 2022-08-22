#include "ListadoProveedores.h"
#include "Proveedor.h"
#include "Xtras.h"
#include <algorithm>
using namespace std;

ListadoProveedores::ListadoProveedores(string arch_proveedores) {
	Archivo_proveedores=arch_proveedores;
	ifstream binario_proveedores(Archivo_proveedores.c_str(),ios::binary|ios::ate);
	if (binario_proveedores.is_open()){
		int tamanio = binario_proveedores.tellg();
		int cantidad_proveedores = tamanio/sizeof(a_Proveedor);
		vec_proveedores.resize(cantidad_proveedores);
		binario_proveedores.seekg(0,ios::beg);
		for(int i=0;i<cantidad_proveedores;i++) { 
			vec_proveedores[i].CargarArchivoBin(binario_proveedores); 
		}
		binario_proveedores.close();
	}
}

bool ListadoProveedores::GuardarDatos() {
	ofstream binario_proveedores(Archivo_proveedores.c_str(), ios::binary|ios::trunc);
	if(!binario_proveedores.is_open()){
		return false;
	}
	for(int i=0;i<vec_proveedores.size();i++) { 
		vec_proveedores[i].GuardarArchivoBin(binario_proveedores);									   
	}
	binario_proveedores.close(); 
	return true; 
}

int ListadoProveedores::CantidadProveedores(){
	return vec_proveedores.size();
}

Proveedor &ListadoProveedores::operator[] (int i){
	return vec_proveedores[i];
}

Proveedor &ListadoProveedores::VerProveedor(int i){
	return vec_proveedores[i];
}

void ListadoProveedores::AgregarProveedor(Proveedor &prov){
	vec_proveedores.push_back(prov);
}

void ListadoProveedores::EliminarProveedor(int i){
	vec_proveedores.erase(vec_proveedores.begin()+i);
}

vector <int> ListadoProveedores::BuscarPorNombre(string nombre_prov){
	minusculas(nombre_prov);
	vector <int> retorno; 
	for(int i=0;i<CantidadProveedores();i++) { 
		Proveedor &aux=vec_proveedores[i];
		string nombre=aux.VerNombre();
		minusculas(nombre);
		if(nombre.find(nombre_prov)!=string::npos){
			retorno.push_back(i);
		}
	}
	return retorno; 
}

vector <int> ListadoProveedores::BuscarPorRubro(string rubro_prov){
	minusculas(rubro_prov);
	vector <int> retorno; 
	for(int i=0;i<CantidadProveedores();i++) { 
		Proveedor &aux=vec_proveedores[i];
		string rubro=aux.VerRubro();
		minusculas(rubro);
		if(rubro.find(rubro_prov)!=string::npos){
			retorno.push_back(i);
		}
	}
	return retorno; 
}

vector <int> ListadoProveedores::BuscarPorEmpresa (string empresa_prov){
	minusculas(empresa_prov);
	vector <int> retorno; 
	for(int i=0;i<CantidadProveedores();i++) { 
		Proveedor &aux=vec_proveedores[i];
		string empresa=aux.VerEmpresa();
		minusculas(empresa);
		if(empresa.find(empresa_prov)!=string::npos){
			retorno.push_back(i);
		}
	}
	return retorno;  
}

void ListadoProveedores::OrdenarCreciente(OrdenarProveedores crit_comparacion){
	switch(crit_comparacion){
	case orde_nombre:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_nombre_creciente);
		break;
	case orde_direccion:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_direccion_creciente);
		break;
	case orde_email:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_email_creciente);
		break;
	case orde_telefono:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_telefono_creciente);
		break;
	case orde_rubro:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_rubro_creciente);
		break;
	case orde_empresa:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_empresa_creciente);
		break;
	}
}

void ListadoProveedores::OrdenarDecreciente(OrdenarProveedores crit_comparacion){
	switch(crit_comparacion){
	case orde_nombre:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_nombre_decreciente);
		break; 
	case orde_direccion:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_direccion_decreciente);
		break; 
	case orde_email:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_email_decreciente);
		break; 
	case orde_telefono:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_telefono_decreciente);
		break; 
	case orde_rubro:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_rubro_decreciente);
		break; 
	case orde_empresa:
		sort(vec_proveedores.begin(), vec_proveedores.end(), comparacion_empresa_decreciente);
		break; 
	}
}

