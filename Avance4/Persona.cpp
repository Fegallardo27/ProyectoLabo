#pragma once
#include <cstring>
#include <cstdlib>
#include "Persona.h"

void Persona::setNombre(const char *nombre){
	strcpy(_Nombre,nombre);
}
void Persona::setApellido(const char *apellido){
	strcpy(_Apellido,apellido);
}
void Persona::setDNI(int DNI){
	_DNI = DNI;
}

const char* Persona::getNombre(){
	return _Nombre;
}
const char* Persona::getApellido(){
	return _Apellido;
}
int Persona::getDNI(){
	return _DNI;
}


Persona::Persona(){
 strcpy(_Nombre," ");
strcpy(_Apellido," ");
_DNI = 0;

}

Persona::Persona (const char *nombre,const char *apellido, int DNI){
	strcpy(_Nombre, nombre);
    strcpy(_Apellido, apellido);
    _DNI = DNI;
}




