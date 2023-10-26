#include "Persona.h"
#include <cstring>

    void Persona::setNombre(std::string nombre){
        strcpy(_nombre,nombre.c_str());
    }

    void Persona::setApellido(std::string apellido){
        strcpy(_apellido,apellido.c_str());
    }

    void Persona::setfechanac(const Fecha &fechanac){
        _fechanac=fechanac;
    }

    void Persona::setDni(int dni){
        _dni=dni;
    }

    std::string Persona::getNombre()const{
        return _nombre;
    }

    std::string Persona::getApellido()const{
        return _apellido;
    }

    Fecha Persona::getFechanac()const{
        return _fechanac;
    }

    int Persona::getDni(){
        return _dni;
    }