#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

#include "prototipos.h"
#include "clsFecha.h"
#include "personaAlumno.h"
#include "clsArchivoAlumnos.h"
#include "fGlobales.h"
#include "reportes.h"
#include "administradores.h"

int main()
{
    cout << "*****************************************" << endl;
    cout << "BIENVENIDO AL SISTEMA DE TURNOS MEDICOS" << endl;
    cout << "*****************************************" << endl;
    system("pause");
    system("cls");

    string opcusu;
    bool registrado = false;
    bool administradorAutenticado = false;


    cout << "USTED YA SE ENCUENTRA REGISTRADO? (indique SI o NO)" << endl;
    cin >> opcusu;
    cin.ignore();

    if (opcusu == "si" || opcusu == "SI" || opcusu == "Si")
    {
        if(iniciarSesion())
        {
            while (true)
            {
                cout << "MENU" << endl;
                cout << "1. Registrar un Administrador" << endl;
                cout << "3. Realizar Otra Accion" << endl;
                cout << "4. Salir" << endl;
                cout << "Ingrese su opcion: ";
                cin >> opcion;

                switch (opcion)
                {
                case 1:
                    if (registrarAdministrador())
                    {
                        cout << "Administrador registrado con éxito." << endl;
                    }
                    else
                    {
                        cout << "Error al registrar el administrador." << endl;
                    }
                    break;
                case 2:
                    administradorAutenticado = iniciarSesion();
                    if (administradorAutenticado)
                    {
                        cout << "Inicio de sesion exitoso como administrador." << endl;
                    }
                    else
                    {
                        cout << "Credenciales incorrectas o administrador no registrado." << endl;
                    }
                    break;
                case 3:
                    if (administradorAutenticado)
                    {
                        // Lógica para acciones adicionales del administrador
                        cout << "Acciones adicionales del administrador." << endl;
                    }
                    else
                    {
                        cout << "Debe iniciar sesión como administrador primero." << endl;
                    }
                    break;
                case 4:
                    return 0;
                default:
                    cout << "Opcion no valida." << endl;
                    break;
                }
            }

            return 0;
        }
        else
        {
            registrado = true;
        }

    }
    else if (opcusu == "no" || opcusu == "NO" || opcusu == "No")
    {
        system("cls");

        if (grabarRegistro())
        {
            cout << "REGISTRO AGREGADO" << endl;
            system("pause");
            system("cls");
            registrado = true;
        }
        else
        {
            cout << "NO SE PUDO AGREGAR EL REGISTRO" << endl;
        }
    }

    while (registrado)
    {
        int opc;
        cout << "MENU TURNOS MEDICOS " << endl;
        cout << "********************** " << endl;
        cout << "1. ASIGNAR TURNO CON UN ESPECIALISTA "<< endl;
        cout << "3. CANCELAR O MODIFICAR TURNO" << endl;
        cout << "4. MODIFICAR MIS DATOS " << endl;
        cout << "5. INGRESAR COMO PROFESIONAL" << endl;
        cout << "0. SALIR DEL PROGRAMA " << endl;
        cout << "********************** " << endl;
        cout << "OPCION: ";
        cin >> opc;
        system("cls");

        switch (opc)
        {
        case 1:
            if (!bajaLogicaRegistro())
                cout << "ERROR AL DAR DE BAJA EL REGISTRO" << endl;
            else
            {
                cout << "REGISTRO DADO DE BAJA" << endl;
            }
            break;
        case 3:
            if (!modificarTitulo())
                cout << "ERROR AL MODIFICAR TITULO EN EL REGISTRO" << endl;
            else
            {
                cout << "REGISTRO MODIFICADO" << endl;
            }
            break;
        case 4:
            if (!mostrarRegistros())
                cout << "ERROR AL LEER EL ARCHIVO DE ALUMNOS" << endl;
            cin.ignore();
            system("pause");
            break;
        case 5:
            if (!bajaFisica())
                cout << "ERROR AL LEER EL ARCHIVO DE ALUMNOS" << endl;
            break;
        case 0:
            return 0;
        }

        /*
        cout << "MENU TURNOS MEDICOS " << endl;
        cout << "********************** " << endl;
        cout << "1. BAJA LOGICA " << endl;
        cout << "3. MODIFICAR TITULO SECUNDARIO " << endl;
        cout << "4. MOSTRAR REGISTROS " << endl;
        cout << "5. BAJA FISICA " << endl;
        cout << "0. SALIR DEL PROGRAMA " << endl;
        cout << "********************** " << endl;
        cout << "OPCION: ";
        cin >> opc;
        system("cls");

        switch (opc)
        {
        case 1:
            if (!bajaLogicaRegistro())
                cout << "ERROR AL DAR DE BAJA EL REGISTRO" << endl;
            else
            {
                cout << "REGISTRO DADO DE BAJA" << endl;
            }
            break;
        case 3:
            if (!modificarTitulo())
                cout << "ERROR AL MODIFICAR TITULO EN EL REGISTRO" << endl;
            else
            {
                cout << "REGISTRO MODIFICADO" << endl;
            }
            break;
        case 4:
            if (!mostrarRegistros())
                cout << "ERROR AL LEER EL ARCHIVO DE ALUMNOS" << endl;
            cin.ignore();
            system("pause");
            break;
        case 5:
            if (!bajaFisica())
                cout << "ERROR AL LEER EL ARCHIVO DE ALUMNOS" << endl;
            break;
        case 0:
            return 0;
        }*/
    }

    system("pause");
    return 0;
}
