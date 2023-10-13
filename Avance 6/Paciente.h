#pragma once
#include <iostream>
#include <cstdlib>
#include "Usuario.h"

class Paciente: public Usuario{
public:
	void cargar();
	void mostrar();
protected:
	int numerodeTelefono;
	char plan[50];

};
