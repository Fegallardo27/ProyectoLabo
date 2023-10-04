#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include "Persona.h"
#include "funcionesproyecto.h"
using namespace std;

class Usuario: public Persona{
public:
	bool validacionDni (int DNI);
	void CargarUsuario();
	void MostrarUsuario();
	void setEmail (const char*email);
    void setCoberturaMedica (const char* coberturamedica);
    void setTelefono (const char* telefono);
    const char* getEmail();
    const char* getCoberturaMedica();
    const char* getTelefono();

protected:
	char _Email[50],_CoberturaMedica[50];
	char _Telefono[30];

};
