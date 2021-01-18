#include <iostream>
#include<windows.h>
using namespace std;
class Calificacion
{
private:
	int calim,calip;
public:
	Calificacion(int,int);
	Calificacion();
	void pedir_datos();
	void mostrar_datos();
};
Calificacion::Calificacion(int _calim,int calip)
{
	calim=_calim;
	calip=calip;
}
Calificacion::Calificacion()
{
	
}
void Calificacion::pedir_datos()
{
	cout<<"Pidiendo calificaciones"<<endl;
	cout<<"Digite la calificacion de matematicas"<<endl;
	cin>>calim;
	cout<<"Digite la claificacion de programacion"<<endl;
	cin>>calip;
}
void Calificacion::mostrar_datos()
{
	cout<<"Mostrando calificaciones y promedio"<<endl;
	cout<<"Matematicas  "<<calim<<endl;
	cout<<"Programacion  "<<calip<<endl;
	cout<<"Promedio  : "<<(calim+calip)/2;
}
int main()
{
	Calificacion* ca =new Calificacion[3];
	for(int n=0; n<3; n++)
	{
		cout<<"Alumno"<<n<<endl;
		(ca+n)->pedir_datos();
		//fflush(stdin);
		
	}
	cout<<endl;
	
	for(int m=0; m<3; m++)
	{
		cout<<"Alumno"<<m<<endl;
		(ca+m)->mostrar_datos();
	}
	
	
	system("pause");
	return 0;
}
