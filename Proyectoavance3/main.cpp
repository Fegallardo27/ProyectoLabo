#include <iostream>
using namespace std;
#include <cstdio>
#include "Persona.h"
#include "Usuarios.h"
int main(){

    //Persona yo;
    Usuarios nuevo;
    int r;

    nuevo.setEmail("labomba");
    /*FILE *p = fopen("Usuarios.dat", "ab");
    if (p ==nullptr){
		return 1;
    }

    fwrite(&nuevo,sizeof(Usuarios),1,p);
    fclose(p);
    */
    FILE *p = fopen("Usuarios.dat","rb");
    if (p ==nullptr){
		return 1;
    }
    fread(&nuevo,sizeof(Usuarios),1,p);
    cout<< "Email: "<<nuevo.getEmail()<<endl;
    cout<<endl;

    fread(&nuevo,sizeof(Usuarios),1,p);
    cout<< "Email: "<<nuevo.getEmail()<<endl;

    fread(&nuevo,sizeof(Usuarios),1,p);
    cout<< "Email: "<<nuevo.getEmail()<<endl;
    //Usuarios nuevo1;
    //yo.setApellido("rojas");
    //cout<< yo.getApellido();
    /*nuevo.setEmail("Gallardo");
    nuevo.setCoberturaMedica("Fede");
    nuevo.setTelefono("1167512670");*/

    /*nuevo1.setEmail("Gaston");
    nuevo1.setCoberturaMedica("Rebord");
    nuevo1.setTelefono("1167512678");
    */
	/*
    FILE *p = fopen("Usuarios.dat", "ab");
    if (p ==nullptr){
		return 1;
    }

    fwrite(&nuevo,sizeof(Usuarios),1,p);
    fclose(p);
    */

    /*nuevo.CargarUsuario();
    cout<<endl;
    nuevo.MostrarUsuario();
    */
    return 0;
}
