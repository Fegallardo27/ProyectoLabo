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
        if (nuevo.getContrasenia()==contra){
        cout<< "BIENVENIDO "<<nuevo.getNombre()<<" "<< nuevo.getApellido()<<endl;
        MenuUsuario menu;
        menu.inicio();
        } else {
            cout << "LA CONTRASENIA ES INCORRECTA "<<endl; 
        }
        system("cls");
    } else {
        cout << "NO EXISTE ESE USUARIO "<<endl;
    }
}

void MovimientoUsuario::Modificar(){
    int dni,posicion;
    std::string contra;
    cout<< "DNI: ";
    cin>> dni;
    cout << "CONTRASENIA: ";
    cin>> contra;
    cout<<endl;
    Usuarios nuevo;

    posicion = _archivo.buscar(dni);
    if (posicion >=0){
        nuevo=_archivo.leer(posicion);
        MovimientoUsuario aux;
        aux.mostrarUsuario(nuevo);
    }
    char opc;
    cout<<"Desea modificar algo: (S/N)"<<endl;
    cin>>opc;
    cin.ignore();
    opc = std::toupper(opc);
    system("cls");
    if(opc == 'S'){
        while(true){
            cout<<"MENU MODIFICACION DE USUARIO "<<endl;
            cout<<"********************** "<<endl;
            cout<<"1. MODIFICAR NOMBRE "<<endl;
            cout<<"2. MODIFICAR APELLIDO"<<endl;
            cout<<"3. MODIFICAR CONTRASENIA "<<endl;
            cout<<"4. MODIFICIAR EMAIL "<<endl;
            cout<<"5. MODIFICIAR TELEFONO"<<endl;
            cout<<"6. MODIFICIAR COBERTURA MEDICA"<<endl;
            cout<<"0. VOLVER"<<endl;
            cout<<"********************** "<<endl;
            int opcion;
            cin >> opcion;
            system ("pause");
            system("cls");
            switch(opcion){
                case 1:
                    {
                    string nuevoNombre;
                    cout<<"NUEVO NOMBRE: ";
                    cin>> nuevoNombre; 
                    nuevo.setNombre(nuevoNombre);
                    _archivo.Guardar(nuevo,posicion);
                    }
                break;
                case 2:
                    {
                    string nuevoApellido;
                    cout<<"NUEVO APELLIDO: ";
                    cin>> nuevoApellido; 
                    nuevo.setApellido(nuevoApellido);   
                    string nuevoEmail;
                    _archivo.Guardar(nuevo,posicion);    
                    }
                break;
                case 3:
                    {
                    string nuevoContrasenia; 
                    cout<<"NUEVA CONTRASENIA: ";
                    cin>> nuevoContrasenia; 
                    nuevo.setContrasenia(nuevoContrasenia);   
                    _archivo.Guardar(nuevo,posicion);    

                    }
                    
                break;
                case 4:
                    {
                    string nuevoEmail;
                    cout<<"NUEVO EMAIL: ";
                    cin>> nuevoEmail; 
                    nuevo.setEmail(nuevoEmail);
                    _archivo.Guardar(nuevo,posicion);    
                    }
                break;
                case 5:
                    {
                    string nuevoTelefono;
                    cout<<"NUEVO TELEFONO: ";
                    cin>> nuevoTelefono; 
                    nuevo.setTelefono(nuevoTelefono);
                    _archivo.Guardar(nuevo,posicion);    
                    }

                break;
                case 6:
                    {
                    string nuevoCobertura;
                    cout<<"NUEVA COBERTURA MEDICA: ";
                    cin>> nuevoCobertura; 
                    nuevo.setCoberturaMedica(nuevoCobertura);
                    _archivo.Guardar(nuevo,posicion);    
                    }

                break;
                case 0:
                    return;
                break;
            }
	    }
    }else{
        return;
    }
}