#pragma once
#include "Administrador.h"
#include <string>

class ArchivosAdministradores
{
private:
    std::string _nombreArchivo;
public:
    ArchivosAdministradores(std::string nombrearchivo);
    bool Guardar(Administrador reg);
    bool ValidacionDni(int dni);
    int ContarRegistros();
    Administrador leer (int nroreg);
    int buscar(int dni);



};
