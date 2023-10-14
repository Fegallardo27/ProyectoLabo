#include "Fecha.h"
#include <iostream>
void  Fecha:: CargarFecha(){
	std::cout<< "Dia: ";
	std::cin >> _Dia;
	std::cout<< "Mes: ";
	std::cin >> _Mes;
	std::cout << "Anio: ";
	std::cin >> _Anio;

}

void Fecha::MostrarFecha() {
	std::cout << _Dia << "/" << _Mes << "/" << _Anio;
}

void Fecha:: setDia(int dia){
	_Dia = dia;
}
void Fecha:: setMes(int mes){
	_Mes = mes;

}
void Fecha:: setAnio(int anio){
	_Anio = anio;
}
int  Fecha::getDia(){
	return _Dia;
}
int Fecha:: getMes(){
	return _Mes;
}
int Fecha::getAnio() {
	return _Anio;
}

Fecha::Fecha(){
	_Dia = 0;
	_Mes = 0;
	_Anio = 0;
}