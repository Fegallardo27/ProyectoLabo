#pragma once
#include "Persona.h"

class Usuarios: public Persona{
 public:

    void CargarUsuario();
    void MostrarUsuario();
    void setEmail (const char*email);
    void setCoberturaMedica (const char* coberturamedica);
    void setTelefono (const char* telefono);
    const char* getEmail();
    const char* getCoberturaMedica();
    const char* getTelefono();
    
 private:
    char _Email[30],_CoberturaMedica[30];
    char _Telefono[30];

};