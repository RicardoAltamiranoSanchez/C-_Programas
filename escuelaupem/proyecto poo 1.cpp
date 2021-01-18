#include <iostream>
#include<windows.h>
#include <conio.h>
using namespace std;

void gotoxy(int x,int y)
{
	HANDLE cow;
	cow=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(cow,pos);
}
class parcial
{
private:
	int frac,res,cont,num;
public:
	parcial();
	void factorial();
	void codigo_fac();
	void hola();
	void codigo_hola();
	void imprimir_variable();
	void codigo_variable();
	void pedir_datos_num();
	void codigo_num();
	void entrada();
	void imprimir();
	void codigo_num_po();
	void cali(int);
	void codigo_cali();
	void factorial_poo();
	void factorial_imp();
	void codigo_factorial_poo();
};
parcial::parcial()
{
	frac=0;
	res=0;
	cont=0;
	num=0;
}
void parcial::factorial()
{
	res=1;
	cout<<"Ingrese el numero que va factorial"<<endl;
	cin>>frac;
	for(cont=1; cont<=frac; cont++)
	{
		res*=cont;
	}
	cout<<"El resultado es:"<<res<<endl;
}
void parcial::codigo_fac()
{
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(60,1);
	cout<<"#include <iostream.h>"<<endl;
	gotoxy(60,2);
	cout<<"void main()"<<endl;
	gotoxy(60,3);
	cout<<"{"<<endl;
	gotoxy(60,4);
	cout<<"int frac,res,cont"<<endl;
	gotoxy(60,5);
	cout<<"cout<<\"ingrese el numero\"<<endl; "<<endl;
	gotoxy(60,6);
	cout<<"for(cont=1;cont<=frac; con++)"<<endl;
	gotoxy(60,7);
	cout<<"res*=cont;"<<endl;
	gotoxy(60,8);
	cout<<"cout<<\"El resultado es\"<<endl;"<<endl;
	gotoxy(60,9);
	cout<<"}"<<endl;
}
void parcial::hola()
{
	//int main()
	//{
	cout<<"hola"<<" "<<"mundo"<<" "<<"buenos"<<" "<<"dias"<<endl;
	//}
	
	
}
void parcial::codigo_hola()
{
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(60,1);
	cout<<"#include <iostream.h>"<<endl;
	gotoxy(60,2);
	cout<<"void main()"<<endl;
	gotoxy(60,3);
	cout<<"{"<<endl;
	gotoxy(60,4);
	cout<<"cout<<\"hola<<\" \"<<\"mundo\"<<\" \"<<\"buenos\"<<\"dias\"<<"<<endl;
	gotoxy(60,5);
	cout<<"}"<<endl;
}
void parcial::imprimir_variable()
{
	num=32;
	cout<<"El numero es"<<num<<endl;
}
void parcial::codigo_variable()
{
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(60,1);
	cout<<"#include <iostream.h>"<<endl;
	gotoxy(60,2);
	cout<<"void main()"<<endl;
	gotoxy(60,3);
	cout<<"{"<<endl;
	gotoxy(60,4);
	cout<<"int num;"<<endl;
	gotoxy(60,5);
	cout<<"num=32;"<<endl;
	gotoxy(60,6);
	cout<<"cout<<\"el numero es\"<<\" \"<<num<<endl;"<<endl;
	gotoxy(60,7);
	cout<<"}"<<endl;
	
}
void parcial::pedir_datos_num()
{		
	cout<<"Digite un numero entero"<<endl;
	cin>>num;
	cout<<"el numero es"<<" "<<num<<endl;
	
}
void parcial::codigo_num()
{
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(60,1);
	cout<<"#include <iostream.h>"<<endl;
	gotoxy(60,2);
	cout<<"void main()"<<endl;
	gotoxy(60,3);
	cout<<"{"<<endl;
	gotoxy(60,4);
	cout<<"int num;"<<endl;
	gotoxy(60,5);
	cout<<"cout<<\"digite un numero entero\"<<endl;"<<endl;
	gotoxy(60,6);
	cout<<"cin>>num;"<<endl;
	gotoxy(60,7);
	cout<<"cout<<\"el numero es\"<<\" \"<<num<<endl;"<<endl;
	gotoxy(60,8);
	cout<<"}"<<endl;
}
void parcial::entrada()
{
	cout<<"Digite un numero entero"<<endl;
	cin>>num;
	
}
void parcial::imprimir()
{
	cout<<"El numero es:"<<num<<endl;
}
void parcial::codigo_num_po()
{   
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(60,1);
	cout<<"#include<iostream.h>"<<endl;
	gotoxy(60,2);
	cout<<"class numero"<<endl;
	gotoxy(60,3);
	cout<<"{"<<endl;
	gotoxy(60,4);
	cout<<"public:"<<endl;
	gotoxy(60,5);
	cout<<"void entrada();"<<endl;
	gotoxy(60,6);
	cout<<"void imprimir();"<<endl;
	gotoxy(60,7);
	cout<<"private:"<<endl;
	gotoxy(60,8);
	cout<<"int num;"<<endl;
	gotoxy(60,9);
	cout<<"};"<<endl;
	gotoxy(60,10);
	cout<<"void numero::entrada()"<<endl;
	gotoxy(60,11);
	cout<<"{"<<endl;
	gotoxy(60,12);
	cout<<"	cout<<\"proporcione un numero entero\"<<endl;"<<endl;
	gotoxy(60,13);
	cout<<"cin>>num;"<<endl;
	gotoxy(60,14);
	cout<<"}"<<endl;
	gotoxy(60,15);
	cout<<"void numero::imprimir()"<<endl;
	gotoxy(60,16);
	cout<<"{"<<endl;
	gotoxy(60,17);
	cout<<"cout<<\"el numero es\"<<\" \"<<num<<endl;"<<endl;
	gotoxy(60,18);
	cout<<"}"<<endl;
	gotoxy(60,19);
	cout<<"void main()"<<endl;
	gotoxy(60,20);
	cout<<"{"<<endl;
	gotoxy(60,21);
	cout<<"numero n;"<<endl;
	gotoxy(60,22);
	cout<<"n.entrada();"<<endl;
	gotoxy(60,23);
	cout<<"n.imprimir();"<<endl;
	gotoxy(60,24);
	cout<<"}"<<endl;
}
void parcial::cali(int n)
{
	if(n>5)
		cout<<"Aprobado"<<endl;
	else
		cout<<"Reprobado"<<endl;
}
void parcial::codigo_cali()
{
	
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(60,1);
	cout<<"#include<iostream.h><<endl";
	gotoxy(60,2);
	cout<<"class calificacion"<<endl;
	gotoxy(60,3);
	cout<<"{"<<endl;
	gotoxy(60,4);
	cout<<"public:"<<endl;
	gotoxy(60,5);
	cout<<"void cal(int);"<<endl;
	gotoxy(60,6);
	cout<<"};"<<endl;
	gotoxy(60,7);
	cout<<"void calificacion::cal(int n)"<<endl;
	gotoxy(60,8);
	cout<<"{"<<endl;
	gotoxy(60,9);
	cout<<"if (n>5)"<<endl;
	gotoxy(60,10);
	cout<<"cout<<\"aprobado\"<<endl;"<<endl;
	gotoxy(60,11);
	cout<<"else"<<endl;
	gotoxy(60,12);
	cout<<"cout<<\"reprobado\"<<endl;"<<endl;
	gotoxy(60,13);
	cout<<"}"<<endl;
	gotoxy(60,14);
	cout<<"void main ()"<<endl;
	gotoxy(60,15);
	cout<<"{"<<endl;
	gotoxy(60,16);
	cout<<"calificacion c;"<<endl;
	gotoxy(60,17);
	cout<<"int num;"<<endl;
	gotoxy(60,18);
	cout<<"cout<<\"ingrese la  calificacion\"<<endl;"<<endl;
	gotoxy(60,19);
	cout<<"cin>>num;"<<endl;
	gotoxy(60,20);
	cout<<"c.cal(num);"<<endl;
	gotoxy(60,21);
	cout<<"}"<<endl;
}
void parcial::factorial_poo()
{
	res=1;
	cout<<"Ingrese el numero"<<endl;
	cin>>num;
	for(cont=1;cont<=num; cont++)
	{
		res*=cont;
	}
}
void parcial::factorial_imp()
{
	cout<<"Resultado del factorial es:"<<res<<endl;
}
void parcial::codigo_factorial_poo()
{
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(65,1);
	cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);
	cout<<"class factorial"<<endl;
	gotoxy(65,3);
	cout<<"{"<<endl;
	gotoxy(65,4);
	cout<<"public:"<<endl;
	gotoxy(65,5);
	cout<<"	 void fac_f();"<<endl;
	gotoxy(65,6);
	cout<<"  void imp();"<<endl;
	gotoxy(65,7);
	cout<<"private:"<<endl;
	gotoxy(65,8);
	cout<<"  int num,cont,res;"<<endl;
	gotoxy(65,9);
	cout<<"};"<<endl;
	gotoxy(65,10);
	cout<<"void parcial::fac_f()"<<endl;
	gotoxy(65,11);
	cout<<"{"<<endl;
	gotoxy(65,12);
	cout<<"	res=1;"<<endl;
	gotoxy(65,13);
	cout<<"	cout<<\"Ingrese el numero\"<<endl;"<<endl;
	gotoxy(65,14);
	cout<<"	cin>>num;"<<endl;
	gotoxy(65,15);
	cout<<"for(cont=1;cont<num; cont++)"<<endl;
	gotoxy(65,16);
	cout<<"{"<<endl;
	gotoxy(65,17);
	cout<<"res*=cont;"<<endl;
	gotoxy(65,18);
	cout<<"	}"<<endl;
	gotoxy(65,19);
	cout<<"}"<<endl;
	gotoxy(65,20);
	cout<<"void parcial::fac_imp()"<<endl;
	gotoxy(65,21);
	cout<<"{"<<endl;
	gotoxy(65,22);
	cout<<"	cout<<\"Resultado del factorial es:\"<<res<<endl;"<<endl;
	gotoxy(65,23);
	cout<<"}"<<endl;
	gotoxy(65,24);
	cout<<"void main()"<<endl;
	gotoxy(65,25);
	cout<<"{"<<endl;
	gotoxy(65,26);
	cout<<"	factorial f;"<<endl;
	gotoxy(65,27);
	cout<<"	f.fac_f();"<<endl;
	gotoxy(65,28);
	cout<<"	f.imp();"<<endl;
	gotoxy(65,29);
	cout<<"}"<<endl;
}



int main()
{
	parcial pa;
	bool salir=false;
	int opcion=0;
	int opcion_cuatrimestre=0;
	int opcion_parcial=0;
	int opcion_ejercicios_parcial1=0;
	int opcion_parcial2=0;;
	/*gotoxy(40,8);
	cout<<"INTRUCCIONES"<<endl;
	gotoxy(40,10);
	cout<<"El programa solo se manejara por numero reales 1 a 3"<<endl;
	gotoxy(40,12);
	cout<<"Si no hace como las intrucciones marcara error."<<endl;
	gotoxy(40,14);
	cout<<"Al acabar la ejecucion del ejercicio se mostrara el codigo del ejercicio"<<endl;
	gotoxy(40,16);
	cout<<"el programa fue optimizado para serlo mas simple y entendible al usuario,"<<endl;
	gotoxy(40,18);
	cout<<"Creando solo dos clases para todos los ejercicios,"<<endl;
	gotoxy(40,20);
	cout<<"uno llamado parcial 1 y otro parcial 2 eso es todo"<<endl;
	gotoxy(40,22);
	cout<<"GRACIAS"<<endl;
	Sleep(15000);*/
	while(!salir)
	{ 
		//inicio de primer while menu principal
		system("CLS");
		gotoxy(80,1);
		cout<<"Fecha  "<<" 8 de diciembre de 2019"<<endl;
		gotoxy(80,2);
		cout<<"Alumno  "<<"Ricardo Altamirano sanchez"<<endl;
		gotoxy(80,3);
		cout<<"Ingeneria en sistemas computacionales"<<endl;
		gotoxy(80,4);
		cout<<"4-A"<<endl;
		gotoxy(40,8);
		cout<<"PROYECTO DE PROGRAMACION DE POO!!"<<endl;
		
		gotoxy(40,10);
		cout<<" 1 Entrar al menu"<<endl;
		gotoxy(40,12);
		cout<<" 2 salir de menu"<<endl;
		gotoxy(40,14);
		cin>>opcion;
		
		if(opcion ==1)
		{//primer if
			
			
			
			while(opcion_parcial!=3)//menu del los parciales
			{
				system("CLS");
				gotoxy(80,1);
				cout<<"Fecha  "<<" 8 de diciembre de 2019"<<endl;
				gotoxy(80,2);
				cout<<"Alumno  "<<"Ricardo Altamirano sanchez"<<endl;
				gotoxy(80,3);
				cout<<"Ingeneria en sistemas computacionales"<<endl;
				gotoxy(80,4);
				cout<<"4-A"<<endl;
				gotoxy(40,8);
				cout<<"PRACTICAS DEL CUATRIMESTRE"<<endl;
				gotoxy(40,10);
				cout<<" 1:Primer parcial"<<endl;
				gotoxy(40,12);
				cout<<" 2:Segundo parcial"<<endl;
				gotoxy(40,14);
				cout<<" 3:Regresar"<<endl;
				cin>>opcion_parcial;
				
				
				
				if(opcion_parcial==1)
				{//inico del menu de cuatrimestre
					while(opcion_ejercicios_parcial1!=8)
					{//10
						system("CLS");
						gotoxy(80,1);
						cout<<"Fecha  "<<" 8 de diciembre de 2019"<<endl;
						gotoxy(80,2);
						cout<<"Alumno  "<<"Ricardo Altamirano sanchez"<<endl;
						gotoxy(80,3);
						cout<<"Ingeneria en sistemas computacionales"<<endl;
						gotoxy(80,4);
						cout<<"4-A"<<endl;
						gotoxy(40,4);
						cout<<"PRIMER PARCIAL EJERCIOS"<<endl;
						gotoxy(40,6);
						cout<<"1:Factorial de un numero"<<endl;
						gotoxy(40,8);
						cout<<"2:Hola mundo"<<endl;
						gotoxy(40,10);
						cout<<"3:Imprimir numero entero"<<endl;
						gotoxy(40,12);
						cout<<"4:Pedir numero entero"<<endl;
						gotoxy(40,14);
						cout<<"5:Pedir numero en poo"<<endl;
						gotoxy(40,16);
						cout<<"6:Ingrese calificacion"<<endl;
						gotoxy(40,18);
						cout<<"7:Factorial en poo"<<endl;
						gotoxy(40,20);
						cout<<"8:Salir"<<endl;
						cin>>opcion_ejercicios_parcial1;
						
						switch(opcion_ejercicios_parcial1)
						{//inico de procedimientos de ejercios del switch 5
							
						case 1 :
							system("CLS");
							pa.factorial();
							pa.codigo_fac();
							system("pause");
							break;
						case 2:
							system("CLS");
							pa.hola();
							pa.codigo_hola();
							system("pause");
							break;
						case 3:
							system("CLS");
							pa.imprimir_variable();
							pa.codigo_variable();
							system("pause");
							break;
						case 4:
							system("CLS");
							pa.pedir_datos_num();
							pa.codigo_num();
							system("pause");
							break;
						case 5:
							system("CLS");
							pa.entrada();
							pa.imprimir();
							pa.codigo_num_po();
							system("pause");
							break;
						case 6:
							system("CLS");
							int num;
							cout<<"ingrese la  calificacion"<<endl;
							cin>>num;
							pa.cali(num);
							pa.codigo_cali();
							system("pause");
							break;
						case 7:
							system("CLS");
							pa.factorial_poo();
							pa.factorial_imp();
							pa.codigo_factorial_poo();
							system("pause");
							break;
						}//fin del switch del menu de procedimiento del switch 5 
						
						
					}//10
					if(opcion_parcial==2)
					{
						while(opcion_parcial2!=8){
							
							
							system("CLS");
							gotoxy(90,1);
							cout<<"Fecha  "<<" 8 de diciembre de 2019"<<endl;
							gotoxy(90,2);
							cout<<"Alumno  "<<"Ricardo Altamirano sanchez"<<endl;
							gotoxy(90,3);
							cout<<"Ingeneria en sistemas computacionales"<<endl;
							gotoxy(90,4);
							cout<<"4-A"<<endl;
							gotoxy(50,2);
							cout<<"SEGUNDO PARCIAL EJERCICIOS";
							cin>>opcion_parcial2;
						}
					}
					if(opcion== 3)
					{
						salir=true;
						
					}
					
					
				}//fin del switch del menu del cuatrimestre
				
				
				
				
			}//fin del menu de los parciales
			
			
			
			
			
			
		}//fin del menu del programas
		
		
		
		if(opcion==2)
		{
			
			system("CLS");
			gotoxy(40,10);
			cout<<"Adios"<<endl;
			salir=true;
		}
		
	}//fin del primer while fin de menu principal
	
	
	
	system("pause");
	return 0;	
	
}
