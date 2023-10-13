
#include <iostream>
#include <cstring>
#include "Usuario.h"
#include "funcionesproyecto.h"
using namespace std;

bool Usuario::validacionDni (int DNI){
	Usuario usuario;
	FILE *n;
	bool existeU = false;
	n = fopen ("pruebaerror.dat","rb");
		if (n ==nullptr){
			return false;
		}
	while(fread(&usuario, sizeof(Usuario), 1, n)){
		if(usuario.getDNI() == DNI){
			existeU = true;
		}
		cout << endl;
	}
	return existeU;
}
void Usuario::CargarUsuario(){
    char op;
std::cout<<"Ingrese su DNI: ";
std::cin>>_DNI;
if(validacionDni(_DNI)){
	cout<<"El Usuario es existe sera redirigido al login" << endl;
	system("pause");
	system("cls");
	login();

}
//AGREGAR VALIDADION SI UN USUARIO EXISTENTE O NO.{
//CONTRASEÑA
std::cout<<"Ingrese su contrasena: "<<endl;
std::cin>>_contraUsuario;
std::cout<<"Ingrese su Nombre: ";
std::cin>> _Nombre;
std::cout<<"Ingrese su Apellido: ";
std::cin>>_Apellido;
std::cout<<"Ingrese un Email: ";
std::cin>>_Email;
std::cout<<"Ingrese un Telefono: ";
std::cin>>_Telefono;
std::cout<<"Tiene Cobertura Medica? S/N: ";
std::cin>>op;
    if (op =='s'|| op =='S'){
        std::cout<<"Ingrese su Cobertura Medica: ";
        std::cin>>_CoberturaMedica;
    } else if (op =='n'|| op =='N'){
        std::cout<<"Sin Cobertura Medica";
        strcpy(_CoberturaMedica,"sin cobertura");
        cout<<endl;
    }

    system ("pause");
}

void Usuario::MostrarUsuario(){
    std::cout<<"NOMBRE: "<<_Nombre<<std::endl;
    std::cout<<"APELLIDO: "<<_Apellido<<std::endl;
    std::cout<<"DNI: "<<_DNI<<std::endl;
    std::cout<<"EMAIL: "<<_Email<<std::endl;
    std::cout<<"TELEFONO: "<<_Telefono<<std::endl;
    std::cout<<"COBERTURA MEDICA: "<<_CoberturaMedica<<std::endl;
}
void Usuario::setcontraUsuario (const char *contraUsuario){
	strcpy (_contraUsuario,contraUsuario);
}
void Usuario::setEmail (const char*email){
    strcpy(_Email,email);
}
void Usuario::setCoberturaMedica (const char* coberturamedica){
   strcpy(_CoberturaMedica,coberturamedica);
}
void Usuario::setTelefono (const char* telefono){
    strcpy(_Telefono,telefono);
}
const char* Usuario::getContra(){
	return _contraUsuario;
}
const char* Usuario::getEmail(){
    return _Email;
}
const char* Usuario::getCoberturaMedica(){
    return _CoberturaMedica;
}
const char* Usuario::getTelefono(){
    return _Telefono;
}

