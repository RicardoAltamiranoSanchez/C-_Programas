#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
class figura
{
private:
	int nlados;
public:
	figura(int);
	~figura();
	int getnlados();
	
};
figura::figura(int nlados)
{
	this->nlados=nlados;
}
int figura::getnlados()
{
	return nlados;
}
figura::~figura()
{
	
}
class triangulo : public figura
{
private:
	float lado1,lado2,lado3;
public:
	triangulo(int,float,float,float);
	~triangulo();
	float areatriangulo();
	
	
};
triangulo::triangulo(int nlados,float lado1,float lado2,float lado3):figura(nlados)
{
	this->lado1=lado1;
	this->lado2=lado2;
	this->lado3=lado3;
	
}
float triangulo::areatriangulo()
{
	float p=(lado1+lado2+lado3)/2;
	float area=sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
	return area;
	
}
triangulo::~triangulo()
{
	
}
int main()
{
	triangulo* tri=new triangulo(3,24,18,9);
	
	cout<<"Numero de lados es :"<<tri->getnlados()<<endl;
	cout<<"Area del triangulo :"<<tri->areatriangulo()<<endl;
	
	delete tri;
	system("pause");
	return 0;
	
	
	
}
	













