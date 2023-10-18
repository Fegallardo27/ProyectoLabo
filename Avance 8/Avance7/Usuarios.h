#pragma once
#include "Persona.h"

class Usuarios: public Persona{
public:
    
    bool validacionDni (int DNI);
    void CargarUsuario();
    void MostrarUsuario(Usuarios reg);
    void setEmail(const char* email);
    void setCoberturaMedica(const char* coberturamedica);
    void setTelefono(const char* telefono);
    void setContrasenia(const char* contrasenia);
    const char* getEmail();
    const char* getCoberturaMedica();
    const char* getTelefono();
    const char* getContrasenia();

private:
    char _Email[30], _CoberturaMedica[30];
    char _Telefono[30];
    char _Contrasenia[30];

};

