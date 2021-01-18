/*Ejercicio 2: Construya una clase Tiempo que contenga los siguientes atributos enteros: horas,
minutos y segundos. Haga que la clase contenga 2 constructores, el primero debe tener 3 
parámetros Tiempo(int,int,int) y el segundo sólo tendrá un campo que serán los segundos y 
desensamble el número entero largo en horas, minutos y segundos. */
#include<iostream>
using namespace std;
class tiempo{
private:
	int horas,minutos,segundos;
public:
	tiempo(int,int,int);
	tiempo(int);
	void pedir_tiempo();
	void mostrar_tiempo();
	
};

tiempo::tiempo(int phoras,int pminutos,int psegundos)
{
	horas=phoras;
	minutos=pminutos;
	segundos=psegundos;
}
void tiempo::pedir_tiempo()
{
	cout<<"Digite las horas:";cin>>horas;cout<<endl;
	cout<<"Digite los minutos";cin>>minutos;cout<<endl;
	cout<<"Digite los segundos";cin>>segundos;cout<<endl;
	
}
void tiempo::mostrar_tiempo()
{
	cout<<"El tiempo es"<<horas<<"/"<<minutos<<"/"<<segundos;
}
int main()
{
	int h,m,s;
	tiempo t(h,m,s);
	t.pedir_tiempo();
	t.mostrar_tiempo();
	system("pause");
	return 0;
}
