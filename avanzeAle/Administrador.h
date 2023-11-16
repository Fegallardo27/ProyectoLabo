#pragma once
#include "Persona.h"

class Administrador : public Persona
{
private:
    char _contrasenia[30];

public:

    void setContrasenia(std::string contrasenia);


    std::string getContrasenia ()const;



};
