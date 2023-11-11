#include "MenuPrincipal.h"
#include "Archivos.h"
#include "Usuarios.h"
#include "MenuUsuario.h"
#include <iostream>
#include <string>
#include "rlutil.h"
#include <windows.h>
#include <conio.h>

using namespace std;

void MenuPrincipal::Ejecutar()
{

    while(true)
    {


        // Cambiar el color del texto a verde
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);

        // Obtener el número de filas y columnas de la pantalla
        int rows = rlutil::trows();
        int cols = rlutil::tcols();

        // Calcular la posición para centrar
        int centerRow = rows / 2;
        int centerCol = cols / 2;

        // Centrar el mensaje de bienvenida
        rlutil::cls();  // Limpiar la pantalla

        // Mensaje de bienvenida
        string welcomeMessage = "BIENVENIDOS AL SISTEMA DE TURNOS MEDICOS";
        int messageLength = welcomeMessage.length();

        // Imprimir el mensaje de bienvenida gradualmente
        for (int i = 0; i < messageLength; ++i)
        {
            rlutil::locate(centerCol - messageLength / 2 + i, centerRow);
            cout << welcomeMessage[i];
            rlutil::msleep(50);  // Pausa corta entre cada carácter
        }

        rlutil::msleep(3000);  // Esperar un poco antes de limpiar la pantalla

        rlutil::cls();  // Limpiar la pantalla

        // Restaurar el color predeterminado
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

// Ajustar la posición para centrar el menú
        centerRow = rows / 2 - 5;  // Ajuste para mover el contenido hacia arriba
        centerCol = cols / 2 - 10;

        // Centrar el menú
        int op = 1;  // Opción inicial
        while (true)
        {
            // Cambiar el color del texto a verde
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            rlutil::cls();  // Limpiar la pantalla
            rlutil::locate(centerCol, centerRow - 1);
            cout << "**********************" << endl;
            rlutil::locate(centerCol, centerRow);
            cout << " COMO DESEA INGRESAR? " << endl;
            rlutil::locate(centerCol, centerRow + 1);
            cout << "**********************" << endl;
            // Restaurar el color predeterminado
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);


            // Mostrar las opciones
            rlutil::locate(centerCol, centerRow + 2);
            cout << (op == 1 ? "> " : "  ") << "Ingresar Como Administrador" << endl;
            rlutil::locate(centerCol, centerRow + 3);
            cout << (op == 2 ? "> " : "  ") << "Ingresar Como Cliente" << endl;
            rlutil::locate(centerCol, centerRow + 4);
            cout << (op == 3 ? "> " : "  ") << "Salir" << endl;

            // Leer la tecla presionada
            char key = _getch();

            // Actualizar la opción según la tecla presionada
            switch (key)
            {
            case 'W':
            case 'w':
                if (op > 1)
                {
                    op--;
                }
                break;
            case 'S':
            case 's':
                if (op < 3)
                {
                    op++;
                }
                break;
            case 13:  // Tecla Enter
                // Realizar alguna acción según la opción seleccionada
                switch (op)
                {
                case 1:
                    cout << "Ingresando como Administrador..." << endl;
                    // Agrega aquí la lógica para el modo administrador
                    break;
                case 2:
                    rlutil::cls();
                    rlutil::locate(centerCol, centerRow);
                    cout << "Ingresando como Cliente..." << endl;
                    rlutil::msleep(3000);  // Pausa de 3 segundos
                    rlutil::cls();
                    while (true)
                    {

                        // Obtener el número de filas y columnas de la pantalla
                        int rows = rlutil::trows();
                        int cols = rlutil::tcols();

                        // Calcular la posición para centrar
                        int centerRow = rows / 2 - 2;
                        int centerCol = cols / 2 - 10;

                        // Cambiar el color del texto a verde brillante
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);

                        // Mostrar el encabezado del menú
                        rlutil::locate(centerCol, centerRow - 1);
                        cout << "***************************" << endl;
                        rlutil::locate(centerCol, centerRow);
                        cout << " SISTEMA DE TURNOS MEDICOS " << endl;
                        rlutil::locate(centerCol, centerRow + 1);
                        cout << "***************************" << endl;

                        // Restaurar el color predeterminado
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

                        // Mostrar las opciones del menú
                        rlutil::locate(centerCol, centerRow + 2);
                        cout << (op == 1 ? "> " : "  ") << "Iniciar Sesion" << endl;
                        rlutil::locate(centerCol, centerRow + 3);
                        cout << (op == 2 ? "> " : "  ") << "Registrarse" << endl;

                        // Leer la tecla presionada
                        char key = _getch();

                        // Procesar la entrada del usuario
                        switch (key)
                        {
                        case 'W':
                        case 'w':
                            if (op > 1)
                            {
                                op--;
                            }
                            break;
                        case 'S':
                        case 's':
                            if (op < 2)
                            {
                                op++;
                            }
                            break;
                        case 13:  // Tecla Enter
                            // Realizar alguna acción según la opción seleccionada
                            switch (op)
                            {
                            case 1:
                                // Limpiar la pantalla antes de mostrar el nuevo contenido
                                system("cls");
                                // Mostrar el nuevo contenido
                                _usuario.InicioSesion();
                                cout << endl;
                                break;
                            case 2:
                                // Limpiar la pantalla antes de mostrar el nuevo contenido
                                system("cls");
                                // Mostrar el nuevo contenido
                                _usuario.cargarUsuario();
                                break;
                            }



                            /*string opMen, opRegistro;
                            cout << "USTED YA SE ENCUENTRA REGISTRADO?"<<"\n"<< "(indique si o no) ";
                            cin>>opMen;
                            cin.ignore();
                            system("cls");

                            if(opMen=="SI"||opMen=="si"||opMen=="Si"){
                            	cout<<" INGRESE SU DNI Y CONTRASENIA "<<endl;
                            	_usuario.inicioSesion();
                            	system("pause>>null");

                            	cout<<endl;
                            }

                            if (opMen=="NO"||opMen=="No"||opMen=="no"){
                            	cout<<"DESEA REGISTRARSE?"<<"\n"<< "(indique si o no) "  ;
                            	cin>>opRegistro;
                            	cin.ignore();
                            	system("cls");

                            	if(opRegistro=="SI"||opRegistro=="si"||opRegistro=="Si"){
                            		_usuario.cargarUsuario();
                            		system("cls");
                            	} else
                            		cout<<"SALIR DEL PROGRAMA? (SI/NO) ";
                            		cin>>opMen;
                            		if (opMen=="SI"||opMen=="si"||opMen=="Si"){
                            			return;
                            		}else
                            		 system("cls");

                            }*/
                        }
                    }
                }
            }
        }
    }
}
