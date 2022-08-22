#include "Proveedor.h"
#include <cstring>
#include "Xtras.h"
#include <string>
using namespace std;

Proveedor::Proveedor() {
	
}

Proveedor::Proveedor(string nombre, 
					 string telefono, 
					 string direccion, 
					 string email, 
					 string rubro, 
					 string nombre_empresa){
	p_nombre=nombre;
	p_telefono=telefono;
	p_direccion=direccion;
	p_email=email;
	p_rubro=rubro;
	p_NombreEmpresa=nombre_empresa;
}

string Proveedor::VerRubro()const{
	return p_rubro;
}

string Proveedor::VerEmpresa()const{
	return p_NombreEmpresa;
}

void Proveedor::ModificarRubro (string nuevo_rubro){
	p_rubro=nuevo_rubro;
}

void Proveedor::ModificarEmpresa (string nueva_empresa){
	p_NombreEmpresa=nueva_empresa;
}


/*El siguiente método sirve para validar que los datos que se ingresen
sean acordes para que el programa funcione. 
El nombre, el email, la direccion y el rubro no pueden estar vacíos o ser demasiados
largos para el arreglo de char.
El nombre de la empresa puede estar vacio, en este caso se asignará automáticamente
el nombre del Proveedor, pero no puede superar los 256 caracteres. 
*/
string Proveedor::Validaciones(){ 
	string errores;
	if (p_nombre.size()==0){
		errores+="El nombre del Proveedor no puede estar vacio\n";
	}
	if (p_nombre.size()>256){
		errores+="El nombre del Proveedor es demasiado largo\n";
	}
	if (p_email.size()==0){
		errores+="El email del  Proveedor no puede estar vacío\n";
	}
	if (p_email.size()>256){
		errores+="El email del Proveedor es demasiado largo\n";
	}
	if (p_direccion.size()==0){
		errores+="La direccion del Proveedor no puede estar vacía\n";
	}
	if (p_direccion.size()>256){
		errores+="La dirección del Proveedor es demasiado larga\n";
	}
	if (p_rubro.size()==0){
		errores+="El rubro del Proveedor no puede estar vacío\n";
	}
	if (p_rubro.size()>256){
		errores+="El rubro del Proveedor es demasiado largo\n";
	}
	if(p_NombreEmpresa.size()>256){
		errores+="El nombre de la Empresa es demasiado largo\n";
	}
	if(p_NombreEmpresa.size()==0){
		p_NombreEmpresa=p_nombre; 
	}
	
	return errores;
}

void Proveedor::CargarArchivoBin (ifstream &archivo_proveedor){
	a_Proveedor cargar;
	archivo_proveedor.read(reinterpret_cast <char*> (&cargar), sizeof(a_Proveedor));
	p_nombre=cargar.nombre;
	p_telefono=cargar.telefono;
	p_direccion=cargar.direccion;
	p_email=cargar.email;
	p_rubro=cargar.rubro;
	p_NombreEmpresa=cargar.empresa;
}

void Proveedor::GuardarArchivoBin (ofstream &archivo_proveedor){
	a_Proveedor guardar;
	strcpy(guardar.nombre,p_nombre.c_str());
	strcpy(guardar.telefono,p_telefono.c_str());
	strcpy(guardar.direccion,p_direccion.c_str());
	strcpy(guardar.email,p_email.c_str());
	strcpy(guardar.rubro,p_rubro.c_str());
	strcpy(guardar.empresa,p_NombreEmpresa.c_str());
	archivo_proveedor.write(reinterpret_cast<char*> (&guardar), sizeof(a_Proveedor));
}


///FUNCIONES
bool comparacion_nombre_creciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerNombre();
	string s2=p2.VerNombre();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}

bool comparacion_nombre_decreciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerNombre();
	string s2=p2.VerNombre();
	minusculas(s1);
	minusculas(s2);
	return s1>s2; 
}

bool comparacion_telefono_creciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerTelefono();
	string s2=p2.VerTelefono();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}

bool comparacion_telefono_decreciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerTelefono();
	string s2=p2.VerTelefono();
	minusculas(s1);
	minusculas(s2);
	return s1>s2; 
}

bool comparacion_direccion_creciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerDireccion();
	string s2=p2.VerDireccion();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}

bool comparacion_direccion_decreciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerDireccion();
	string s2=p2.VerDireccion();
	minusculas(s1);
	minusculas(s2);
	return s1>s2; 
}

bool comparacion_email_creciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerEmail();
	string s2=p2.VerEmail();
	minusculas(s1);
	minusculas(s2);
	return s1<s2; 
}

bool comparacion_email_decreciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerEmail();
	string s2=p2.VerEmail();
	minusculas(s1);
	minusculas(s2);
	return s1>s2;
}

bool comparacion_rubro_creciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerRubro();
	string s2=p2.VerRubro();
	minusculas(s1);
	minusculas(s2);
	return s1<s2;
}

bool comparacion_rubro_decreciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerRubro();
	string s2=p2.VerRubro();
	minusculas(s1);
	minusculas(s2);
	return s1>s2;
}

bool comparacion_empresa_creciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerEmpresa();
	string s2=p2.VerEmpresa();
	minusculas(s1);
	minusculas(s2);
	return s1<s2;
}

bool comparacion_empresa_decreciente(const Proveedor &p1, const Proveedor &p2){
	string s1=p1.VerEmpresa();
	string s2=p2.VerEmpresa();
	minusculas(s1);
	minusculas(s2);
	return s1>s2;
}


