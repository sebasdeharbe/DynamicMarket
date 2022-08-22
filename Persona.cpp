#include "Persona.h"
#include <string>
#include <cstring>
#include "Xtras.h"
using namespace std;

Persona::Persona(){
	
}
Persona::Persona(string nombre, 
				 string telefono,
				 string direccion, 
				 string email){
	p_nombre=nombre;
	p_telefono=telefono;
	p_direccion=direccion;
	p_email=email;
}

string Persona:: VerNombre()const{
	return p_nombre;
}

string Persona::VerTelefono()const{
	return p_telefono;
}

string Persona::VerDireccion()const{
	return p_direccion;
}

string Persona::VerEmail()const{
	return p_email;
}

void Persona::ModificarNombre(string nuevo_nombre){
	p_nombre=nuevo_nombre;
}

void Persona::ModificarTelefono(string nuevo_telefono){
	p_telefono=nuevo_telefono;
}

void Persona::ModificarDireccion(string nueva_direccion){
	p_direccion=nueva_direccion;
}

void Persona::ModificarEmail(string nuevo_email){
	p_email=nuevo_email;
}

