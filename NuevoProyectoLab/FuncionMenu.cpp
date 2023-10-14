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
		
		string opMen, opRegistro;
		cout << "USTED YA SE ENCUENTRA REGISTRADO?"<<"\n"<< "(indique si o no) ";
		cin>>opMen;
		cin.ignore();
		system("cls");
		
		if(opMen=="SI"||opMen=="si"||opMen=="Si"){
			cout<<" INGRESE SU DNI Y CONTRASENIA "<<endl;
			login();
			system("pause>>null");
			cout<<endl;
			MenuUsuario nuevo;
			nuevo.inicio();
		}

		if (opMen=="NO"||opMen=="No"||opMen=="no"){
			cout<<"DESEA REGISTRARSE?"<<"\n"<< "(indique si o no) "  ;
			cin>>opRegistro;
			cin.ignore();
			system("cls");

			if(opRegistro=="SI"||opRegistro=="si"||opRegistro=="Si"){
				escribirUsuario();		
				system("cls");
			} else
				cout<<"SALIR DEL PROGRAMA? (SI/NO) ";
				cin>>opMen;			
				if (opMen=="SI"||opMen=="si"||opMen=="Si"){
					return;
				}else 
				 system("cls");
				
		}
	
	} 	

}

