#include<iostream>
#include<windows.h>
using namespace std;

class mamifero
{
private:
	int anonacimiento;
	string lugarnacimiento;
	string raza;
public:
	mamifero(int anonacimiento,string lugarnacimiento,string raza)
	{
		this->anonacimiento=anonacimiento;
		this->lugarnacimiento=lugarnacimiento;
		this->raza=raza;
	}
	virtual string imprimirdieta()=0;
	int getanonacimiento()
	{
		return anonacimiento;
	}
	string getlugarnacimiento()
	{
		return lugarnacimiento;
	}
	string getraza()
	{
		return raza;
	}
	~mamifero()
	{
		
	}
	
};
class felino:public mamifero
{
private:
	string nombrecirco;
public:
	felino(int anonacimiento,string lugarnacimiento,string raza,string nombrecirco):mamifero(anonacimiento,lugarnacimiento,raza)
	{
		this->nombrecirco=nombrecirco;
	}
	felino(int anonacimiento,string lugarnacimiento,string raza):mamifero(anonacimiento,lugarnacimiento,raza)
	{
		
	}
	string imprimirdieta()
	{
		string mensaje="Come carne";
		return mensaje;
	}
	string getnombrecirco()
	{
		return nombrecirco;
	}
	void setnombrecirco(string nombre)
	{
		nombrecirco=nombre;
	}
	~felino()
	{
		
	}
};
class gatodomestico:public felino
{
private:
	string nombredueno;
public:
	gatodomestico(int anonacimiento,string lugarnacimiento,string raza,string nombredueno):felino(anonacimiento,lugarnacimiento,raza)
	{
		this->nombredueno=nombredueno;
	}
	string imprimirdieta()
	{
		string mensaje="come croquetas";
		return mensaje;
	}
	string getnombredueno()
	{
		return nombredueno;
	}
	void setnombredueno(string nombre)
	{
		nombredueno=nombre;
	}
	~gatodomestico()
	{
		
	}
};
int main()
{
	

	felino* feli=new felino(2012,"africa","tigre","los hermanos vazquez");
	gatodomestico* minino=new gatodomestico(2019,"en casa","miau","Ricardo");
	
	
		cout<<"Su dieta es de felino:"<<feli->imprimirdieta()<<endl;
		cout<<"Su dieta es de gato domestico:"<<minino->imprimirdieta()<<endl;
		string nuevocirco;
	cout<<"Digite el nuevo nombre del circo :";
	getline(cin,nuevocirco);
	feli->setnombrecirco(nuevocirco);
	cout<<endl;
	string nuevodueno;
	cout<<"Digite el nuevo dueño:";
	getline(cin,nuevodueno);
	minino->setnombredueno(nuevodueno);
	cout<<endl;
	cout<<minino->getnombredueno()<<endl;
	cout<<feli->getnombrecirco()<<endl;
	
	system("pause");
	return 0;
}
