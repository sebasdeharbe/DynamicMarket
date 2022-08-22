#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <fstream>
#include "Persona.h"
using namespace std;


class Persona{
protected:
	string p_nombre;
	string p_telefono;
	string p_direccion;
	string p_email;
	
public:
	//CONSTRUCTORES
	Persona();
	Persona(string nombre, string telefono, string direccion, string email);
	
	//MÉTODOS PAR VER LOS ATRIBUTOS
	string VerNombre()const; //return el nombre de una instancia Persona
	string VerTelefono()const; //return el número de teléfono
	string VerDireccion()const; //return la dirección
	string VerEmail()const; //return la direccion de email
	
	//MÉTODOS PARA MODIFICAR LOS ATRIBUTOS DE LA CLASE
	void ModificarNombre( string nuevo_nombre); //modifica el nombre 
	void ModificarTelefono(string nuevo_telefono); //modifica el telefono
	void ModificarDireccion(string nueva_direccion); //modifica la direccion
	void ModificarEmail(string nuevo_email); //modifica el email
	
	
	
	
};


#endif

