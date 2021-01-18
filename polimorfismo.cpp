#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
class poligono
{
public:
	virtual float perimetro()=0;
	virtual float area()=0;
	
};
class rectangulo:public poligono
{
private:
	float base,altura;
public:
	rectangulo(float base,float altura)
	{
		this->base=base;
		this->altura=altura;	
	}
	float area()
	{
		float areaR=2*(base+altura);
		return areaR;
		
	}
	float perimetro()
	{
		float perimetroR=base*altura;
		return perimetroR;
	}
	~rectangulo()
	{
		
	}
	
};
class triangulo: public poligono
{
private:
	float lado1,lado2,lado3;
public:
	triangulo(float lado1,float lado2,float lado3)
	{
		this->lado1=lado1;
		this->lado2=lado2;
		this->lado3=lado3;
	}
	float perimetro()
	{
		float perimetrot=lado1+lado2+lado3;
		return perimetrot;
	}
	float area()
	{
		float s=(lado1+lado2+lado3)/2;
		float areat=lado1*lado2;
		return areat;
	}
	~triangulo()
	{
		
	}
	
};
int main()
{
	poligono* poli[2];
	poli[0]=new rectangulo(23,12);
	poli[1]=new triangulo(10,4,6);
	for(int n=0; n<2; n++)
	{
		cout<<"Area:"<<poli[n]->area()<<endl;
		cout<<"Perimetro"<<poli[n]->perimetro()<<endl;
	}
	
	delete poli;
	system("pause");
	return 0;
}
