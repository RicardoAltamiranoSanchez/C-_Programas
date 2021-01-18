#include<iostream>
#include<windows.h>
using namespace std;
class Cuadrilatero
{
private:
	float lado1,lado2;
public:
	Cuadrilatero(float,float);
	Cuadrilatero(float);
	float getperimetro();
	float getarea();
	
};
Cuadrilatero::Cuadrilatero(float lado1,float lado2)
{
	this->lado1=lado1;
	this->lado2=lado2;
}
Cuadrilatero::Cuadrilatero(float lado)
{
	this->lado1=this->lado2=lado;
	
}
float Cuadrilatero::getperimetro()
{
	float perimetro=2*(lado1+lado2);
	return perimetro;
}
float Cuadrilatero::getarea()
{
	float area=lado1*lado2;
	return area;
}



int main()
{
	float lado1,lado2;
	Cuadrilatero* cu;
	cout<<"Digite el primer lado"<<endl;
	cin>>lado1;
	cout<<"Digite el segundo lado"<<endl;
	cin>>lado2;
	
	
	cu=new Cuadrilatero(lado1,lado2);
	cout<<"El perimetro es :"<<cu->getperimetro()<<endl;
	cout<<"El area es   :"<<cu->getarea()<<endl;
	
	
	
	
	system("pause");
	return 0;
}
