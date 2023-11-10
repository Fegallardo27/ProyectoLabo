#pragma once
#include "Persona.h"
#include <string>


class Profesionales : public Persona
{
private:
    std::string _especialidad;
    int _Nummatricula;
    Fecha _diasAtencion;
    Fecha _horarioAtencion; 

public:
 void setEspecialidad (std::string especialidad);    
 void setNumMatricula (int matricula);    
 void setDiasAtencion (Fecha dias);
 void setHorarioAtencion (Fecha horarios);

 std::string getEspecialidad() const;  
 int getNumMatricula() const; 
 Fecha getDiasAtencion();
 Fecha getHorariosAtencion();

};


