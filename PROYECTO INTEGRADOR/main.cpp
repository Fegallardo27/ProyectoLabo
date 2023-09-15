#include <iostream>
using namespace std;
#include "Persona.h"
#include "Usuarios.h"
int main(){
    
    //Persona yo;
    Usuarios nuevo;
    //yo.setApellido("rojas");
    //cout<< yo.getApellido();
    nuevo.CargarUsuario();
    cout<<endl;
    nuevo.MostrarUsuario();
    return 0;
}