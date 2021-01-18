#include <iostream>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
class atleta
{
private:
	int numero;
	string nombre;
	float tiempo;
public:
	atleta(string,int,float);
	atleta();
	~atleta();
	void mostrar_datos();
	float gettiempo();
	static int indice(atleta at[],int cantidad);
};
atleta::atleta(string nombre,int numero,float tiempo)
{
	this->nombre=nombre;
	this->numero=numero;
	this->tiempo=tiempo;
	
}
atleta::atleta()
{
	
}
void atleta::mostrar_datos()
{
	cout<<"Nombre :"<<nombre<<endl;
	cout<<"Numero :"<<numero<<endl;
	cout<<"Tiempo :"<<tiempo<<endl;
}
float atleta::gettiempo()
{
	return tiempo;
}
int atleta::indice(atleta a[],int cantidad)
{
	int indi;
	float tiempo;
	tiempo=a[0].gettiempo();
	for(int n=1; n<cantidad; n++)
	{
		if(a[n].gettiempo()<tiempo)
		{
			tiempo=a[n].gettiempo();
			indi=n;
		}
		
	}
	return indi;
}
atleta::~atleta()
{
	
}
int main()
{
	atleta* at;
	int numero,cantidad,indice;
	string nombre;
	float tiempo;
	cout<<"Digite la cantidad de atletas que va ingresar"<<endl;
	cin>>cantidad;
	at=new atleta[cantidad];
	for(int m=0; m<cantidad; m++)
	{
		cout<<"registrando datos del atleta "<<(m+1)<<endl;
		fflush(stdin);
		cout<<"Digite el nombre del atleta"<<endl;
		getline(cin,nombre);
		fflush(stdin);
		cout<<"Digite el numero del atleta"<<endl;
		cin>>numero;
		cout<<"Digite el tiempo que realizo el atleta"<<endl;
		cin>>tiempo;
		at[m]=atleta(nombre,numero,tiempo);
		system("CLS");
	}
	system("CLS");
	indice=atleta::indice(at,cantidad);
	cout<<"El atleta ganador es "<<endl;
	(at+indice)->mostrar_datos();
	
	delete [] at;
	
	system("pause");
	return 0;
}
