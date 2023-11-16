#include <iostream>
#include <cstring>
#include <string>

using namespace std;
#include "Administrador.h"

void Administrador:: setContrasenia(std::string contrasenia){
    strcpy(_contrasenia,contrasenia.c_str());
}

string Administrador:: getContrasenia ()const{
    return _contrasenia;
}


