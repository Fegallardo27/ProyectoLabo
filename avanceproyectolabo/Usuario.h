#pragma once
#include <iostream>
#include <string>
using namespace std;

class Usuario{
public:
	void cargar();
	void mostrar();

protected:
	char nombre[50];
	char apellido[50];
	int  dni,edad;
	char coberturaMedica[50];

};
