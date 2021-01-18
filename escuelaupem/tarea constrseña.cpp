#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	
	int constrasenia=123;
	string nombre="Ricardo";
	int password;
	string usuario ;
	int intentos =3;
	while(intentos!=0)
	{
		cout<<"Para entrar necesita ingresar el nombre de usuario y constraseña";
		cout<<endl;
		cout<<"digite su nombre"<<endl;
		cin>>usuario;
		cout<<"Digite su constraseña"<<endl;
		cin>>password;
		if((usuario==nombre) && (password==constrasenia))
		{
			cout<<"Bienvenido";
		}
		else{
			cout<<"ERROR"<<endl;
			cout<<"Solo tienes 3 intentos\n"<<endl;
			intentos--;
			cout<<endl;
			cout<<endl;
			cout<<"Te quedan :"<<intentos<<endl;
			
		}
		
	}
	cout<<endl;
	cout<<"SISTEMA BLOQUEADO";
	getch();
	return 0;
}

