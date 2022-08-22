#ifndef LISTADOPROVEEDORES_H
#define LISTADOPROVEEDORES_H
#include <vector>
#include "Proveedor.h"
using namespace std;

enum OrdenarProveedores {orde_nombre, orde_direccion, orde_email, orde_telefono, orde_rubro, orde_empresa};

class ListadoProveedores {
private:
	string Archivo_proveedores; 
	vector <Proveedor> vec_proveedores;
public:
	//El constructor recibe los datos desde el archivo binario
	ListadoProveedores(string arch_proveedores);
	
	bool GuardarDatos();
	
	//Cantidad de Proveedores registrados en el vector
	int CantidadProveedores();
	
	//Acceder a un Proveedor desde una posición
	Proveedor &operator[] (int i);
	Proveedor &VerProveedor (int i);
	
	//Agregar un Proveedor
	void AgregarProveedor (Proveedor &prov);
	
	//Eliminar un Proveedor
	void EliminarProveedor (int i);
	
	//Búsquedas de Proveedores
	vector <int> BuscarPorNombre(string nombre_prov);
	vector <int> BuscarPorRubro(string rubro_prov);
	vector <int> BuscarPorEmpresa (string empresa_prov); 
	
	//Ordenar Listados
	void OrdenarCreciente(OrdenarProveedores crit_comparacion);
	void OrdenarDecreciente(OrdenarProveedores crit_comparacion); 
	
	
};

#endif

