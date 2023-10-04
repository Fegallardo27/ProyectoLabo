#pragma once
#include <iostream>
#include <cstring>
#include "funcionesMenu.h"
#include "funcionesproyecto.h"
#include "Persona.h"
#include "Usuario.h"

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
		login();
	}
	else if(opMenuPrin == 'N'){
		escribirUsuario();
	}
	else{
		cout <<"opcion incorrecta" <<endl;
		system("pause");
		system("cls");
		menuPrincipal();
	}

}
