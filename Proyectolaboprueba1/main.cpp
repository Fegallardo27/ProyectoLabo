#include <iostream>
#include "funcionesproyecto.h"
#include "Usuario.h"
#include "Paciente.h"

using namespace std;

int main()
{

	Usuario fede;
	fede.cargar();
	fede.mostrar();
	cout<<endl<<endl;
	cout<<"Bienvenido al sistema, se le solicitaran unos datos para completar";
	cout<<"Su ficha como paciente";
	cout<<endl<<endl;
	Paciente pfede;
	pfede.cargar();
	pfede.mostrar();
	system("pause");
    return 0;
}
