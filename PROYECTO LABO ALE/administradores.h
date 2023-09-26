#ifndef ADMINISTRADORES_H_INCLUDED
#define ADMINISTRADORES_H_INCLUDED

#include "administradores.h"
#include <iostream>
#include <fstream>

// Implementación de la función para registrar un nuevo administrador
/*bool registrarAdministrador() {
    Administrador admin;
    cout << "Nombre: ";
    cin >> admin.nombre;
    cout << "Correo: ";
    cin >> admin.correo;
    cout << "Contrasena: ";
    cin >> admin.contrasena;

    // Abre el archivo en modo de escritura binaria (ab)
    FILE* archivo = fopen("administradores.dat", "ab");

    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return false;
    }

    // Escribe los datos del administrador en el archivo
    fwrite(&admin, sizeof(Administrador), 1, archivo);
    fclose(archivo);
    return true;
}*/

// Implementación de la función para iniciar sesión como administrador
bool iniciarSesion() {
    string correo, contrasena;
    cout << "Ingrese su mail: ";
    cin >> correo;
    cout << "Ingrese su contrasena: ";
    cin >> contrasena;

    // Abre el archivo en modo de lectura binaria (rb)
    FILE* archivo = fopen("administradores.dat", "rb");

    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return false;
    }

    Administrador admin;

    // Lee los datos de cada administrador en el archivo y verifica si coincide con las credenciales ingresadas
    while (fread(&admin, sizeof(Administrador), 1, archivo)) {
        if (admin.correo == correo && admin.contrasena == contrasena) {
            fclose(archivo);
            return true;
        }
    }

    fclose(archivo);
    return false;
}

#endif // ADMINISTRADORES_H_INCLUDED
