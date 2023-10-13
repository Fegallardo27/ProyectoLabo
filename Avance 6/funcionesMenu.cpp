#pragma once
#include <iostream>
#include <cstring>
#include "Persona.h"
#include "Usuario.h"
#include "funcionesMenu.h"
#include "funcionesproyecto.h"

void menuPrincipal(){
	cout << "*****************************************" << endl;
    cout << "BIENVENIDO AL SISTEMA DE TURNOS MEDICOS" << endl;
    cout << "*****************************************" << endl;
    system("pause");
    system("cls");

	char opMenuPrin;

    cout << "USTED YA SE ENCUENTRA REGISTRADO? (indique S o N)" << endl;
    cin >>opMenuPrin;
    cin.ignore();
	opMenuPrin = std::toupper(opMenuPrin);

	if(opMenuPrin == 'S'){
		cout<<"bienvenido" <<endl;
		login();

	}
	else if(opMenuPrin == 'N'){
			escribirUsuario();
			system("pause");
			system("cls");
			verUsuarioRegistrado;


        }
	else{
		cout <<"opcion incorrecta" <<endl;

	}

	}
