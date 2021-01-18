#include<iostream>
#include<windows.h>
using namespace std;
class barco
{
private:
	string nombre;
public:
	barco(string nombre)
	{
		this->nombre=nombre;
	}
	void indicar_barco()
	{
		cout<<"Desplazamiento por agua"<<endl;
	}
	string getnombre()
	{
		return nombre;
	}
	~barco()
	{
		
	}
	
};
class avion
{
private:
	string modelo;
public:
	avion(string modelo)
	{
		this->modelo=modelo;
	}
	void indicar_avion()
	{
		cout<<"Desplazamiento por aire"<<endl;
	}
	string getmodelo()
	{
		return modelo;
	}
	~avion()
	{
		
	}
	
};
class hidroavion: public barco,public avion
{
private:
	string codigo;
public:
	hidroavion(string nombre,string modelo,string codigo):barco(nombre),avion(modelo)
	{
		this->codigo=codigo;
	}
	string getcodigo()
	{
		return codigo;
	}
	void mostrar_datos()
	{
		cout<<"Nombre:"<<getnombre()<<endl;
		cout<<"Modelo:"<<getmodelo()<<endl;
		cout<<"Codigo:"<<codigo<<endl;
	}
	~hidroavion()
	{
		
	}
	
};

int main()
{
	
	hidroavion* h=new hidroavion("ninguno","hgt78","34828hg");
	h->mostrar_datos();
	cout<<endl;
	h->indicar_barco();
	h->indicar_avion();
	delete h;
	system("pause");
	return 0;
}
