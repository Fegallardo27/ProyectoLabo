#pragma once
#include <iostream>
#include "Usuario.h"

class profesionales: public Usuario{
public:
	void cargar();
	void mostrar();
protected:
	char  titulo[50];
	char especialidad[50];

};

