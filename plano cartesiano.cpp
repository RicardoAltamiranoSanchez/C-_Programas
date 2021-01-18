#include<iostream>
#include<windows.h>
using namespace std;
class Tablero{
private:
	int x,y;
public:
	Tablero(int,int);
	void mover_arriba(int);
	void mover_abajo(int);
	void mover_derecha(int);
	void mover_izquierda(int);
	int getx();
	int gety();
	
	
};
Tablero::Tablero(int x,int y)
{
	this->x=x;
	this->y=y;
}
void Tablero::mover_arriba(int n)
{
	y+=n;
}
void Tablero::mover_abajo(int n)
{
	y-=n;
}
void Tablero::mover_derecha(int n)
{
	x+=n;
}
void Tablero::mover_izquierda(int n)
{
	x-=n;
}
int Tablero::getx()
{
	return x;
}
int Tablero::gety()
{
	return y;
}
int main()
{
	int x,y,opcion,n;
	Tablero* ta;
	cout<<"Digite la pocision de inicio"<<endl;
	cout<<"En X"<<endl;
	cin>>x;
	cout<<"En Y"<<endl;
	cin>>y;
	ta=new Tablero(x,y);
	do{
		cout<<"Menu de opciones"<<endl;
		cout<<"1 mover hacia arriba"<<endl;
		cout<<"2 mover hacia abajo"<<endl;
		cout<<"3 mover hacia derecha"<<endl;
		cout<<"4 mover hacia izquierda"<<endl;
		cout<<"5 salir"<<endl;
		cin>>opcion;
		if(opcion>=1 && opcion<=4)
		{
			cout<<"Cuantas posiciones quieres mover"<<endl;
			cin>>n;
		}
		switch(opcion)
		{
		case 1: ta->mover_arriba(n); break;
		case 2: ta->mover_abajo(n); break;
		case 3: ta->mover_derecha(n); break;
		case 4: ta->mover_izquierda(n); break;
		case 5:  break;
		default:cout<<"Error"; break;
		}
		system("CLS");
		cout<<"la posicion actua es"<<endl;
		cout<<"En X :"<<ta->getx()<<endl;
		cout<<"En Y :"<<ta->gety()<<endl;
		Sleep(2000);
		
	} while(opcion!=5);
		
	
	system("pause");
	return 0;
}
