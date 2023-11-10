#pragma once
#include "Persona.h"

class Usuarios : public Persona
{
private:
    char _contrasenia[30];
    char _email[30];
    char _telefono[30];
    char _coberturaMedica[30];
    
public:

    void setContrasenia(std::string contrasenia);
    void setEmail(std::string email);
    void setTelefono(std::string telefono);
    void setCoberturaMedica(std::string coberturaMedica);

    std::string getContrasenia ()const;
    std::string getEmail ()const;
    std::string getTelefono ()const;
    std::string getCoberturaMedica ()const;


};
