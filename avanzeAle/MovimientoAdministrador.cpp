#include <iostream>
#include <string>
#include "rlutil.h"
using namespace std;


#include "MovimientoAdministrador.h"

void MovimientoAdministrador::cargarAdministrador()
{

    int dni;
    string nombre, apellido, contrasenia;

    cout << "DNI: ";
    cin >> dni;
    bool n=_archivosAdministradores.ValidacionDni(dni);
    if (n)
    {
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

    Administrador reg;
    reg.setDni(dni);
    reg.setContrasenia(contrasenia);
    reg.setNombre(nombre);
    reg.setApellido(apellido);

    bool ok = _archivosAdministradores.Guardar(reg);
    if (ok)
    {
        cout<< "El administrador se registro correctamente";
        cout<<endl;
    }
    else
    {
        cout << "No se pudo registrar el administrador";

    }
    cout<<endl;
}

void centrarTextoAdm(string texto)
{
    // Obtener el número de filas y columnas de la pantalla
    int rows = rlutil::trows();
    int cols = rlutil::tcols();

    // Calcular la posición para centrar
    int centerRow = rows / 2;
    int centerCol = (cols - texto.length()) / 2;


    // Centrar y mostrar el texto
    rlutil::locate(centerCol, centerRow);
    cout << texto << endl;
}
void MovimientoAdministrador:: mostrarAdministrador(Administrador reg)
{
    system("cls");  // Limpiar la pantalla
    centrarTextoAdm("Detalles del Administrador");

    centrarTextoAdm("DNI: " + to_string(reg.getDni()));
    centrarTextoAdm("NOMBRE: " + reg.getNombre());
    centrarTextoAdm("APELLIDO: " + reg.getApellido());
}
void MovimientoAdministrador::InicioSesion()
{
     // Obtener el número de filas y columnas de la pantalla
        int rows = rlutil::trows();
        int cols = rlutil::tcols();
     // Calcular la posición para centrar
        int centerRow = rows / 2;
        int centerCol = cols / 2;


        centerRow = rows / 2 - 5;  // Ajuste para mover el contenido hacia arriba
        centerCol = cols / 2 - 10;

    system("cls");  // Limpiar la pantalla

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    rlutil::cls();  // Limpiar la pantalla
    rlutil::locate(centerCol-1, centerRow );
    cout << "inicio de sesion de administrador" << endl;
    // Restaurar el color predeterminado
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    int dni,posicion;
    std::string contra;
    rlutil::locate(centerCol -5, centerRow +3);
    cout << "DNI: ";
    rlutil::locate(centerCol , centerRow +3);
    cin >>dni;
    rlutil::locate(centerCol -7, centerRow +5);
    cout << "CONTRASENIA: ";
    rlutil::locate(centerCol +5, centerRow +5);
    cin >> contra;
    cout<<endl;

    posicion = _archivosAdministradores.buscar(dni);
    if (posicion >= 0 )
    {
        system("cls");
        Administrador nuevo = _archivosAdministradores.leer(posicion);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
         rlutil::locate(centerCol-1, centerRow+2);
        cout<< "BIENVENIDO "<<nuevo.getNombre()<<" "<< nuevo.getApellido()<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
        rlutil::msleep(3000);  // Pausa de 3 segundos
        rlutil::cls();
        MenuAdministrador menu;
        menu.inicio();
    }
    else
    {
        cout << "NO EXISTE ESE ADMINISTRADOR"<<endl;
    }

}
void MovimientoAdministrador::modificarAdministrador()
{
    int dni,posicion;
    std::string contra;
    cout<< "DNI: ";
    cin>> dni;
    cout << "CONTRASENIA: ";
    cin>> contra;
    cout<<endl;

    posicion = _archivosAdministradores.buscar(dni);

    if (posicion >= 0)
    {
        Administrador admP = _archivosAdministradores.leer(posicion);
        cout<<admP.getNombre()<<" "<< admP.getApellido()<<endl;
    }
    else
    {
        cout << "NO EXISTE ESE ADMINISTRADOR"<<endl;
    }
    char op;
    cout<<"Desea modificar algo: (S/N)"<<endl;
    cin>>op;
    cin.ignore();
    op = std::toupper(op);
    if(op == 'S')
    {
        int opMM;
        while(true)
        {
            cout<<"MENU MODIFICACION DE ADMINISTRADOR "<<endl;
            cout<<"********************** "<<endl;
            cout<<"1. MODIFICAR NOMBRE "<<endl;
            cout<<"2. MODIFICAR APELLIDO"<<endl;
            cout<<"0. VOLVER"<<endl;
            cout<<"********************** "<<endl;
            int opcion;
            cin >> opcion;
            switch(opcion)
            {
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
