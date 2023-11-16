#include "ArchivosAdministradores.h"
#include "Administrador.h"
#include <string>
#include <cstdio>
#include <iostream>

using namespace std;


ArchivosAdministradores::ArchivosAdministradores(std::string _nombrearchivo){
    _nombreArchivo=_nombrearchivo;
}

bool ArchivosAdministradores::Guardar(Administrador reg){
    bool pudoEscribir;
    FILE *p = fopen( _nombreArchivo.c_str() , "ab" );
    if (p == nullptr){
        return false;
    }
    pudoEscribir = fwrite(&reg, sizeof(Administrador),1,p);
    fclose(p);
    return pudoEscribir;
}

bool ArchivosAdministradores::ValidacionDni(int dni){
    Administrador nuevo;
    bool existe=false;
    FILE *p= fopen(_nombreArchivo.c_str(),"rb");
    if (p==nullptr){
        return false;
    }
    while(fread(&nuevo,sizeof(Administrador),1,p)){
        if (nuevo.getDni()==dni){
            existe=true;
        }
    }
    fclose(p);
    return existe;
}

int ArchivosAdministradores::ContarRegistros(){
    FILE *p = fopen(_nombreArchivo.c_str(),"rb");
    if (p==nullptr){
        return 0;
    }
    fseek(p,0,SEEK_END);
    int bytes = ftell(p);
    return bytes / sizeof (Administrador);
}

Administrador ArchivosAdministradores::leer(int nroreg){
    Administrador reg;
    FILE *p = fopen(_nombreArchivo.c_str(),"rb");
    if (p == nullptr){
        return reg;
    }
    fseek (p,nroreg * sizeof(Administrador),SEEK_SET);
    fread(&reg, sizeof(Administrador),1,p);
    fclose(p);
    return reg;
}

int ArchivosAdministradores::buscar(int dni){
  FILE *p = fopen(_nombreArchivo.c_str(), "rb");
  if (p == nullptr){
    return -1;
  }
  int i = 0;
  Administrador reg;
  while(fread(&reg, sizeof(Administrador), 1, p)){
    if(reg.getDni() == dni){
      fclose(p);
      return i;
    }
    i++;
  }
  fclose(p);
  return -1;
}
