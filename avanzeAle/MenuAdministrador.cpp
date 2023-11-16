#include "MenuAdministrador.h"
#include <iostream>
#include <string>
#include "rlutil.h"
#include <windows.h>
#include <conio.h>
using namespace std;
#include "MovimientoAdministrador.h"


void MenuAdministrador::inicio()
{
    int op = 1;
    MovimientoAdministrador llamador;

    while (true) // Bucle para mantener el menú visible
    {
        // Limpiar la pantalla antes de mostrar el menú
        rlutil::cls();
        // Obtener el número de filas y columnas de la pantalla
        int rows = rlutil::trows();
        int cols = rlutil::tcols();

        // Calcular la posición para centrar
        int centerRow = rows / 2 - 2;
        int centerCol = cols / 2 - 10;

        rlutil::locate(centerCol - 2, centerRow -1);
        cout << "###### MENU ADMINISTRADOR ######" << endl;

        // Mostrar las opciones del menú
        rlutil::locate(centerCol - 2, centerRow );
        cout << (op == 1 ? "> " : "  ") << "Agregar un administrador" << endl;
        rlutil::locate(centerCol - 2, centerRow + 1);
        cout << (op == 2 ? "> " : "  ") << "Ver Administradores" << endl;
        rlutil::locate(centerCol - 2, centerRow + 2);
        cout << (op == 3 ? "> " : "  ") << "Eliminar administrador" << endl;
        rlutil::locate(centerCol - 2, centerRow + 3);
        cout << (op == 4 ? "> " : "  ") << "Modificar administrador" << endl;
        rlutil::locate(centerCol - 2, centerRow + 4);
        cout << (op == 5 ? "> " : "  ") << "Volver" << endl;

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
            if (op < 5)
            {
                op++;
            }
            break;
        case 13:  // Tecla Enter
            // Realizar alguna acción según la opción seleccionada
            switch (op)
            {
            case 1:
                // Acción para "Agregar un administrador"
                break;
            case 2:
                // Acción para "Ver Administradores"
                break;
            case 3:
                // Acción para "Eliminar administrador"
                break;
            case 4:
                // Limpiar la pantalla antes de mostrar el nuevo contenido
                    rlutil::cls();
                    llamador.modificarAdministrador();
                break;
            case 5:
                // Acción para "Volver"
                return;  // Salir del bucle y finalizar la función
            }
        }
    }
}
