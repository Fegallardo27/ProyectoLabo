#ifndef PRUEBACLASEFECHAPRUEBACLASEFECHA_H_INCLUDED
#define PRUEBACLASEFECHA_H_INCLUDED
class Fecha{
    private:
        int dia, mes, anio;
    public:
        void Cargar(){
          bool sumaMes=false;
          bool sumaAnio=false;
            cout<<"DIA: ";
            cin>> dia;
              if(dia>=1 && dia<=31) dia=dia;
            else{
              dia=1;
              sumaMes=true;}
            cout<<"MES: ";
            cin>>mes;
            if (mes>=1 && mes<=12){
              mes=mes;}
              else{
              mes=1;
              sumaAnio=true;}

            if (sumaMes==true){
              mes++;
            }
            cout<<"ANIO: ";
            cin>> anio;

            if (anio>=1900){
              anio=anio;
            } else {
              anio=1900;
            }
            if (sumaAnio==true){
              anio++;
            }

        }
        void Mostrar(){
            cout<<"DIA: "<< dia<<endl;
            cout<<"MES: "<< mes<<endl;
            cout<<"ANIO: "<< anio <<endl;
        }
        void mostrarEnLinea(){
            cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
        }

        void setDia(int d){
            if(d>=1 && d<=31) dia=d;
            else{
              dia=1;
              mes=+1;
            }
        }

        void setMes(int m){
          mes=m;
        }
        void setAnio(int a){
          anio=a;
        }


        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAnio(){return anio;}
};



#endif // PRUEBACLASEFECHA_H_INCLUDED
