#include "Archivos.h"
#include <string>
#include <cstdio>
#include <iostream>

using namespace std; 


Archivos::Archivos(std::string nombrearchivo){
    _nombreArchivo=nombrearchivo;
}

bool Archivos::Guardar(Usuarios reg){
    bool pudoEscribir;
    FILE *p = fopen( _nombreArchivo.c_str() , "ab" );
    if (p == nullptr){
        return false;
    } 
    pudoEscribir = fwrite(&reg, sizeof(Usuarios),1,p);
    fclose(p);
    return pudoEscribir;
}
bool Archivos::Guardar(Usuarios reg, int nroRegistro){
  bool pudoEscribir;
  FILE *p = fopen(_nombreArchivo.c_str(), "rb+");
  if (p == nullptr){
    return false;
  }
  fseek(p, nroRegistro * sizeof(Usuarios), SEEK_SET);
  pudoEscribir = fwrite(&reg, sizeof(Usuarios), 1, p);
  fclose(p);
  return pudoEscribir;
}

bool Archivos::ValidacionDni(int dni){
    Usuarios nuevo;
    bool existe=false;
    FILE *p= fopen(_nombreArchivo.c_str(),"rb");
    if (p==nullptr){
        return false;
    }
    while(fread(&nuevo,sizeof(Usuarios),1,p)){
        if (nuevo.getDni()==dni){
            existe=true;
        }
    }
    fclose(p);
    return existe;
}

int Archivos::ContarRegistros(){
    FILE *p = fopen(_nombreArchivo.c_str(),"rb");
    if (p==nullptr){
        return 0;
    }
    fseek(p,0,SEEK_END);
    int bytes = ftell(p);
    return bytes / sizeof (Usuarios);
}

Usuarios Archivos::leer(int nroreg){
    Usuarios reg;
    FILE *p = fopen(_nombreArchivo.c_str(),"rb");
    if (p == nullptr){
        return reg;
    }
    fseek (p,nroreg * sizeof(Usuarios),SEEK_SET);
    fread(&reg, sizeof(Usuarios),1,p);
    fclose(p);
    return reg;
}

int Archivos::buscar(int dni){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  Usuarios reg;
  while(fread(&reg, sizeof(Usuarios), 1, p)){
    if(reg.getDni() == dni){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}

