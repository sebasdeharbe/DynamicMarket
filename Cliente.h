#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"
#include <string>
#include <fstream>
using namespace std;

//Struct auxiliar para guardar los datos de un cliente en un archivo binario.  
struct a_Cliente{
	char nombre[256];
	char direccion[256];
	char email[256];
	char telefono[256];
	int registroCliente; 
};


class Cliente : public Persona {
private:
	int p_registroCliente;
public:
	//CONSTRUCTORES
	Cliente();
	Cliente(string nombre, string telefono, string direccion, string email, int numero_registro);
	
	//M�TODO PARA VER EL C�DIGO
	int VerCodigoCliente()const;
	
	//M�TODO PARA MODIFICAR EL CODIGO
	void ModificarCodigoCliente(int nuevo_codigo);
	
	//M�TODO PARA VERIFICAR LOS DATOS
	string Validaciones(); 
	
	//M�TODO PARA CARGAR LOS DATOS DE UN BINARIO
	void CargarArchivoBin(ifstream &archivo_cliente);
	
	
	//M�TODO PARA GUARDAR LOS DATOS EN UN BINARIO
	void GuardarArchivoBin(ofstream &archivo_cliente);
	
};

//FUNCIONES PARA ORDENAR LISTAS 
bool comparacion_nombre_creciente(const Cliente &c1, const Cliente &c2);
bool comparacion_nombre_decreciente(const Cliente &c1, const Cliente &c2);
bool comparacion_telefono_creciente(const Cliente &c1, const Cliente &c2);
bool comparacion_telefono_decreciente(const Cliente &c1, const Cliente &c2);
bool comparacion_direccion_creciente(const Cliente &c1, const Cliente &c2);
bool comparacion_direccion_decreciente(const Cliente &c1, const Cliente &c2);
bool comparacion_email_creciente(const Cliente &c1, const Cliente &c2);
bool comparacion_email_decreciente(const Cliente &c1, const Cliente &c2);
bool comparacion_registro_creciente(const Cliente &c1, const Cliente &c2);
bool comparacion_registro_decreciente(const Cliente &c1, const Cliente &c2);


#endif

