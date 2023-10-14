#include <iostream>
#include <cstring>

#include "Funciones.h"
#include "Persona.h"
#include "Usuarios.h"

using namespace std;


Usuarios login(){
	int DNIMenuPrin;
	string ContMenuPrin;
	cout << "DNI: ";
	cin >> DNIMenuPrin;
	cout << "Contrasenia: ";
	cin>> ContMenuPrin;
	system("cls");
	Usuarios nuevo;
	FILE* n;
	n = fopen("usuarios.dat", "rb");
	if (n == nullptr) {
		cout << "No se puede abrir el archivo" << endl;
		fclose(n);
		return nuevo;
	}

	while (fread(&nuevo, sizeof(Usuarios), 1, n)) {
		if(DNIMenuPrin == nuevo.getDni() && ContMenuPrin==nuevo.getContrasenia()){
		cout<<"BIENVENIDO"<<" "<< nuevo.getNombre()<<" "<<nuevo.getApellido()<<endl;
		fclose(n);
		}
	}
	return nuevo;
}

bool escribirUsuario() {
	Usuarios nuevo;
	FILE* n; 
	n = fopen("usuarios.dat", "ab");
	if (n == nullptr) {
		return false;
	}
	cout << "**INGRESE UN NUEVO USUARIO**" << endl;
	nuevo.CargarUsuario();

	bool escrbio = fwrite(&nuevo, sizeof(Usuarios), 1, n);
	fclose(n);
	return escrbio;

}

bool verUsuarioRegistrado(){
	Usuarios nuevo;
	FILE* n;
	n=fopen("usuarios.dat","rb");
	if(n==nullptr){
		return false;
	}
	while(fread(&nuevo,sizeof(Usuarios),1,n)){
		nuevo.MostrarUsuario(nuevo);		
		cout<<endl;
	}
	fclose(n);
	return true;
}