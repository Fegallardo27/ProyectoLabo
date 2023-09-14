#pragma once
#include <cstring>
#include <cstdlib>
#include "Persona.h"
void Persona::setNombre(const char *nombre){
	strcpy(_nombre,nombre);
}
void Persona::setApellido(const char *apellido){
	strcpy(_apellido,apellido);
}
void Persona::setDNI(int DNI){
	_DNI = DNI;
}

const char* Persona::getNombre(){
	return _nombre;
}
const char* Persona::getApellido(){
	return _apellido;
}
int Persona::getDNI(){
	return _DNI;
}


Persona::Persona(){
 strcpy(_nombre," ");
strcpy(_apellido," ");
_DNI = 0;

}

Persona::Persona (const char *nombre,const char *apellido, int dni){
	strcpy(_nombre, nombre);
    strcpy(_apellido, apellido);
    _DNI = dni;
}




