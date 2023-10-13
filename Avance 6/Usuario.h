#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include "Persona.h"
//#include "funcionesproyecto.h"
using namespace std;

class Usuario: public Persona{
public:

	bool validacionDni (int DNI);
	void CargarUsuario();
	void MostrarUsuario();
	void setcontraUsuario (const char *contraUsuario);
	void setEmail (const char*email);
    void setCoberturaMedica (const char* coberturamedica);
    void setTelefono (const char* telefono);
    const char* getContra();
    const char* getEmail();
    const char* getCoberturaMedica();
    const char* getTelefono();


protected:
	char _contraUsuario[50];
	char _Email[50],_CoberturaMedica[50];
	char _Telefono[30];

};
