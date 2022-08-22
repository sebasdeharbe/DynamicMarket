#include "ListadoClientes.h"
#include "Cliente.h"
#include "Xtras.h"
#include <algorithm>
using namespace std;


ListadoClientes::ListadoClientes(string arch_clientes) {
	Archivo_clientes=arch_clientes;
	ifstream binario_clientes(Archivo_clientes.c_str(),ios::binary|ios::ate);
	if (binario_clientes.is_open()){
		int tamanio = binario_clientes.tellg();
		int cantidad_clientes = tamanio/sizeof(a_Cliente);
		vec_clientes.resize(cantidad_clientes);
		binario_clientes.seekg(0,ios::beg);
		for(int i=0;i<cantidad_clientes;i++) { 
			vec_clientes[i].CargarArchivoBin(binario_clientes); 
		}
		binario_clientes.close();
	}
}

bool ListadoClientes::GuardarDatos() {
	ofstream binario_clientes(Archivo_clientes.c_str(), ios::binary|ios::trunc);
	if(!binario_clientes.is_open()){
		return false;
	}
	for(int i=0;i<vec_clientes.size();i++) { 
		vec_clientes[i].GuardarArchivoBin(binario_clientes);									   
	}
	binario_clientes.close(); 
	return true; 
}

int ListadoClientes::CantidadClientes(){
	return vec_clientes.size();
}

Cliente &ListadoClientes::operator[] (int i){
	return vec_clientes[i];
}

Cliente &ListadoClientes::VerCliente(int i){
	return vec_clientes[i];
}

void ListadoClientes::AgregarCliente(Cliente &client){
	vec_clientes.push_back(client);
}

void ListadoClientes::EliminarCliente(int i){
	vec_clientes.erase(vec_clientes.begin()+i);
}

vector <int> ListadoClientes::BuscarPorNombre(string nombre_client){
	minusculas(nombre_client);
	vector <int> retorno; 
	for(int i=0;i<CantidadClientes();i++) { 
		Cliente &aux=vec_clientes[i];
		string nombre=aux.VerNombre();
		minusculas(nombre);
		if(nombre.find(nombre_client)!=string::npos){
			retorno.push_back(i);
		}
	}
	return retorno; 
}

vector <int> ListadoClientes::BuscarPorEmail(string email_client){
	minusculas(email_client);
	vector <int> retorno; 
	for(int i=0;i<CantidadClientes();i++) { 
		Cliente &aux=vec_clientes[i];
		string email=aux.VerEmail();
		minusculas(email);
		if(email.find(email_client)!=string::npos){
			retorno.push_back(i);
		}
	}
	return retorno; 
}

vector <int> ListadoClientes::BuscarPorRegistro(int registro_client){
	vector <int> retorno; 
	for(int i=0;i<CantidadClientes();i++) { 
		Cliente &aux=vec_clientes[i];
		if(registro_client==aux.VerCodigoCliente()){
			retorno.push_back(i);
		}
	}
	return retorno;  
}

void ListadoClientes::OrdenarCreciente(OrdenarClientes crit_comparacion){
	switch(crit_comparacion){
	case orden_nombre:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_nombre_creciente);
		break;
	case orden_direccion:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_direccion_creciente);
		break;
	case orden_email:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_email_creciente);
		break;
	case orden_telefono:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_telefono_creciente);
		break;
	case orden_registro:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_registro_creciente);
		break;
	}
}

void ListadoClientes::OrdenarDecreciente(OrdenarClientes crit_comparacion){
	switch(crit_comparacion){
	case orden_nombre:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_nombre_decreciente);
		break;
	case orden_direccion:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_direccion_decreciente);
		break;
	case orden_email:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_email_decreciente);
		break;
	case orden_telefono:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_telefono_decreciente);
		break;
	case orden_registro:
		sort(vec_clientes.begin(), vec_clientes.end(), comparacion_registro_decreciente);
		break;
	}
}

