#include <iostream>
#include "funcionesproyecto.h"
#include "Persona.h"
#include "Usuario.h"
#include "Paciente.h"

using namespace std;

int main()
{

	//p.setNombre("Fede");
	//cout<< "Nombre: "<<p.getNombre() << endl;
	/*Usuario fede;
	fede.cargar();
	fede.mostrar();
	cout<<endl<<endl;
	cout<<"Bienvenido al sistema, se le solicitaran unos datos para completar";
	cout<<"Su ficha como paciente";
	cout<<endl<<endl;
	Paciente pfede;
	pfede.cargar();
	pfede.mostrar();
	*/
	/*
	Persona p("Fede","Gallardo",38393448);
	Usuario u;
	u.setNombre("Pedro");
	u.setApellido("Caceres");
	u.setDNI(38393448);
	*/
	Usuario u;
	u.cargarUsuario();
	system("cls");
	u.mostrarUsuario();

	system("pause");
    return 0;
}
