#include <iostream>
#include <cstring>
#include <string>
using namespace std;

#include "FuncionMenu.h"
#include "Persona.h"
#include "Usuarios.h"
#include "Funciones.h"
#include "MenuUsuario.h"

void Menu::Ejecutar() {

	while(true){

		cout << "**************************************** " << endl;
		cout << "BIENVENIDOS AL SISTEMA DE TURNOS MEDICOS " << endl;
		cout << "**************************************** " << endl;
		system("pause");
		system("cls");

		char opMen;
		cout << "USTED YA SE ENCUENTRA REGISTRADO?"<<"\n"<< "(indique S o N) ";
		cin>>opMen;
		cin.ignore();
			opMen = std::toupper(opMen);

		if(opMen == 'S'){
			cout << "BIENVENIDO" <<endl;
			login();
			MenuUsuario nuevo;
			nuevo.inicio();
		}

		if (opMen == 'N'){
			//cout<<"DESEA REGISTRARSE?"<<"\n"<< "(indique si o no) "  ;
			escribirUsuario();
			system("pause");
			system("cls");

			verUsuarioRegistrado;
			} else {
				cout<<"Opcion Incorrecta "<<endl;
				return;

		}
		char salir;

		cout <<"Desea salir del programa? (S/N)";
		cin>>salir;
		cin.ignore();
		salir = std::toupper(salir);
		if(salir == 'S'){
			break;
		}

	}
}

