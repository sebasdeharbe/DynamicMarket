#ifndef LISTADOCLIENTES_H
#define LISTADOCLIENTES_H
#include "Cliente.h"

#include <vector>
using namespace std;

enum OrdenarClientes {orden_nombre, orden_direccion, orden_email, orden_telefono, orden_registro};

class ListadoClientes{
private:
	string Archivo_clientes; 
	vector <Cliente> vec_clientes;
public:
	//El constructor recibe los datos desde el archivo binario
	ListadoClientes(string arch_clientes);
	
	bool GuardarDatos();
	
	//Cantidad de Clientes registrados en el vector
	int CantidadClientes();
	
	//Acceder a un Cliente desde una posición
	Cliente &operator[] (int i);
	Cliente &VerCliente (int i);
	
	//Agregar un Cliente
	void AgregarCliente (Cliente &client);
	
	//Eliminar un Cliente
	void EliminarCliente (int i);
	
	//Búsquedas de Clientes
	vector <int> BuscarPorNombre(string nombre_client);
	vector <int> BuscarPorEmail(string email_client);
	vector <int> BuscarPorRegistro(int registro_client); 
	
	
	//Ordenar Listados
	void OrdenarCreciente(OrdenarClientes crit_comparacion);
	void OrdenarDecreciente(OrdenarClientes crit_comparacion); 
	
	
};


#endif

