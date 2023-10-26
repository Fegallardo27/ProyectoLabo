#pragma once
#include<string>
#include "Fecha.h"

class Persona
{
private:
    char _nombre[30], _apellido[30];
    Fecha _fechanac;
    int _dni;
public:
    
    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    void setfechanac(const Fecha &fechanac);
    void setDni(int dni);

    std::string getNombre()const;
    std::string getApellido()const;
    Fecha getFechanac()const;
    int getDni();

};
