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
/*bool MovimientoUsuario::bajaLogicaUsuario(){ Class addminitracion
	int dni,posicion;

	cout<<"INGRESE EL DNI A DAR DE BAJA: ";
	cin>>dni;
	posicion=_archivo.buscar(dni);
	if(posicion==dni){
	/*bool bajaLogicaRegistro(){
    ///INGRESAR EL VALOR QUE IDENTIFICA EL REGISTRO A BORRAR
    int legajo, pos;
    cout<<"INGRESAR EL LEGAJO DEL ALUMNO A DAR DE BAJA ";
    cin>>legajo;
    ///BUSCAR SI EL LEGAJO EXISTE EN EL ARCHIVO.
    ///LA FUNCION DEVUELVE LA POSICI�N DEL REGISTRO EN EL ARCHIVO. SI NO ENCUENTRA EL LEGAJO DEVUELVE -1
    pos=buscarLegajo(legajo);
    if(pos==-1){
        cout<<"NO EXISTE ESE LEGAJO"<<endl;
        return false;
    }
    ///LEER EL REGISTRO DEL ARCHIVO Y PONERLO EN UNA VARIABLE DE MEMORIA
    Alumno reg;
    reg=leerRegistro(pos);
    ///CAMBIAR EL CAMPO estado
    cout<<"REGISTRO A BORRAR "<<endl;
    reg.Mostrar();
    cout<<endl;
    char opc;
    cout<<"DESEA BORRARLO? (S/N) ";
    cin>>opc;
    if(opc=='s'|| opc=='S'){
        reg.setEstado(false);
        ///SOBREESCRIBIR EL REGISTRO EN EL ARCHIVO EN LA MISMA POSICION QUE TEN�A
        bool quePaso=sobreEscribirRegistro(reg, pos);
        return quePaso;
    }
    return false;
}
*/
void MovimientoUsuario::modificarUsuario(){
	int dni,posicion;
    std::string contra;
    cout<< "DNI: ";
    cin>> dni;
    cout << "CONTRASENIA: ";
    cin>> contra;
    cout<<endl;

    posicion = _archivo.buscar(dni);

    if (posicion >= 0){
        Usuarios usuP = _archivo.leer(posicion);
        cout<<usuP.getNombre()<<" "<< usuP.getApellido()<<endl;
        cout<<usuP.getFechanac().to_string()<<" "<<usuP.getEmail()<<endl;
        cout<<usuP.getTelefono()<<" "<<usuP.getCoberturaMedica()<<endl;
    }
    else {
        cout << "NO EXISTE ESE USUARIO"<<endl;
    }
    char op;
    cout<<"Desea modificar algo: (S/N)"<<endl;
    cin>>op;
    cin.ignore();
    op = std::toupper(op);
    if(op == 'S'){
	int opMM;
	while(true){
	cout<<"MENU MODIFICACION DE USUARIO "<<endl;
	cout<<"********************** "<<endl;
	cout<<"1. MODIFICAR NOMBRE "<<endl;
	cout<<"2. MODIFICAR APELLIDO"<<endl;
	cout<<"3. MODIFICAR FECHADENACIMIENTO "<<endl;
	cout<<"4. MODIFICIAR EMAIL "<<endl;
	cout<<"5. MODIFICIAR TELEFONO"<<endl;
	cout<<"6. MODIFICIAR COBERTURA MEDICA"<<endl;
	cout<<"0. VOLVER"<<endl;
	cout<<"********************** "<<endl;
	int opcion;
	cin >> opcion;
    switch(opcion){
      case 1:
      break;
      case 2:
      break;
      case 3:

      break;
      case 4:

      break;
      case 5:

      break;
      case 6:

      break;
      case 0:
        return;
      break;
    }
	}
    }

}
