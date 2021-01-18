#include<iostream>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Auto
{
private:
	string modelo,marca;
	float precio;
public:
	Auto(string,string,float);
	Auto();
	~Auto();
	float getprecio();
	void mostrar_datos();
	static int indice(Auto autos[],int n);
	
		
	
	
};
Auto::Auto(string modelo,string marca,float precio)
{
	this->modelo=modelo;
	this->marca=marca;
	this->precio=precio;
}
Auto::Auto()
{
	
}
float Auto::getprecio()
{
	return precio;
}
void Auto::mostrar_datos()
{
	cout<<"Datos del auto"<<endl;
	cout<<"Modelo :"<<modelo<<endl;
	cout<<"Marca :"<<marca<<endl;
	cout<<"Precio :"<<precio<<endl;
}
 int Auto::indice(Auto autos[],int n)
{
	int indice;
	float precio;
	precio=autos[0].getprecio();
	for(int m=1; m<n; m++)
	{
		if(autos[m].getprecio()<precio)
		{
			precio=autos[m].getprecio();
			indice=m;
		}
		
		
	}
	return indice;
}
Auto::~Auto()
{
	
}


int main()
{
	Auto* a;
	int cantidad,indice;
	string modelo,marca;
	float precio;
	cout<<"Digite la cantidad de autos que va ingresar"<<endl;
	cin>>cantidad;
	a=new Auto[cantidad];
	for(int n=0; n<cantidad; n++)
	{
		cout<<"Ingresando informacion de autos "<<n+1<<endl;
		cin.ignore();
		cout<<"Digite el modelo:";
		getline(cin,modelo);
		fflush(stdin);
		cout<<"\nDigite la marca:";
		getline(cin,marca);
		cout<<"\nDigite el precio:";
		cin>>precio;
		a[n]=Auto(modelo,marca,precio);
	}
	cout<<endl;
	indice=Auto::indice(a,cantidad);
	cout<<"El auto mas barato"<<endl;
	(a+indice)->mostrar_datos();
	 delete [] a;
	system("pause");
	return 0;
}
