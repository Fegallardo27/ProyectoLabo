#include "MovimientoUsuario.h"
#include <iostream>
#include <string>

using namespace std;


void MovimientoUsuario::cargarUsuario(){

    int dia,mes,anio, dni;
    string nombre, apellido, telefono, email, contrasenia, coberturamedica;
    
    cout << "DNI: ";
    cin >> dni;
    bool n=_archivo.ValidacionDni(dni);
    if (n){ 
        cout << "Ya hay un usuario registrado con ese Dni" << endl;
	     system("pause");
	     system("cls");
	    //_archivo.InicioSesion();
        
    }
    cout << "Contrasenia: ";
    cin >> contrasenia;
    cout << "nombre: ";
    cin.ignore();
    getline(cin,nombre);
    cout << "apellido: ";
    getline(cin,apellido);
    cout << "fecha nacimiento: ";
    cin >> dia;
    cin >> mes;
    cin >> anio;
    cout<<"Email: ";
    cin >> email;    
    cout<<"Telefono: ";
    cin >> telefono;    
    cout<<"Cobertura Medica: ";
    cin >> coberturamedica;

    Usuarios reg;
    reg.setDni(dni);
    reg.setContrasenia(contrasenia);
    reg.setNombre(nombre);
    reg.setApellido(apellido);
    reg.setfechanac(Fecha(dia,mes,anio));
    reg.setEmail(email);
    reg.setTelefono(telefono);
    reg.setCoberturaMedica(coberturamedica);
    
    bool ok = _archivo.Guardar(reg);
    if (ok){
        cout<< "El usuario se registro correctamente";
        cout<<endl;
    }
    else{
        "No se pudo registrar el usuario";
        cout<<endl;
    }
    cout<<endl;
}


void MovimientoUsuario:: mostrarUsuario(Usuarios reg){
    cout<< "DNI: " << reg.getDni()<<endl;
    cout<< "NOMBRE: " << reg.getNombre()<<endl;    
    cout<< "APELLIDO: " << reg.getApellido()<<endl;
    cout<< "FECHA NACIMIENTO: " << reg.getFechanac().to_string()<<endl;
    cout<< "EMAIL: " << reg.getEmail() << endl;    
    cout<< "TELEFONO: " << reg.getTelefono() << endl;
    cout<< "COBERTURA MEDICA: " << reg.getCoberturaMedica() << endl;
    cout<< endl;
}

void MovimientoUsuario::InicioSesion(){
    int dni,posicion;
    std::string contra;
    cout<< "DNI: ";
    cin>> dni;
    cout << "CONTRASENIA: ";
    cin>> contra;
    cout<<endl;
    
    posicion = _archivo.buscar(dni);
    if (posicion >= 0){
        Usuarios nuevo = _archivo.leer(posicion);
        cout<< "BIENVENIDO "<<nuevo.getNombre()<<" "<< nuevo.getApellido()<<endl;
        MenuUsuario menu;
        menu.inicio();
    } else {
        cout << "NO EXISTE ESE USUARIO"<<endl;
    }
    
}