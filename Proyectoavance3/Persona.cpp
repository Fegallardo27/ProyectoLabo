#include <cstring>     
#include "Persona.h"   

 void Persona::  setNombre(const char* nombre){
    strcpy(_Nombre,nombre);
 }
 void Persona:: setApellido(const char* apellido){
    strcpy(_Apellido,apellido);
 }
 void Persona::  setDNI (int dni){
    _DNI=dni;
 }
 const char* Persona::getNombre(){
    return _Nombre;
}    
 const char* Persona::getApellido(){
    return _Apellido;
 }           
int Persona::getDni(){
    return _DNI;
}
