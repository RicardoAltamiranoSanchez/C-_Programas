#include<iostream>
#include<windows.h>
using namespace std;

class coche
{
private:
	string marca;
	string color;
protected:
	string modelo;
	string getmodelo()
	{
		return modelo;
	}
public:
	coche(string marca,string color,string modelo)
	{
		this->marca=marca;
		this->color=color;
		this->modelo=modelo;
		
	}
	string getmarca()
	{
		return marca;
	}
	string getcolor()
	{
		return color;
	}
	void setcolor(string color)
	{
		this->color=color;
		
	}
	~coche()
	{
		
	}
	
};

//Clase publica
class turismo:public coche
{
private:
	int nopuertas;
public:
	turismo(string marca,string color,string modelo,int nopuertas):coche(marca,color,modelo)
	{
		this->nopuertas=nopuertas;
	}
	int getnopuertas()
	{
		return nopuertas;
	}
	string retornar()
	{
		string mensaje=getmodelo();
		return mensaje;
	}
	
	
};
//clases privadas
class deportivo:private coche
{
private:
	int cilindros;
public:
	deportivo(string marca,string color,string modelo,int cilindros):coche(marca,color,modelo)
	{
		this->cilindros=cilindros;
	}
	int getcilindros()
	{
		return cilindros;
	}
	string marca2()
	{
		string mensaje=getmarca();
		return mensaje;
		
	}
	~deportivo()
	{
		
	}
	
};
//clases protegida
class furgoneta:protected coche
{
private:
	int carga;
public:
	furgoneta(string marca,string color,string modelo,int carga):coche(marca,color,modelo)
	{
		this->carga=carga;
	}
	int getcarga()
	{
		return carga;
	}
	string color2()
	{
		string mensaje=getcolor();
		return mensaje;
	}
	
	~furgoneta()
	{
		
	}
		
	
	
};

int main()
{
	//Clase publica
	turismo* tu=new turismo("Toyota","Rojo","GGT78",4);
	cout<<"Color:"<<tu->getcolor()<<endl;
	tu->setcolor("Negro");
	cout<<"Color nuevo :"<<tu->getcolor()<<endl;
	cout<<"Modelo:"<<tu->retornar()<<endl;
    //Clase privada
	deportivo* dep = new deportivo("Ferrari","Azul","BFG678",6);
	cout<<"Marca:"<<dep->marca2()<<endl;
	cout<<"Cilindros:"<<dep->getcilindros()<<endl;
	//clase protected
	furgoneta* fu= new furgoneta("camion","Verde","ght678",1500);
	cout<<"Carga :"<<fu->getcarga()<<endl;
	cout<<"Color:"<<fu->color2()<<endl;
	delete tu;
	delete dep;
	delete fu;
	
	system("pause");
	return 0;
}
