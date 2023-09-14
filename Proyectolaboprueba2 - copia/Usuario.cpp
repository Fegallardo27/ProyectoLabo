#pragma once
#include <iostream>
#include <cstdlib>
#include "Usuario.h"
using namespace std;

Persona Usuario::cargarUsuario(){
	cout<<"Ingrese su nombre: "<<endl;
	cin>>_nombre;
	cout<<"Ingrese su apellido: "<<endl;
	cin>>_apellido;
	cout<<"Ingresu su DNI: "<<endl;
	cin>>_DNI;
	cout<<"Ingrese su cobertura medica: "<<endl;
	cin>>coberturaMedica;
	cout<<"Ingrese su plan: "<<endl;
	cin>>plan;
	cout<<"Ingrese su email: "<<endl;
	cin>>email;
	cout<<"Ingrese su numero de telefono: "<<endl;
	cin>>telefono;
	cout<<"Ingrese su domicilio: "<<endl;
	cin>>domicilio;
}
void Usuario::mostrarUsuario(){
	cout<<"Su nombre es: "<<endl;
	cout<<_nombre<<endl;
	cout<<"Su apellido es: "<<endl;
	cout<<_apellido<<endl;
	cout<<"Su cobertura medica es: "<<endl;
	cout<<coberturaMedica<<endl;
	cout<<"Su plan es: "<<endl;
	cout<<plan<<endl;
	cout<<"Su email es: "<<endl;
	cout<<email<<endl;
	cout<<"Su domicilio es: "<<endl;
	cout<<domicilio<<endl;
}


