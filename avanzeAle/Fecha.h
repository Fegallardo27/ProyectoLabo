#pragma once
#include <string>

class Fecha
{
private:
    int _dia,_mes,_anio;
public:
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    int getDia();
    int getMes();
    int getAnio();

    Fecha();
    Fecha (int dia, int mes, int anio);
    std::string to_string();

};
