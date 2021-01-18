#include <iostream>
using namespace std;
#include <stdlib.h>
#define pi 3.1416;
class figura
{
private:
	float lado1,lado2;
public:
	figura(float,float);
	void pedir_datos();
	void cuadralo();
	void triangulo();
	void rectangulo();
	void circulo();
	
};
figura::figura(float plado1,float plado2)
{
	lado1=plado1;
	lado2=plado2;
}
void figura::pedir_datos()
{
	cout<<"Dame el primer lado ;";cin>>lado1;
	cout<<"Dame el segundo lado ;";cin>>lado2;
	
}
void figura::cuadralo()
{
	cout<<"CUADRALO\n";

cout<<"Calculando el perimetro"<<endl;
float periC=(2*lado1)+(2*lado2);
cout<<"El resultado es :"<<periC<<endl;
cout<<"calculando Area"<<endl;
float AreC=lado1*lado2;
cout<<"El resultado es :"<<periC<<endl;
}
void figura::rectangulo()
{
	cout<<"RECTANGULO\n";
	cout<<"Calculando el perimetro"<<endl;
	float perirec=(2*lado1)+(2*lado2);
	cout<<"El resultado es :"<<perirec<<endl;
	cout<<"calculando Area"<<endl;
	float Arearec=lado1*lado2;
	cout<<"El resultado es :"<<Arearec<<endl;
}
void figura::triangulo()
{
	cout<<"CIRCULO\n";
	cout<<"Calculando el perimetro"<<endl;
	float peritri=2*lado1+lado2;
	cout<<"El resultado es :"<<peritri<<endl;
	cout<<"calculando Area"<<endl;
	float Aretri=(lado1*lado2)/2;
	cout<<"El resultado es :"<<Aretri<<endl;
	
}
/*void figura::circulo()
{
	cout<<"Calculando el perimetro"<<endl;
	float periCir=l;
	cout<<"calculando Area"<<endl;
	float AreCir=lado1*lado2;
}
*/







int main()
{
	int lado1,lado2;
	figura f(lado1,lado2);
	f.pedir_datos();
	system("CLS");
	f.cuadralo();
	system("CLS");
	
	f.rectangulo();
	
	system("CLS");
	f.triangulo();
	
	system("CLS");
	//f.circulo();
	
	system("pause");
}
