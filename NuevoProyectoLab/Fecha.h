#pragma once
class Fecha {
	public:
		void CargarFecha();
		void MostrarFecha();
		void setDia(int dia);
		void setMes(int mes);
		void setAnio(int anio);
		int getDia();
		int getMes();
		int getAnio();
		
		Fecha();

	private:
		int _Dia, _Mes, _Anio;

};

