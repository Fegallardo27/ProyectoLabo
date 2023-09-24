#include <iostream>
#include <cstdio>
#include "funcionesproyecto.h"
#include "Persona.h"
#include "Usuario.h"
#include "Paciente.h"
#include "funcionesproyecto.h"

using namespace std;

int main()
{
	Usuario nuevo;
	FILE *n;

	/*n = fopen ("pruebaerror.dat","ab");
	if (n ==nullptr){
		cout << "Error no ejecuto" <<endl;
		return 1;
	}

	nuevo.CargarUsuario();

	fwrite(&nuevo, sizeof(Usuario), 1, n);
	cout<<endl;
	fclose(n);
	*/


	/*n = fopen ("pruebaerror.dat","rb");
	if (n ==nullptr){
		cout << "Error no ejecuto" <<endl;
		return 1;
	}

	fread (&nuevo, sizeof(Usuario), 1, n);
	nuevo.MostrarUsuario();
	cout<<endl;
	fread (&nuevo, sizeof(Usuario), 1, n);
	nuevo.MostrarUsuario();
	*/
	escribirUsuario();
	verUsuarioRegistrado();


    return 0;
}
