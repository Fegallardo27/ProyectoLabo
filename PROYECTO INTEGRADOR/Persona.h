#pragma once

class Persona{
    public:
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setDNI (int dni);
    const char* getNombre();      
    const char* getApellido();             
    int getDni();         

 protected:
   char _Nombre[30], _Apellido[30];
   int _DNI;
};