#pragma once
#include "Fecha.h"
class Persona{
public:
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setDNI(int dni);
    void setFechanacimiento(Fecha fechanac);
    const char* getNombre();
    const char* getApellido();
    int getDni();
    Fecha getfechanacimiento();

protected:
    char _Nombre[30], _Apellido[30];
    int _DNI;
    Fecha FechaNacimiento;
};

