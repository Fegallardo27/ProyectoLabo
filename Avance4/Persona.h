#pragma once
#include <cstring>
#include <cstdlib>

class Persona{

public:
	void setNombre(const char*nombre);
	void setApellido(const char*apellido);
	void setDNI(int DNI);

	const char *getNombre();
	const char *getApellido();
	int getDNI();

	Persona();
	Persona(const char *nombre,const char *apellido, int DNI);

protected:
	char _Nombre[50];
	char _Apellido[50];
	int _DNI;


};
