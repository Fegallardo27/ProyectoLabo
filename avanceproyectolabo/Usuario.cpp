#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

void Usuario::cargar(){
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ingresu su apellido: ";
	cin>>apellido;
	cout<<"Ingerse su DNI: ";
	cin>>dni;
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su cobertura medica: ";
	cin>>coberturaMedica;

}
void Usuario::mostrar(){
	cout<<"Su nombre es: "<<nombre<<endl;
	cout<<"su apellido: "<<apellido<<endl;
	cout<<"DNI: "<<dni<<endl;
	cout<<"tiene: "<<edad<<endl;
	cout<<"Su cobertura medica es: "<<coberturaMedica<<endl;

}

