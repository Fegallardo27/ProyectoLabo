
#include <iostream>
#include <cstdio>
#include <cstring>
#include "Persona.h"
#include "Usuario.h"
#include "funcionesproyecto.h"
using namespace std;
/*void usuarioLogeado(const Usuario& usuario){
	cout <<"BIENVENIDO" << usuario.getNombre();
}
*/
Usuario login(){
	int DNIMP;
	string CONTRAMP;
	cout << "DNI: " << endl;
	cin >> DNIMP;
	cout<< "Ingrese su contraseña: " <<endl;
	cin >>CONTRAMP;
	Usuario nuevo;
	FILE *n;
	n = fopen ("PRUEBA.dat","rb");
	if (n ==nullptr){
		cout << "No se puede abrir el archivo" << endl;
		fclose(n);
		return nuevo;

	}


	while(fread(&nuevo, sizeof(Usuario), 1, n)){
		if(DNIMP == nuevo.getDNI() && CONTRAMP == nuevo.getContra()){
		cout<<"BIENVENIDO" <<endl<<nuevo.getNombre();
		fclose(n);
		}
	}

}


bool escribirUsuario()
{
	Usuario nuevo;
	FILE *n;
	n = fopen ("PRUEBA.dat","ab");
		if (n ==nullptr){
			return false;
		}
	cout << "Ingrese los valores del usuario" << endl;
	nuevo.CargarUsuario();

	bool escribio = fwrite(&nuevo, sizeof(Usuario), 1, n);
		//fclose(n);

		return escribio;
}

bool verUsuarioRegistrado()
{
Usuario nuevo;
FILE *n;
n = fopen ("PRUEBA.dat","rb");
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
