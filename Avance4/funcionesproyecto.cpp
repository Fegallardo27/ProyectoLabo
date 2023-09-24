#include <iostream>
#include <cstdio>
#include "Persona.h"
#include "usuario.h"
using namespace std;

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
