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
	
	//M�TODOS PAR VER LOS ATRIBUTOS
	string VerNombre()const; //return el nombre de una instancia Persona
	string VerTelefono()const; //return el n�mero de tel�fono
	string VerDireccion()const; //return la direcci�n
	string VerEmail()const; //return la direccion de email
	
	//M�TODOS PARA MODIFICAR LOS ATRIBUTOS DE LA CLASE
	void ModificarNombre( string nuevo_nombre); //modifica el nombre 
	void ModificarTelefono(string nuevo_telefono); //modifica el telefono
	void ModificarDireccion(string nueva_direccion); //modifica la direccion
	void ModificarEmail(string nuevo_email); //modifica el email
	
	
	
	
};


#endif

