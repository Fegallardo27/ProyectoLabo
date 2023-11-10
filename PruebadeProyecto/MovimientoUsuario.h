#pragma once
#include "Archivos.h"
#include "Usuarios.h"
#include "MenuUsuario.h"


class MovimientoUsuario
{
private:
    Archivos _archivo = Archivos ("usuarios.dat");
public:
    void cargarUsuario();
    void mostrarUsuario(Usuarios reg);
    void InicioSesion(); 
    void Modificar();
};

