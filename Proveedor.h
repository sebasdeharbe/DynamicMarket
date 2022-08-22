#ifndef PROVEEDOR_H
#define PROVEEDOR_H
#include "Persona.h"
#include <string>
#include <fstream>
using namespace std;

//struct auxiliar para guardar los datos en binario
struct a_Proveedor{
	char nombre[256];
	char direccion[256];
	char email[256];
	char telefono[256];
	char rubro[256];
	char empresa[256]; 
};

class Proveedor : public Persona {
private:
	string p_rubro; 
	string p_NombreEmpresa;
public:
	//CONSTRUCTORES 
	Proveedor();
	Proveedor(string nombre, string telefono, string direccion, string email, string rubro, string nombre_empresa);
	
	//MÉTODO PARA VER ATRIBUTOS
	string VerRubro()const;
	string VerEmpresa()const;
	
	//MÉTODO PARA MODIFICAR EL RUBRO DEL PROVEEDOR
	void ModificarRubro (string nuevo_rubro);
	void ModificarEmpresa (string nueva_empresa); 
	
	//MÉTODO PARA VERIFICAR LOS DATOS QUE SE INGRESAN PARA UNA INSTANCIA
	string Validaciones();
	
	//MÉTODO PARA CARGAR LOS DATOS DE UN BINARIO
	void CargarArchivoBin (ifstream &archivo_proveedor);
	
	//MÉTODO PARA GUARDAR LOS DATOS EN UN BINARIO
	void GuardarArchivoBin (ofstream &archivo_proveedor); 
	
};

//FUNCIONES PARA ORDENAR LISTAS 
bool comparacion_nombre_creciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_nombre_decreciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_telefono_creciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_telefono_decreciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_direccion_creciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_direccion_decreciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_email_creciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_email_decreciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_rubro_creciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_rubro_decreciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_empresa_creciente(const Proveedor &p1, const Proveedor &p2);
bool comparacion_empresa_decreciente(const Proveedor &p1, const Proveedor &p2);

#endif
