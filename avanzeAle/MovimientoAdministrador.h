#pragma once
#include "ArchivosAdministradores.h"
#include "Administrador.h"
#include "MenuAdministrador.h"

class MovimientoAdministrador{
private:
ArchivosAdministradores _archivosAdministradores = ArchivosAdministradores ("administradores.dat");
public:
void cargarAdministrador();
    void mostrarAdministrador(Administrador reg);
    void InicioSesion();
    void modificarAdministrador();


};
