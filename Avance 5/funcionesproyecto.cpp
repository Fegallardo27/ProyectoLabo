#pragma once
#include <iostream>
#include <cstdio>
#include <cstring>
#include "Persona.h"
#include "Usuario.h"
#include "funcionesproyecto.h"
using namespace std;

Persona login(){
	int DNIMP;
	string CONTRAMP;
	cout << "DNI: " << endl;
	cin >> DNIMP;
	cout<< "INGRESE SU CONSTRASEÑA: " <<endl;
	cin >>CONTRAMP;
	Usuario nuevo;
	FILE *n;
	n = fopen ("pruebaerror.dat","rb");
	if (n ==nullptr){
		return nuevo;

	}


	while(fread(&nuevo, sizeof(Usuario), 1, n)){
		if(DNIMP == nuevo.getDNI())
		cout << endl;
	}
}


bool escribirUsuario()
{
	Usuario nuevo;
	FILE *n;
	n = fopen ("pruebaerror.dat","ab");
		if (n ==nullptr){
			return false;
		}
	cout << "Ingrese los valores del usuario" << endl;
	nuevo.CargarUsuario();

	bool escribio = fwrite(&nuevo, sizeof(Usuario), 1, n);
		fclose(n);

		return escribio;
}

bool verUsuarioRegistrado()
{
Usuario nuevo;
FILE *n;
n = fopen ("pruebaerror.dat","rb");
	if (n ==nullptr){
		return false;
	}
while(fread(&nuevo, sizeof(Usuario), 1, n)){
	nuevo.MostrarUsuario();
	cout << endl;
}
 fclose(n);
 //aaaaa
 return true;

};
