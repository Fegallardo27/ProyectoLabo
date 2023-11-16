#pragma once
#include "MovimientoUsuario.h"
#include "MovimientoAdministrador.h"
class MenuPrincipal
{
private:
    MovimientoUsuario _usuario;
    MovimientoAdministrador _administrador;
public:
    void Ejecutar();
};

