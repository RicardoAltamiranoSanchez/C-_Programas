#include <iostream>
#include <windows.h>
#include<stdlib.h>
using namespace std;
class Expediente
{
private:
	int noexpediente;
public:
	Expediente(int noexpediente)
	{
		this->noexpediente=noexpediente;
		
	}
	int getnoexpediente()
	{
		return noexpediente;
	}
	Expediente()
	{
		
	}
	~Expediente()
	{
		
	}
	
	
};
class Direccion{
private:
	string direccion;
public:
	Direccion(string direccion)
	{
		this->direccion=direccion;
	}
	string getdireccion()
	{
		return direccion;
	}
	Direccion()
	{
		
	}
	~Direccion()
	{
		
		
	}
};
class Estudiante
{
private:
	float promedio;
	string nombre;
	Expediente ex;
	Direccion dir;
public:
	Estudiante(string nombre,float promedio,int noexpediente,string direccion):ex(noexpediente),dir(direccion)
	{
		this->promedio=promedio;
		this->nombre=nombre;
	}
	void mostrar_datos()
	{
		cout<<"Nombre :"<<nombre<<endl;
		cout<<"Promedio:"<<promedio<<endl;
		cout<<"Numero de expediente :"<<ex.getnoexpediente()<<endl;
		cout<<"Dirreccion :"<<dir.getdireccion()<<endl;
		
	}
};
	int main()
	{
		Estudiante* es=new Estudiante("Ricardo",10.0,01,"Nezahualcoyol");
		es->mostrar_datos();
		
		
		system("pause");
		return 0;
	}
	

