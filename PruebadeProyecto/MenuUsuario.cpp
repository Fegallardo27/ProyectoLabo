#include "MenuUsuario.h"
#include <iostream>

using namespace std; 

void MenuUsuario::inicio(){
cout<<"###### MENU USUARIO ######"<<endl;
cout<<"1- Seleccionar Nuevo Turno"<<endl;
cout<<"2- Ver Turnos "<<endl;
cout<<"3- Cancelar Turnos"<<endl;
cout<<"4- Modificar Usuario"<<endl;
cout<<"0- Volver"<<endl;
int op;
cin>> op;
system("cls");

switch (op){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
        {
        MovimientoUsuario _llamador;    
        _llamador.Modificar();
        }
    break;
case 0:
    break;
}


}