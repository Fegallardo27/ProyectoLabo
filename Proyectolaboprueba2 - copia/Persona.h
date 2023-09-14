#pragma once
#include <cstring>
#include <cstdlib>

class Persona{
protected:
	char _nombre[50];
	char _apellido[50];
	int _DNI;
	//CLASS FECHA
public:
	void setNombre(const char*nombre);
	void setApellido(const char*apellido);
	void setDNI(int DNI);

	const char *getNombre();
	const char *getApellido();
	int getDNI();

	Persona();
	Persona(const char *nombre,const char *apellido, int dni);


};
