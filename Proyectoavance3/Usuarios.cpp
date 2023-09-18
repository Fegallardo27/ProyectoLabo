#include <cstring>
#include <iostream>
#include "Usuarios.h"

void Usuarios::CargarUsuario(){
    char op;
std::cout<<"Ingrese su Nombre: ";
std::cin>> _Nombre;
std::cout<<"Ingrese su Apellido: ";
std::cin>>_Apellido;
std::cout<<"Ingrese su DNI: ";
std::cin>>_DNI;
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
    }

    system ("pause");
}
void Usuarios::MostrarUsuario(){
    std::cout<<"NOMBRE: "<<_Nombre<<std::endl;
    std::cout<<"APELLIDO: "<<_Apellido<<std::endl;
    std::cout<<"DNI: "<<_DNI<<std::endl;
    std::cout<<"EMAIL: "<<_Email<<std::endl;
    std::cout<<"TELEFONO: "<<_Telefono<<std::endl;
    std::cout<<"COBERTURA MEDICA: "<<_CoberturaMedica<<std::endl;
}
void Usuarios::setEmail (const char*email){
    strcpy(_Email,email);
}
void Usuarios::setCoberturaMedica (const char* coberturamedica){
   strcpy(_CoberturaMedica,coberturamedica);
}
void Usuarios::setTelefono (const char* telefono){
    strcpy(_Telefono,telefono);
}
const char* Usuarios::getEmail(){
    return _Email;
}
const char* Usuarios::getCoberturaMedica(){
    return _CoberturaMedica;
}
const char* Usuarios::getTelefono(){
    return _Telefono;
}