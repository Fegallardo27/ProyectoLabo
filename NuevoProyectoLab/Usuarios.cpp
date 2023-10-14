#include "Usuarios.h"
#include "Funciones.h"
#include <cstring>
#include <iostream>
#include <string>

bool Usuarios::validacionDni (int DNI){
	Usuarios usuario;
	FILE *n;
	bool existeU = false;
	n = fopen ("pruebaerror.dat","rb");
		if (n ==nullptr){
			return false;
		}
	while(fread(&usuario, sizeof(Usuarios), 1, n)){
		if(usuario.getDni() == DNI){
			existeU = true;
		}
		std::cout <<std::endl;
	}
	return existeU;
}





void Usuarios::CargarUsuario() {
    std::string op;

    std::cout<<"Ingrese su DNI: ";
    std::cin>>_DNI;
    if(validacionDni(_DNI)){
	std::cout<<"El Usuario es existe sera redirigido al login" <<std::endl;
	system("pause");
	system("cls");
	login();

}

    std::cout<<"Ingrese su contrasena: ";
    std::cin>>_Contrasenia;
    std::cout << "Ingrese su Nombre: ";
    std::cin >> _Nombre;
    std::cout << "Ingrese su Apellido: ";
    std::cin >> _Apellido;
    std::cout << "Fecha de Nacimiento: "<<std::endl;
    FechaNacimiento.CargarFecha();
    std::cout << "Ingrese un Email: ";
    std::cin >> _Email;
    std::cout << "Ingrese un Telefono: ";
    std::cin >> _Telefono;
    std::cout << "Tiene Cobertura Medica? S/N: ";
    std::cin >> op;
    if (op == "si" || op == "SI" || op == "Si") {
        std::cout << "Ingrese su Cobertura Medica: ";
        std::cin >> _CoberturaMedica;
    }
    else if (op == "no" || op == "NO" || op == "No" ) {
        std::cout << "Sin Cobertura Medica";
        strcpy(_CoberturaMedica, "sin cobertura");
    }
    std::cout << std::endl;

    Usuarios reg;
    reg.setDNI(_DNI);
    reg.setContrasenia(_Contrasenia);
    reg.setNombre(_Nombre);
    reg.setApellido(_Apellido);
    reg.setEmail(_Email);
    reg.setTelefono(_Telefono);
    reg.setCoberturaMedica(_CoberturaMedica);    

}

void Usuarios::MostrarUsuario(Usuarios reg) {
    std::cout << "NOMBRE: " << reg.getNombre() << std::endl;
    std::cout << "APELLIDO: " << reg.getApellido()<< std::endl;
    std::cout << "FECHA DE NACIMIENTO: ";
    FechaNacimiento.MostrarFecha();
    std::cout << std::endl;
    std::cout << "DNI: " << reg.getDni() << std::endl;
    std::cout << "EMAIL: " <<reg.getEmail() << std::endl;
    std::cout << "TELEFONO: " << reg.getTelefono() << std::endl;
    std::cout << "COBERTURA MEDICA: " << reg.getCoberturaMedica() << std::endl;
}
void Usuarios::setEmail(const char* email) {
    strcpy(_Email, email);
}
void Usuarios::setCoberturaMedica(const char* coberturamedica) {
    strcpy(_CoberturaMedica, coberturamedica);
}
void Usuarios::setTelefono(const char* telefono) {
    strcpy(_Telefono, telefono);
}

void Usuarios::setContrasenia(const char* contrasenia) {
    strcpy(_Contrasenia, contrasenia);
}

const char* Usuarios::getEmail() {
    return _Email;
}
const char* Usuarios::getCoberturaMedica() {
    return _CoberturaMedica;
}
const char* Usuarios::getTelefono() {
    return _Telefono;
}

const char* Usuarios::getContrasenia() {
    return _Contrasenia;
}