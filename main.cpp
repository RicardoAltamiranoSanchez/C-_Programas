#include <iostream>
#include<windows.h>
using namespace std;

class punto
{
	private :
		
			int x,y;
public:
	punto();
	punto(int,int);
	void setx(int);
	void sety(int);
	int getx();
	int gety();
	
	
};
punto::punto()
{
	x=y=0;
}
punto::punto(int valorx,int valory)
{
	x=valorx;
	y=valory;
}
void punto:: setx(int X)
{
	x=X;
}
void punto::sety(int Y)
{
	y=Y;
}
int punto::getx()
{
	
	return x;
}
int punto::gety()
{
	return y;
}
int main()
{
	punto pu(2,3);
	cout<<"El valor de x es"<<pu.getx()<<endl;
	cout<<"El valor de y es"<<pu.gety()<<endl;
	 punto* pu2= new punto();
	 pu2->setx(19);
	 pu2->sety(23);
	 cout<<"Nuevos valores de x ,y"<<endl;
	 cout<<"El valor de x es "<<pu2->getx()<<endl;
	 cout<<"El valor de y es "<<pu2->gety()<<endl;
	
	
	
	system("pause");
	return 0;
}
