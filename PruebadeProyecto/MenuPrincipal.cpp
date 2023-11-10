#include "MenuPrincipal.h"
#include "Archivos.h"
#include "Usuarios.h"
#include "MenuUsuario.h"
#include <iostream>
#include <string>

using namespace std;

void MenuPrincipal::Ejecutar(){

    while(true){
		
		cout << "**************************************** " << endl;
		cout << "BIENVENIDOS AL SISTEMA DE TURNOS MEDICOS " << endl;
		cout << "**************************************** " << endl;
		system("pause");
		system("cls");
		
		int op;
		cout<< "1- Ingresar Como Administrador "<< endl;
		cout<< "2- Ingresar Como Cliente "<< endl;		
		cout<< "0- Salir "<< endl;
		cin>> op;
		system("cls");
		
		switch (op)
		{
		case 1:

			break;
		
		case 2:
				cout << "SISTEMA DE TURNOS MEDICOS"<<endl;
				cout<<"1- Iniciar Sesion"<< endl;	
				cout<<"2- Registrarse"<< endl;	
				cin>> op;
				system ("cls");
				switch (op)
				{
				case 1:
					_usuario.InicioSesion();
					cout<<endl;

					break;
				case 2:
					_usuario.cargarUsuario();
					break;

				}

			break;
		
		case 0:
				return;
			break;
		}




		/*string opMen, opRegistro;
		cout << "USTED YA SE ENCUENTRA REGISTRADO?"<<"\n"<< "(indique si o no) ";
		cin>>opMen;
		cin.ignore();
		system("cls");
		
		if(opMen=="SI"||opMen=="si"||opMen=="Si"){
			cout<<" INGRESE SU DNI Y CONTRASENIA "<<endl;
			_usuario.inicioSesion();
			system("pause>>null");

			cout<<endl;
		}

		if (opMen=="NO"||opMen=="No"||opMen=="no"){
			cout<<"DESEA REGISTRARSE?"<<"\n"<< "(indique si o no) "  ;
			cin>>opRegistro;
			cin.ignore();
			system("cls");

			if(opRegistro=="SI"||opRegistro=="si"||opRegistro=="Si"){	
				_usuario.cargarUsuario();
				system("cls");
			} else
				cout<<"SALIR DEL PROGRAMA? (SI/NO) ";
				cin>>opMen;			
				if (opMen=="SI"||opMen=="si"||opMen=="Si"){
					return;
				}else 
				 system("cls");
				
		}*/ 
	
	}	
}