#include "Cliente.h"
#include "Persona.h"
#include "Xtras.h"
#include <cstring>
using namespace std;

Cliente::Cliente() {
	
}

Cliente::Cliente(string nombre, 
				 string telefono, 
				 string direccion, 
				 string email, 
				 int numero_registro){
	p_nombre=nombre;
	p_telefono=telefono;
	p_direccion=direccion;
	p_email=email;
	p_registroCliente=numero_registro;
}


int Cliente::VerCodigoCliente()const{
	return p_registroCliente;
}

void Cliente::ModificarCodigoCliente(int nuevo_codigo){
	p_registroCliente=nuevo_codigo;
}


//La siguiente funcion verifica que los parámetros que se cargan en cada Cliente sean correctos
/*El nombre o el email no pueden estar vacios o superar el tamaño del arreglo de char
La direccion no puede superar los 256 caracteres
El número de registro no puede ser 0 o negativo; 
*/
string Cliente::Validaciones(){
	string errores;
	if (p_nombre.size()==0){
		errores+="El nombre del Cliente no puede estar vacio\n";
	}
	if (p_nombre.size()>256){
		errores+="El nombre del Cliente es demasiado largo\n";
	}
	if (p_email.size()==0){
		errores+="El email del Cliente no puede estar vacío\n";
	}
	if (p_email.size()>256){
		errores+="El email del Cliente es demasiado largo\n";
	}
	if (p_direccion.size()>256){
		errores+="La dirección del Cliente es demasiado larga\n";
	}
	if (p_registroCliente<=0){
		errores+="El número de Cliente no puede ser 0 o negativo\n";
	}
	return errores;
}

void Cliente::CargarArchivoBin(ifstream &archivo_cliente){
	a_Cliente cargar;
	archivo_cliente.read(reinterpret_cast <char*> (&cargar), sizeof(a_Cliente));
	p_nombre=cargar.nombre;
	p_telefono=cargar.telefono;
	p_direccion=cargar.direccion;
	p_email=cargar.email;
	p_registroCliente=cargar.registroCliente;
}

void Cliente::GuardarArchivoBin(ofstream &archivo_cliente){
	a_Cliente guardar;
	strcpy(guardar.telefono,p_telefono.c_str());
	strcpy(guardar.nombre,p_nombre.c_str());
	strcpy(guardar.direccion,p_direccion.c_str());
	strcpy(guardar.email,p_email.c_str());
	guardar.registroCliente=p_registroCliente;
	archivo_cliente.write(reinterpret_cast<char*> (&guardar), sizeof(a_Cliente)); 	
}


bool comparacion_nombre_creciente(const Cliente &c1, const Cliente &c2){
	string s1=c1.VerNombre();
	string s2=c2.VerNombre();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}

bool comparacion_nombre_decreciente(const Cliente &c1, const Cliente &c2){
	string s1=c1.VerNombre();
	string s2=c2.VerNombre();
	minusculas(s1);
	minusculas(s2);
	return s1>s2; 
}

bool comparacion_direccion_decreciente(const Cliente &c1, const Cliente &c2){
	string s1=c1.VerDireccion();
	string s2=c2.VerDireccion();
	minusculas(s1);
	minusculas(s2);
	return s1>s2; 
}

bool comparacion_direccion_creciente(const Cliente &c1, const Cliente &c2){
	string s1=c1.VerDireccion();
	string s2=c2.VerDireccion();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}


bool comparacion_email_creciente(const Cliente &c1, const Cliente &c2){
	string s1=c1.VerEmail();
	string s2=c2.VerEmail();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}

bool comparacion_email_decreciente(const Cliente &c1, const Cliente &c2){
	string s1=c1.VerEmail();
	string s2=c2.VerEmail();
	minusculas(s1);
	minusculas(s2);
	return s1>s2; 
}

bool comparacion_telefono_decreciente(const Cliente &c1, const Cliente &c2){
	return c1.VerTelefono()>c2.VerTelefono(); 
}

bool comparacion_telefono_creciente(const Cliente &c1, const Cliente &c2){
	return c1.VerTelefono()<c2.VerTelefono(); 
}

bool comparacion_registro_creciente(const Cliente &c1, const Cliente &c2){
	return c1.VerCodigoCliente()>c2.VerCodigoCliente();
}

bool comparacion_registro_decreciente(const Cliente &c1, const Cliente &c2){
	return c1.VerCodigoCliente()<c2.VerCodigoCliente();
}
