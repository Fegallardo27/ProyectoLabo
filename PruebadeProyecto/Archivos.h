#pragma once
#include "Usuarios.h"
#include <string>

class Archivos
{
private:
    std::string _nombreArchivo;
public:
    Archivos(std::string nombrearchivo);
    bool Guardar(Usuarios reg);
    bool Guardar(Usuarios reg, int nroRegistro);
    bool Cargar();

    bool ValidacionDni(int dni);
    int ContarRegistros();
    Usuarios leer (int nroreg); 
    int buscar(int dni);

    
};
