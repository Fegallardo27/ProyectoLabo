#include "Usuarios.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void Usuarios:: setContrasenia(std::string contrasenia){
    strcpy(_contrasenia,contrasenia.c_str());
}
void Usuarios:: setEmail(std::string email){
    strcpy(_email,email.c_str());
}
void Usuarios:: setTelefono(std::string telefono){
    strcpy(_telefono,telefono.c_str());
}
void Usuarios:: setCoberturaMedica(std::string coberturaMedica){
    strcpy(_coberturaMedica,coberturaMedica.c_str());
}

string Usuarios:: getContrasenia ()const{
    return _contrasenia;
}
string Usuarios:: getEmail ()const{
    return _email;
}
string Usuarios:: getTelefono ()const{
    return _telefono;
}
string Usuarios:: getCoberturaMedica ()const{
    return _coberturaMedica;
}
