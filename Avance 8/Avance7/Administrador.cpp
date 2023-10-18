#pragma once;
#include "Administrador.h"
using namespace std;

void Administrador::cargarMenuAd(){
	cout<<"###### MENU USUARIO ######"<<endl;
	cout<<"1- Seleccionar Nuevo Turno"<<endl;
	cout<<"2- Ver Turnos "<<endl;
	cout<<"3- Cancelar Turnos"<<endl;
	cout<<"4- Modificar Usuario"<<endl;
	cout<<"0- Volver"<<endl;


}
bool Administrador::validacionDni(){
	Administrador admi;
	FILE *n;
	bool existeA = false;
	n = fopen ("pruebaAdmi.dat","rb");
		if (n ==nullptr){
			return false;
		}
	while(fread(&admi, sizeof(Administrador), 1, n)){
		if(admi.getDni() == DNI){
			existeA = true;
		}
		std::cout <<std::endl;
	}
	return existeU;
}
void CargarAdmi(){



}

