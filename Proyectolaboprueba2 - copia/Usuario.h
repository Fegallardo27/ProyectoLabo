#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include "Persona.h"
using namespace std;

class Usuario: public Persona{
public:

	Persona cargarUsuario();
	void mostrarUsuario();

protected:
	char coberturaMedica[50];
	char plan[50];
	int telefono;
	char email[50];
	char domicilio[50];

};
