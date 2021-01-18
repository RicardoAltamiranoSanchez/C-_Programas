#include<iostream>
#include<stdlib.h>
using namespace std;
class comparacion
{
private:
	int num1,num2,num3;
	int mayorn,menorn;
public:
	comparacion(int,int,int);
	void pedir_datos();
	void mayorN();
	void menorN();
	void mostrar_datos();
	
};
comparacion::comparacion(int pnum1,int pnum2,int pnum3)
{
	num1=pnum1;
	num2=pnum2;
	num3=pnum3;
}
void comparacion::pedir_datos()
{
	cout<<"Digite el primer numero :";cin>>num1;
	cout<<"Digite el segundo numero :";cin>>num2;
	cout<<"Digite el tercer numero :";cin>>num3;
	
}
void comparacion::mayorN()
{
	if(num1>num2 && num1>num3)
		mayorn=num1;
	else if(num2>num1 && num2>num3)
		mayorn=num2;
	else if(num3>num1 && num3>num2)
		mayorn=num3;
	else
		NULL;
	
}
void comparacion::menorN()
{
	if(num1<num2 && num1<num3)
		menorn=num1;
	else if(num2<num1 && num2<num3)
		menorn=num2;
	else if(num3<num1 && num3<num2)
		menorn=num3;
	else
		NULL;
	
	
}

void comparacion::mostrar_datos()
	
{
	cout<<"El numero mayor es :"<<mayorn<<endl;
	cout<<"El numero menoir es :"<<menorn<<endl;
}
int main()
{ 
	int n1,n2,n3;
	comparacion com(n1,n2,n3);
	com.pedir_datos();
	com.mayorN();
	com.menorN();
	com.mostrar_datos();
	return 0;
}





