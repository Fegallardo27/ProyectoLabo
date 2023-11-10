#pragma once 
#include <string>
#include "Archivos.h"
#include "Fecha.h"
#include "Persona.h"


class MovimientoAdmin {
    private :
        std::string contraAdmin = "admin1234";
        int idAdmin;
          Archivos _dat = Archivos ("administrador.dat");
    public:
    MovimientoAdmin(int id, std::string contraAdmin);

    void CargarProfesional();
    void CargarTurnos();
    void MostrarTurnos();

};