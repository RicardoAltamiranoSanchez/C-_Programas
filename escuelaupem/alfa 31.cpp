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
void portada()
{    
	gotoxy(40,3);
	cout<<"ESCUELA:UNIVERSIDAD PRIVADA DEl ESTADO DE MEXICO"<<endl;
	gotoxy(40,6);
	cout<<"NOMBRE:RICARDO ALTAMIRANO SANCHEZ"<<endl;
	gotoxy(40,9);
	cout<<"MATERIA:PROGRAMACION ORIENTADA A OBJETOS"<<endl;
	gotoxy(40,12);
	cout<<"GRADO:4-A"<<endl;
	gotoxy(40,15);
	cout<<"TURNO:SABATINO"<<endl;
	gotoxy(40,18);
	cout<<"PROFESOR:JULIO CESAR PINTO MARTIN"<<endl;
	gotoxy(40,21);
	cout<<"PROYECTO DE PROGRAMACION ORIENTADA A OBJETOS:"<<endl;
	
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
cout<<" void fac_f();"<<endl;
gotoxy(65,6);
cout<<" void imp();"<<endl;
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
	

class parcial_2
{
private:
	int arreglo[100];
	int n;
	int num1,num2,num3;
	int res;
	int mayor,menor;
	int lado1,lado2,lado3,triP,triA;
	int ladoc,cuaP,cuaA;
	int base,altura,recP,recA;
	float diametro,radio,cirP,cirA;
	float grados,gradosc_f,gradosc_k,gradosf_c,gradosf_k,gradosk_c,gradosk_f;
	int decimetro,centimetro,milimetro;
	float metro, pu,pie,decametro,hectometro,kilometro;
	long pulgada,pie2,yardas,millas;
	int suma;
public:
	parcial_2();
	~parcial_2();
	void sumar_3();
	void sumar_3(int,int,int);
	int sumar_3r(int,int,int);
	void imprimir_3();
	void codigo_3_void();
	void codigo_3_para();
	void codigo_3_refe();
	void pedir_datos();
	void cal_mayor();
	void cal_mayor(int,int,int);
	void cal_menor(int,int,int);
	void cal_menor();
	int cal_mayor_re(int,int,int);
	int cal_menor_re(int,int,int);
	void imprimir_ma_me();
	void codigo_mayor_menor_void();
	void codigo_mayor_menor_para();
	void codigo_mayor_menor_refe();
	void pedir_datos_figuras();
	void cuadralo();
	void rectangulo();
	void triangulo();
	void circulo();
	void cuadralo(int);
	void rectangulo(int,int);
	void triangulo(int,int,int);
	void circulo(float);
	int cuadralo_peri(int);
	int rectangulo_peri(int,int);
	int triangulo_peri(int,int,int);
	float circulo_peri(float);
	int cuadralo_area(int);
	int rectangulo_area(int,int);
	int triangulo_area(int,int,int);
	float circulo_area(float);
	void codigo_figuras_void();
	void codigo_figuras_para();
	void codigo_figuras_refe();
	void pedir_datos_grados();
	void celcius();
	void fahrenheit();
	void kelvin();
	void celcius(float);
	void fahrenheit(float);
	void kelvin(float);
	float celcius_fahrenheit(float);
	float celcius_kelvin(float);
	float fahrenheit_celcius(float);
	float fahrenheit_kelvin(float);
	float kelvin_celcius(float);
	float kelvin_fahrenheit(float);
	void codigo_grados_vacio();
	void codigo_grados_para();
	void codigo_grados_refe();
	void pedir_datos_metros();
	void centi();
	void deci();
	void mili();
	void imprimir_datos_metros();
	void centi(int);
	void deci(int);
	void mili(int);	
	int centi_r(int);
	int deci_r(int);
	int mili_r(int);
	void codigo_metro_void();
	void codigo_metro_para();
	void codigo_metro_refe();
	void metro_pulgada();
	void metro_pie();
	void imprimir_datos_metros_pu_pie();
	void metro_pulgada(float);
	void metro_pie(float);
	float metro_pulgada_r(float);
	float metro_pie_r(float);
	void codigo_metros_pu_pie_void();
	void codigo_metros_pu_pie_para();
	void codigo_metros_pu_pie_refe();
	void conversion();
	void imprimir_datos_h_d_k();
	void conversion(float);
	float conversion_r(float);
	void codigo_ej7_void();
	void codigo_ej7_para();
	void codigo_ej7_refe();
	float deca(float);
	float hect(float);
	float kilo(float);
	void pedir_pulgadas();
	void conversion_pulgadas();
	void imprimir_pulgadas();
	void conversion_pulgadas(long);
	long pi(long);
	long ya(long);
	long mi(long);
	void codigo_pulgada_void();
	void codigo_pulgada_para();
	void codigo_pulgada_refe();
	void arreglo_llenar();
	void arreglo_llenar(int[],int);
	void arreglo_mostrar();
	void arreglo_mostrar(int);
	void codigo_arreglo_void();
	void codigo_arreglo_para();
	void codigo_arreglo_refe();
	void arreglo_suma();
	void arreglo_suma_mostrar(int[]);
	void arreglo_suma_mostrar();
	void arreglo_suma(int[]);
	void arreglo_suma(int [], int&);
	void codigo_arreglo_suma_void();
	void codigo_arreglo_suma_para();
	void codigo_arreglo_suma_refe();
	
};
parcial_2::parcial_2()
{
	num1=0;
	num2=0;
	num3=0;
    res=0;
	mayor=0;
	menor=0;
	lado1=0,lado2=0,lado3=0,triP=0,triA=0;
	ladoc=0,cuaP=0,cuaA=0;
	base=0,altura=0,recP=0,recA=0;
	diametro=0,radio=0,cirP=0,cirA=0;
	grados=gradosc_f=gradosc_k=gradosf_c=gradosf_k=gradosk_c=gradosk_f=0;
	pu=pie=metro=decimetro=centimetro=milimetro=0;
	decametro=hectometro=kilometro=0;
	pulgada=pie2=yardas=millas=0;
	for (n=0;n<100; n++)
	{
		arreglo[n]=0;
	}
	n=0;
	suma=0;
}
void parcial_2::sumar_3()
{
	cout<<"Ingrese un numero entero"<<endl;
	cin>>num1;
	cout<<"Ingrese un numero entero"<<endl;
	cin>>num2;
	cout<<"Ingrese un numero entero"<<endl;
	cin>>num3;
	res=num1+num2+num3;
}
void parcial_2::sumar_3(int n,int n2,int n3)
{
	res=n+n2+n3;
}
int parcial_2::sumar_3r(int n1,int n2,int n3)
{
	return n1+n2+n3;
}

void parcial_2::imprimir_3()
{
	cout<<"La suma de los tres numeros es:"<<res<<endl;
}
void parcial_2::codigo_3_void()
{   
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(65,2);
	cout<<"include<iosteam.h>"<<endl;
	gotoxy(65,3);
		cout<<"class numero"<<endl;
		gotoxy(65,4);
		cout<<"{"<<endl;
		gotoxy(65,5);
		cout<<"private:"<<endl;
		gotoxy(65,6);
		cout<<"	int num1,num2,num3;"<<endl;
		gotoxy(65,7);
		cout<<"	int res;"<<endl;
		gotoxy(65,8);
		cout<<"public:"<<endl;
		gotoxy(65,9);
		cout<<"	void sumar();"<<endl;
		gotoxy(65,10);
		cout<<"	void imprimir();"<<endl;
		gotoxy(65,11);
		cout<<"};"<<endl;
		gotoxy(65,12);
		cout<<"void numero::sumar()"<<endl;
		gotoxy(65,13);
		cout<<"{"<<endl;
		gotoxy(65,14);
		cout<<"cout<<\"Ingrese un numero entero\"<<endl;"<<endl;
		gotoxy(65,15);
		cout<<"cin>>num1;"<<endl;
		gotoxy(65,16);
		cout<<"cout<<\"Ingrese un numero entero\"<<endl;"<<endl;
		gotoxy(65,17);
		cout<<"cin>>num2;"<<endl;
		gotoxy(65,18);
		cout<<"cout<<\"Ingrese un numero entero\"<<endl;"<<endl;
		gotoxy(65,19);
		cout<<"	cin>>num3;"<<endl;
		gotoxy(65,20);
		cout<<"res=num1+num2+num3;"<<endl;
		gotoxy(65,21);
		cout<<"}"<<endl;
		gotoxy(65,22);
		cout<<"void numero::imprimir()"<<endl;
		gotoxy(65,23);
		cout<<"{"<<endl;
		gotoxy(65,24);
		cout<<"cout<<\"La suma de los tres numeros es:\"<<res<<endl;"<<endl;
		gotoxy(65,25);
		cout<<"}"<<endl;
		gotoxy(65,26);
		cout<<"void main()"<<endl;
		gotoxy(65,27);
		cout<<"{"<<endl;
		gotoxy(65,28);
		cout<<"	numero n;"<<endl;
		gotoxy(65,29);
		cout<<"	n.sumar();"<<endl;
		gotoxy(65,30);
		cout<<"	n.imprimir();"<<endl;
		gotoxy(65,31);
		cout<<"}"<<endl;
	
}
void parcial_2::codigo_3_para()
{
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(65,2);
	cout<<"include<iosteam.h>"<<endl;
	gotoxy(65,3);
	cout<<"class numero"<<endl;
	gotoxy(65,4);
	cout<<"{"<<endl;
	gotoxy(65,5);
	cout<<"private:"<<endl;
	gotoxy(65,6);
	cout<<"	int res;"<<endl;
	gotoxy(65,7);
	cout<<"public:"<<endl;
	gotoxy(65,8);
	cout<<"	void sumar(int,int,int);"<<endl;
	gotoxy(65,9);
	cout<<"	void imprimir();"<<endl;
	gotoxy(65,10);
	cout<<"};"<<endl;
	gotoxy(65,11);
	cout<<"void numero::sumar(int n,int n2,int n3)"<<endl;
	gotoxy(65,12);
	cout<<"{"<<endl;
	gotoxy(65,13);
    cout<<"res=n+n2+n3;"<<endl;
	cout<<"}"<<endl;
	gotoxy(65,14);
	cout<<"void numero::imprimir()"<<endl;
	gotoxy(65,15);
	cout<<"{"<<endl;
	gotoxy(65,16);
	cout<<"cout<<\"La suma de los tres numeros es:\"<<res<<endl;"<<endl;
	gotoxy(65,17);
	cout<<"}"<<endl;
	gotoxy(65,18);
	cout<<"void main()"<<endl;
	gotoxy(65,19);
	cout<<"{"<<endl;
	gotoxy(65,20);
	cout<<"numero n;"<<endl;
	gotoxy(65,21);
	cout<<"int nu1,nu2,nu3"<<endl;
	gotoxy(65,22);
	cout<<"cout<<\"Ingrese un numero entero\"<<endl;"<<endl;
	gotoxy(65,23);
	cout<<"cin>>num1;"<<endl;
	gotoxy(65,24);
	cout<<"cout<<\"Ingrese un numero entero\"<<endl;"<<endl;
	gotoxy(65,25);
	cout<<"cin>>num2;"<<endl;
	gotoxy(65,26);
	cout<<"cout<<\"Ingrese un numero entero\"<<endl;"<<endl;
	gotoxy(65,27);
	cout<<"cin>>num3;"<<endl;
	gotoxy(65,28);
	cout<<"n.sumar(nu1,nu2,nu3);"<<endl;
	gotoxy(65,29);
	cout<<"n.imprimir();"<<endl;
	gotoxy(65,30);
	cout<<"}"<<endl;
	
}
void parcial_2::codigo_3_refe()
{
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(65,1);
	cout<<"include<<iostream.h>>"<<endl;
	gotoxy(65,2);
	cout<<"class numero"<<endl;
	gotoxy(65,3);
	cout<<"{"<<endl;
	gotoxy(65,4);
	cout<<"public:"<<endl;
	gotoxy(65,5);
	cout<<"int suma(int,int,int);"<<endl;
	gotoxy(65,6);
	cout<<"};"<<endl;
	gotoxy(65,7);
	cout<<"int numero::suma(int n,int n2,int n3)"<<endl;
	gotoxy(65,8);
	cout<<"{"<<endl;
	gotoxy(65,9);
	cout<<"	return n+n2+n3;"<<endl;
	gotoxy(65,10);
	cout<<"}"<<endl;
	gotoxy(65,11);
	cout<<"void main()"<<endl;
	gotoxy(65,12);
	cout<<"{"<<endl;
	gotoxy(65,13);
	cout<<"numero nu;"<<endl;
	gotoxy(65,14);
	cout<<"int n1,n2,n3;"<<endl;
	gotoxy(65,15);
	cout<<"cout<<\"Digite un numero\"<<endl;"<<endl;
	gotoxy(65,16);
	cout<<"cin>>n1;"<<endl;
	gotoxy(65,17);
	cout<<"cout<<\"Digite un numero\"<<endl;"<<endl;
	gotoxy(65,18);
	cout<<"cin>>n2;"<<endl;
	gotoxy(65,19);
	cout<<"cout<<\"Digite un numero\"<<endl;"<<endl;
	gotoxy(65,20);
	cout<<"cin>>n3;"<<endl;
	gotoxy(65,21);
	cout<<"cout<<\"El resultado es:\"<<nu.suma(n1,n2,n3)<<endl;"<<endl;
	gotoxy(65,22);
	cout<<"}"<<endl;
}
void parcial_2::pedir_datos()
{
	cout<<"Digite un numero"<<endl;
	cin>>num1;
	cout<<"Digite un numero"<<endl;
	cin>>num2;
	cout<<"Digite un numero"<<endl;
	cin>>num3;
}
void parcial_2::cal_mayor()
{
	if(num1>num2 && num1>num3)
	{
		mayor=num1;
	}
	if(num2>num1 && num2>num3)
	{
		mayor=num2;
	}
	if(num3>num1 && num3>num2)
	{
		mayor=num3;
	}
}

void parcial_2::cal_mayor(int n1,int n2,int n3)
{
	if(n1>n2 && n1>n3)
	{
		mayor=n1;
	}
	if(n2>n1 && n2>n3)
	{
		mayor=n2;
	}
	if(n3>n1 && n3>n2)
	{
		mayor=n3;
	}
	
}
int parcial_2::cal_mayor_re(int n1,int n2,int n3)
{
	if(n1>n2 && n1>n3)
	{
		return n1;
	}
	if(n2>n1 && n2>n3)
	{
		return n2;
	}
	if(n3>n1 && n3>n2)
	{
		return n3;
	}
}
	
void parcial_2::cal_menor()
{
	if(num1<num2 && num1<num3)
	{
		menor=num1;
	}
	if(num2<num1 && num2<num3)
	{
		menor=num2;
	}
	if(num3<num1 && num3<num2)
	{
		menor=num3;
	}
}
void parcial_2::cal_menor(int n1,int n2,int n3)
{
	if(n1<n2 && n1<n3)
	{
		menor=n1;
	}
	if(n2<n1 && n2<n3)
	{
		menor=n2;
	}
	if(n3<n1 && n3<n2)
	{
		menor=n3;
	}
}
int  parcial_2::cal_menor_re(int n1,int n2,int n3)
{
	if(n1<n2 && n1<n3)
	{
		return n1;
	}
	if(n2<n1 && n2<n3)
	{
		return n2;
	}
	if(n3<n1 && n3<n2)
	{
		return n3;
	}
}


void parcial_2::imprimir_ma_me()
{
	cout<<"El numero mayor es"<<mayor<<endl;
	cout<<"El numero menor es"<<menor<<endl;
}
void parcial_2::codigo_mayor_menor_void()
{ 
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(65,1);
	cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);
	cout<<"class numero{"<<endl;
	gotoxy(65,3);
		cout<<"private:"<<endl;
		gotoxy(65,4);
		cout<<"int num1,num2,num3;"<<endl;
		gotoxy(65,5);
		cout<<"int mayor,menor;"<<endl;
		gotoxy(65,6);
		cout<<"public:"<<endl;
		gotoxy(65,7);
		cout<<"void pedir_datos();"<<endl;
		gotoxy(65,8);
		cout<<"void cal_mayor();"<<endl;
		gotoxy(65,9);
		cout<<"void cal_menor();"<<endl;
		gotoxy(65,10);
		cout<<"void imp_datos();"<<endl;
		gotoxy(65,11);
		cout<<"};"<<endl;
		gotoxy(65,12);
	cout<<"void numero::pedir_datos()"<<endl;
	gotoxy(65,13);
		cout<<"{"<<endl;
		gotoxy(65,14);
		cout<<"   cout<<\"Digite un numero\"<<endl;"<<endl;
		gotoxy(65,15);
		cout<<"   cin>>num1;"<<endl;
		gotoxy(65,16);
		cout<<"   cout<<\"Digite un numero\"<<endl;"<<endl;
		gotoxy(65,17);
		cout<<"   cin>>num2;"<<endl;
		gotoxy(65,18);
		cout<<"   cout<<\"Digite un numero\"<<endl;"<<endl;
		gotoxy(65,19);
		cout<<"   cin>>num3;"<<endl;
		gotoxy(65,20);
		cout<<"}"<<endl;
		gotoxy(65,22);
	cout<<"void numero::cal_mayor()"<<endl;
	gotoxy(65,23);
		cout<<"{"<<endl;
		gotoxy(65,24);
		cout<<"  if(num1>num2 && num1>num3)"<<endl;
		gotoxy(65,25);
			cout<<" {"<<endl;
			gotoxy(65,26);
			cout<<"  mayor=num1;"<<endl;
			gotoxy(65,27);
			cout<<" }"<<endl;
			gotoxy(65,28);
		cout<<" if(num2>num1 && num2>num3)"<<endl;
		gotoxy(65,29);
		   cout<<" {"<<endl;
		   gotoxy(65,30);
			cout<<"  mayor=num2;"<<endl;
			gotoxy(65,32);
			cout<<" }"<<endl;
			gotoxy(65,33);
		cout<<" if(num3>num1 && num3>num2)"<<endl;
		gotoxy(65,34);
		   cout<<" {"<<endl;
		   gotoxy(65,35);
			cout<<"  mayor=num3;"<<endl;
			gotoxy(65,36);
			cout<<" }"<<endl;
		gotoxy(65,37);
		cout<<"}"<<endl;
		gotoxy(65,38);
	cout<<"void numero::cal_menor()"<<endl;
	gotoxy(65,39);
		cout<<"{"<<endl;
		gotoxy(65,40);
		cout<<" if(num1<num2 && num1<num3)"<<endl;
		gotoxy(65,41);
			cout<<" {"<<endl;
			gotoxy(65,42);
			cout<<"  menor=num1;"<<endl;
			gotoxy(65,43);
			cout<<" }"<<endl;
			gotoxy(65,44);
		cout<<" if(num2<num1 && num2<num3)"<<endl;
		gotoxy(65,45);
		   cout<<" {"<<endl;
		   gotoxy(65,46);
			cout<<"  menor=num2;"<<endl;
			gotoxy(65,47);
			cout<<" }"<<endl;
			gotoxy(65,48);
		cout<<" if(num3<num1 && num3<num2)"<<endl;
		gotoxy(65,49);
		   cout<<" {"<<endl;
		   gotoxy(65,50);
			cout<<"  menor=num3;"<<endl;
			gotoxy(65,51);
			cout<<" }"<<endl;
			gotoxy(65,52);
		cout<<"}"<<endl;
		gotoxy(65,53);
	cout<<"void numero::imp_datos()"<<endl;
	gotoxy(65,54);
		cout<<" {"<<endl;
		gotoxy(65,55);
		cout<<"  cout<<\"El numero mayor es\"<<mayor<<endl;"<<endl;
		gotoxy(65,56);
		cout<<"  cout<<\"El numero menor es\"<<menor<<endl;"<<endl;
		gotoxy(65,57);
		cout<<" }"<<endl;
		gotoxy(65,58);
	cout<<"void main()"<<endl;
	gotoxy(65,59);
		cout<<" {"<<endl;
		gotoxy(65,60);
		cout<<"numero n;"<<endl;
		gotoxy(65,61);
		cout<<"n.pedir_datos();"<<endl;
		gotoxy(65,62);
		cout<<"n.cal_mayor();"<<endl;
		gotoxy(65,63);
		cout<<"n.cal_menor();"<<endl;
		gotoxy(65,64);
		cout<<"n.imp_datos();"<<endl;
		gotoxy(65,65);
      	cout<<"}"<<endl;
	
}


void parcial_2::codigo_mayor_menor_para()
{ 
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(65,1);
	cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);
	cout<<"class numero{"<<endl;
	gotoxy(65,3);
	cout<<"private:"<<endl;
	gotoxy(65,4);
	cout<<"  int mayor,menor;"<<endl;
	gotoxy(65,5);
	cout<<"public:"<<endl;
	gotoxy(65,6);
	cout<<"  void cal_mayor(int,int,int);"<<endl;
	gotoxy(65,7);
	cout<<"  void cal_menor(int,int,int);"<<endl;
	gotoxy(65,8);
	cout<<"  void imp_datos();"<<endl;
	gotoxy(65,9);
	cout<<"};"<<endl;
	gotoxy(65,10);
	cout<<"void numero::cal_mayor(int num1,int num2,int num3)"<<endl;
	gotoxy(65,11);
	cout<<" {"<<endl;
	gotoxy(65,12);
	cout<<"  if(num1>num2 && num1>num3)"<<endl;
	gotoxy(65,13);
	cout<<" {"<<endl;
	gotoxy(65,14);
	cout<<"  mayor=num1;"<<endl;
	gotoxy(65,15);
	cout<<" }"<<endl;
	gotoxy(65,16);
	cout<<"  if(num2>num1 && num2>num3)"<<endl;
	gotoxy(65,17);
	cout<<" {"<<endl;
	gotoxy(65,18);
	cout<<"  mayor=num2;"<<endl;
	gotoxy(65,19);
	cout<<" }"<<endl;
	gotoxy(65,20);
	cout<<"  if(num3>num1 && num3>num2)"<<endl;
	gotoxy(65,21);
	cout<<" {"<<endl;
	gotoxy(65,22);
	cout<<"  mayor=num3;"<<endl;
	gotoxy(65,23);
	cout<<" }"<<endl;
	gotoxy(65,24);
	cout<<"}"<<endl;
	gotoxy(65,25);
	cout<<"void numero::cal_menor(int num1,int num2,int num3)"<<endl;
	gotoxy(65,26);
	cout<<" {"<<endl;
	gotoxy(65,27);
	cout<<"  if(num1<num2 && num1<num3)"<<endl;
	gotoxy(65,28);
	cout<<" {"<<endl;
	gotoxy(65,29);
	cout<<" menor=num1;"<<endl;
	gotoxy(65,30);
	cout<<" }"<<endl;
	gotoxy(65,31);
	cout<<"  if(num2<num1 && num2<num3)"<<endl;
	gotoxy(65,32);
	cout<<" {"<<endl;
	gotoxy(65,33);
	cout<<"  menor=num2;"<<endl;
	gotoxy(65,34);
	cout<<" }"<<endl;
	gotoxy(65,35);
	cout<<"  if(num3<num1 && num3<num2)"<<endl;
	gotoxy(65,36);
	cout<<" {"<<endl;
	gotoxy(65,37);
	cout<<"  menor=num3;"<<endl;
	gotoxy(65,38);
	cout<<" }"<<endl;
	gotoxy(65,39);
	cout<<"}"<<endl;
	gotoxy(65,40);
	cout<<"void numero::imp_datos()"<<endl;
	gotoxy(65,41);
	cout<<" {"<<endl;
	gotoxy(65,42);
	cout<<"  cout<<\"El numero mayor es\"<<mayor<<endl;"<<endl;
	gotoxy(65,43);
	cout<<"  cout<<\"El numero menor es\"<<menor<<endl;"<<endl;
	gotoxy(65,44);
	cout<<" }"<<endl;
	gotoxy(65,45);
	cout<<"void main()"<<endl;
	gotoxy(65,46);
	cout<<" {"<<endl;
	gotoxy(65,47);
	cout<<"  int n1,n2,n3"<<endl;
	gotoxy(65,48);
	cout<<"  cout<<\"digite un numero\"<<endl;"<<endl;
	gotoxy(65,49);
	cout<<"  cin>>n1;	"<<endl;
	gotoxy(65,50);
	cout<<"  cout<<\"digite un numero\"<<endl;"<<endl;
	gotoxy(65,51);
	cout<<"  cin>>n2;"<<endl;
	gotoxy(65,52);
	cout<<"  cout<<\"digite un numero\"<<endl;"<<endl;
	gotoxy(65,53);
	cout<<"  cin>>n3;"<<endl;
	gotoxy(65,54);
	cout<<"  numero n;"<<endl;
	gotoxy(65,55);
	cout<<"  n.cal_mayor(n1,n2,n3);"<<endl;
	gotoxy(65,56);
	cout<<"  n.cal_menor(n1,n2,n3);"<<endl;
	gotoxy(65,57);
	cout<<"  n.imprimir_datos();"<<endl;
	gotoxy(65,58);
	cout<<" }"<<endl;
}
void parcial_2::codigo_mayor_menor_refe()
{ 
	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(65,1);
	cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);
	cout<<"class numero{"<<endl;
	gotoxy(65,3);
	cout<<"public:"<<endl;
	gotoxy(65,4);
	cout<<"  int cal_mayor(int,int,int);"<<endl;
	gotoxy(65,5);
	cout<<"  int cal_menor(int,int,int);"<<endl;
	gotoxy(65,6);
	cout<<"};"<<endl;
	gotoxy(65,7);
	cout<<"int numero::cal_mayor(int num1,int num2,int num3)"<<endl;
	gotoxy(65,8);
	cout<<" {"<<endl;
	gotoxy(65,9);
	cout<<"  if(num1>num2 && num1>num3)"<<endl;
	gotoxy(65,10);
	cout<<" {"<<endl;
	gotoxy(65,11);
	cout<<"  return num1;"<<endl;
	gotoxy(65,12);
	cout<<" }"<<endl;
	gotoxy(65,13);
	cout<<"  if(num2>num1 && num2>num3)"<<endl;
	gotoxy(65,14);
	cout<<" {"<<endl;
	gotoxy(65,15);
	cout<<"  return num2;"<<endl;
	gotoxy(65,16);
	cout<<" }"<<endl;
	gotoxy(65,17);
	cout<<"  if(num3>num1 && num3>num2)"<<endl;
	gotoxy(65,18);
	cout<<" {"<<endl;
	gotoxy(65,19);
	cout<<"  return num3;"<<endl;
	gotoxy(65,20);
	cout<<" }"<<endl;
	gotoxy(65,21);
	cout<<"}"<<endl;
	gotoxy(65,22);
	cout<<"int numero::cal_menor(int num1,int num2,int num3)"<<endl;
	gotoxy(65,23);
	cout<<" {"<<endl;
	gotoxy(65,24);
	cout<<"  if(num1<num2 && num1<num3)"<<endl;
	gotoxy(65,25);
	cout<<" {"<<endl;
	gotoxy(65,26);
	cout<<" return num1;"<<endl;
	gotoxy(65,27);
	cout<<" }"<<endl;
	gotoxy(65,28);
	cout<<"  if(num2<num1 && num2<num3)"<<endl;
	gotoxy(65,29);
	cout<<" {"<<endl;
	gotoxy(65,30);
	cout<<"  return num2;"<<endl;
	gotoxy(65,31);
	cout<<" }"<<endl;
	gotoxy(65,32);
	cout<<"  if(num3<num1 && num3<num2)"<<endl;
	gotoxy(65,33);
	cout<<" {"<<endl;
	gotoxy(65,34);
	cout<<"  return num3;"<<endl;
	gotoxy(65,35);
	cout<<" }"<<endl;
	gotoxy(65,36);
	cout<<"}"<<endl;
	gotoxy(65,37);
	cout<<"void main()"<<endl;
	gotoxy(65,38);
	cout<<" {"<<endl;
	gotoxy(65,39);
	cout<<"  int n1,n2,n3"<<endl;
	gotoxy(65,40);
	cout<<"  cout<<\"digite un numero\"<<endl;"<<endl;
	gotoxy(65,41);
	cout<<"  cin>>n1;	"<<endl;
	gotoxy(65,42);
	cout<<"  cout<<\"digite un numero\"<<endl;"<<endl;
	gotoxy(65,43);
	cout<<"  cin>>n2;"<<endl;
	gotoxy(65,44);
	cout<<"  cout<<\"digite un numero\"<<endl;"<<endl;
	gotoxy(65,45);
	cout<<"  cin>>n3;"<<endl;
	gotoxy(65,46);
	cout<<"  numero n;"<<endl;
	gotoxy(65,47);
	cout<<"  cout<<\"el numero mayor es:\"<<n.cal_mayor(n1,n2,n3)<<endl;"<<endl;
	gotoxy(65,48);
	cout<<"  cout<<\"el numero menor es:\"<<n.cal_menor(n1,n2,n3);<<endl;"<<endl;
	gotoxy(65,49);
	cout<<" }"<<endl;
}
void parcial_2::pedir_datos_figuras()
{
     
	cout<<"Para el cuadralo"<<endl;
	cout<<"Digite su lado"<<endl;
	cin>>ladoc;
	cout<<"\nPara el triangulo"<<endl;
	cout<<"Digite su primer lado"<<endl;
	cin>>lado1;
	cout<<"Digite su segundo lado"<<endl;
	cin>>lado2;
	cout<<"Digite su tercer lado"<<endl;
	cin>>lado3;
	cout<<"\nPara el rectangulo"<<endl;
	cout<<"Digite su base "<<endl;
	cin>>base;
	cout<<"Digite su altura"<<endl;
	cin>>altura;
	cout<<"\nPara el circulo"<<endl;
	cout<<"Digite su diametro"<<endl;
	cin>>diametro;
}
void parcial_2::cuadralo()
{
	cuaP=4*ladoc;
	cuaA=ladoc*2;
	cout<<"EL perimetro del cuadralo es:"<<cuaP<<endl;
	cout<<"EL perimetro el area del cuadralo es:"<<cuaA<<endl;
}
void parcial_2::cuadralo(int ladoc)
{
	cuaP=4*ladoc;
	cuaA=ladoc*2;
	cout<<"EL perimetro del cuadralo es:"<<cuaP<<endl;
	cout<<"EL perimetro el area del cuadralo es:"<<cuaA<<endl;
}
int parcial_2::cuadralo_peri(int ladoc)
{
	return 4*ladoc;

}
int parcial_2::cuadralo_area(int ladoc)
{
	
	return ladoc*2;
	
}
void parcial_2::rectangulo()
{
	recP=(2*base)+(2*altura);
	recA=base*altura;
	cout<<"EL perimetro del rectangulo es:"<<recP<<endl;
	cout<<"EL perimetro el area del rectangulo es:"<<recA<<endl;
}
void parcial_2::rectangulo(int base,int altura)
{
	recP=(2*base)+(2*altura);
	recA=base*altura;
	cout<<"EL perimetro del rectangulo es:"<<recP<<endl;
	cout<<"EL perimetro el area del rectangulo es:"<<recA<<endl;
}
int parcial_2::rectangulo_peri(int base,int altura)
{
	return (2*base)+(2*altura);
}
int parcial_2::rectangulo_area(int base,int altura)
{
	
	return base*altura;

}
void parcial_2::triangulo()
{
	triP=lado1+lado2+lado3;
	triA=lado1*lado2;
	cout<<"EL perimetro del triangulo es:"<<triP<<endl;
	cout<<"EL perimetro el area del triangulo es:"<<triA<<endl;
}
void parcial_2::triangulo(int lado1,int lado2,int lado3)
{
	triP=lado1+lado2+lado3;
	triA=lado1*lado2;
	cout<<"EL perimetro del triangulo es:"<<triP<<endl;
	cout<<"EL perimetro el area del triangulo es:"<<triA<<endl;
}
int parcial_2::triangulo_peri(int lado1,int lado2,int lado3)
{
	return lado1+lado2+lado3;
	
}
int parcial_2::triangulo_area(int lado1,int lado2,int lado3)
{
	
	return lado1*lado2;
	
}


void parcial_2::circulo()
{
	cirP=diametro*3.1416;
	int radio;
	radio=diametro/2;
	cirA=3.1416*(radio*radio);
	cout<<"EL perimetro del circulo es:"<<cirP<<endl;
	cout<<"EL perimetro el area del circulo es:"<<cirA<<endl;
}	

void parcial_2::circulo(float diametro)
{
	cirP=diametro*3.1416;
	int radio;
	radio=diametro/2;
	cirA=3.1416*(radio*radio);
	cout<<"EL perimetro del circulo es:"<<cirP<<endl;
	cout<<"EL perimetro el area del circulo es:"<<cirA<<endl;
}	

float parcial_2::circulo_peri(float diametro)
{
	return diametro*3.1416;
	
}	

float parcial_2::circulo_area(float diametro)
{
	
	int radio;
	radio=diametro/2;
	return 3.1416*(radio*radio);
	
	
}	
void parcial_2::codigo_figuras_void()
{  gotoxy(65,0);
     cout<<"CODIGO:"<<endl;
	 gotoxy(65,1);
	 cout<<"#include<iostream.h>"<<endl;
	 gotoxy(65,2);
	 cout<<"class figura"<<endl;
		gotoxy(65,3);
	cout<<"{"<<endl;
			gotoxy(65,4);
			cout<<"private:"<<endl;
		gotoxy(65,5);
		cout<<"  int lado1,lado2,lado3,triaP,triA;"<<endl;
		gotoxy(65,6);
		cout<<"	 int ladoc,cuaP,cuaA;"<<endl;
		gotoxy(65,7);
		cout<<"	 int base,altura,recP,recA;"<<endl;
		gotoxy(65,8);
		cout<<"  float diametro,radio,cirP,cirA;"<<endl;
		gotoxy(65,9);
		cout<<"public:"<<endl;
		gotoxy(65,10);
		cout<<"  void pedir_datos();"<<endl;
		gotoxy(65,11);
		cout<<"  void cuadralo();"<<endl;
		gotoxy(65,12);
		cout<<"  void rectangulo();"<<endl;
		gotoxy(65,13);
		cout<<"  void triangulo();"<<endl;
		gotoxy(65,14);
		cout<<"  void circulo();"<<endl;
		gotoxy(65,15);
		cout<<"};"<<endl;
		gotoxy(65,16);
		cout<<"void figura::pedir_datos_figuras()"<<endl;
		gotoxy(65,17);
	cout<<"{"<<endl;
			gotoxy(65,18);
			cout<<"  cout<<\"Para el cuadralo\"<<endl;"<<endl;
		gotoxy(65,19);
		cout<<"  cout<<\"Digite su lado\"<<endl;"<<endl;
		gotoxy(65,20);
		cout<<"  cin>>ladoc;"<<endl;
		gotoxy(65,21);
		cout<<"  cout<<\"Para el triangulo\"<<endl;"<<endl;
		gotoxy(65,22);
		cout<<"  cout<<\"Digite su primer lado\"<<endl;"<<endl;
		gotoxy(65,23);
		cout<<"  cin>>lado1;"<<endl;
		gotoxy(65,24);
		cout<<"  cout<<\"Digite su segundo lado\"<<endl;"<<endl;
		gotoxy(65,25);
		cout<<"  cin>>lado2;"<<endl;
		gotoxy(65,26);
		cout<<"  cout<<\"Digite su tercer lado\"<<endl;"<<endl;
		gotoxy(65,27);
		cout<<"  cin>>lado3;"<<endl;
		gotoxy(65,28);
		cout<<"  cout<<\"Para el rectangulo\"<<endl;"<<endl;
		gotoxy(65,29);
		cout<<"  cout<<\"Digite su base \"<<endl;"<<endl;
		gotoxy(65,30);
		cout<<"  cin>>base;"<<endl;
		gotoxy(65,31);
		cout<<"  cout<<\"Digite su altura\"<<endl;"<<endl;
		gotoxy(65,32);
		cout<<"  cin>>altura;"<<endl;
		gotoxy(65,33);
		cout<<"  cout<<\"Para el circulo\"<<endl;"<<endl;
		gotoxy(65,34);
		cout<<"  cout<<\"Digite su diametro\"<<endl;"<<endl;
		gotoxy(65,35);
		cout<<"  cin>>diametro;"<<endl;
		gotoxy(65,36);
		cout<<"}"<<endl;
		gotoxy(65,37);
		cout<<"void figura::cuadralo()"<<endl;
		gotoxy(65,38);
	cout<<"{"<<endl;
			gotoxy(65,39);
			cout<<"  cuaP=4*ladoc;"<<endl;
		gotoxy(65,40);
		cout<<"  cuaA=lado*2;"<<endl;
		gotoxy(65,41);
		cout<<"  cout<<\"EL perimetro del cuadralo es:\"<<cuaP<<endl;"<<endl;
		gotoxy(65,42);
		cout<<"  cout<<\"EL perimetro el area del cuadralo es:\"<<cuaA<<endl;"<<endl;                                                                                                                                                                                                                                                                                                                                                                                 
			gotoxy(65,43);
		cout<<"}"<<endl;
		gotoxy(65,44);
		cout<<"void figura::rectangulo()"<<endl;
		gotoxy(65,45);
	cout<<"{"<<endl;
			gotoxy(65,46);
			cout<<"  recP=(2*base)+(2*altura);"<<endl;
		gotoxy(65,47);
		cout<<"  recA=base*altura;"<<endl;
		gotoxy(65,48);
		cout<<"  cout<<\"EL perimetro del rectangulo es:\"<recP<<endl;"<<endl;
		gotoxy(65,49);
		cout<<"  cout<<\"EL perimetro el area del rectangulo es:\"<<recA<<endl;"<<endl;
		gotoxy(65,50);
		cout<<"}"<<endl;
		gotoxy(65,51);
		cout<<"void parcial_2::triangulo()"<<endl;
		gotoxy(65,52);
	cout<<"{"<<endl;
			gotoxy(65,53);
			cout<<"  triaP=lado1+lado2+lado3;"<<endl;
		gotoxy(65,54);
		cout<<"  triA=lado*lado2;"<<endl;
		gotoxy(65,55);
		cout<<"  cout<<\"EL perimetro del triangulo es:\"<<triaP<<endl;"<<endl;
		gotoxy(65,56);
		cout<<"  cout<<\"EL perimetro el area del triangulo es:\"<<triA<<endl;"<<endl;
		gotoxy(65,57);
		cout<<"}"<<endl;
		gotoxy(65,58);
		cout<<"void parcial_2::circulo()"<<endl;
		gotoxy(65,59);
	cout<<"{"<<endl;
			gotoxy(65,60);
			cout<<"  cirP=diametro*3.1416;"<<endl;
		gotoxy(65,61);
		cout<<"  int radio;"<<endl;
		gotoxy(65,62);
		cout<<"  radio=diametro/2;"<<endl;
			gotoxy(65,63);
		cout<<"  cirA=3.1416*(radio*radio);"<<endl;
			gotoxy(65,64);
		cout<<"  cout<<\"EL perimetro del circulo es:\"<<cirP<<endl;"<<endl;
			gotoxy(65,65);
		cout<<"  cout<<\"EL perimetro el area del circulo es:\"<<cirA<<endl;"<<endl;
			gotoxy(65,66);
		cout<<"}"<<endl;
		gotoxy(65,67);
		cout<<"void main()"<<endl;
		gotoxy(65,68);
	cout<<"{"<<endl;
			gotoxy(65,69);
			cout<<"  figura f;"<<endl;
			gotoxy(65,70);
		cout<<"  f.pedir_datos();"<<endl;
			gotoxy(65,71);
		cout<<"  f.cuadralo();"<<endl;
			gotoxy(65,72);
		cout<<"  f.rectangulo();"<<endl;
			gotoxy(65,73);
		cout<<"  f.triangulo();"<<endl;
			gotoxy(65,74);
		cout<<"  f.circulo();"<<endl;
			gotoxy(65,75);
	cout<<"}"<<endl;
	
}
void parcial_2::codigo_figuras_para()
{

	gotoxy(65,0);
	cout<<"CODIGO:"<<endl;
	gotoxy(65,1);
	cout<<"#include <windows.h>"<<endl;
	gotoxy(65,2);
		cout<<"class figura{"<<endl;
		gotoxy(65,3);	
		cout<<"private:"<<endl;
		gotoxy(65,4);
		cout<<"	int cuap,cuaa;"<<endl;
		gotoxy(65,5);
		gotoxy(65,6);cout<<"	int trip,tria;"<<endl;
		gotoxy(65,7);cout<<"	int recp,reca;"<<endl;
		gotoxy(65,8);cout<<"	float radio,cirp,cira;"<<endl;
		
		gotoxy(65,9);cout<<"public:"<<endl;
		
		gotoxy(65,10);cout<<"	void cuadralo(int);"<<endl;
		gotoxy(65,11);cout<<"	void rectangulo(int,int);"<<endl;
		gotoxy(65,12);cout<<"	void triangulo()int,int,int);"<<endl;
		gotoxy(65,13);cout<<"	void circulo(float);"<<endl;
		
		gotoxy(65,14);cout<<"};"<<endl;
	
	
	
		gotoxy(65,15);cout<<"void figura::cuadralo(int n)"<<endl;
		gotoxy(65,16);cout<<"{"<<endl;
		
		gotoxy(65,17);cout<<"	cuap=4*n;"<<endl;
		gotoxy(65,18);cout<<"	cout<<\"El perimetro del cuadralo es :\"<<cuap<<endl;"<<endl;
		gotoxy(65,19);cout<<"	cuaa=n^2;"<<endl;
		gotoxy(65,20);cout<<"	cout<<\"El area del cuadralo es :\"<<cuaa<<endl;"<<endl;
		gotoxy(65,21);cout<<"}"<<endl;
		gotoxy(65,22);cout<<"void figura::rectangulo(int n,int n2)"<<endl;
		gotoxy(65,23);cout<<"{"<<endl;
		
		gotoxy(65,24);cout<<"	recp=(2*n)+(2*n2);"<<endl;
		gotoxy(65,25);cout<<"	cout<<\"El perimetro del rectangulo es :\"<<cuap<<endl;"<<endl;
		gotoxy(65,26);cout<<"	reca=n*n2;"<<endl;
		gotoxy(65,27);cout<<"	cout<<\"El area del rectangulo es :\"<<reca<<endl;"<<endl;
		gotoxy(65,28);cout<<"}"<<endl;
		gotoxy(65,29);cout<<"void figura::triangulo(int n1,int n2,int n3)"<<endl;
		gotoxy(65,30);cout<<"{"<<endl;
		
		gotoxy(65,31);cout<<"	trip=n1+n2+n3;"<<endl;
		gotoxy(65,32);cout<<"	cout<<\"El perimetro del triangulo es :\"<<trip<<endl;"<<endl;
		gotoxy(65,33);cout<<"	tria=n1*n2;"<<endl;
		gotoxy(65,34);cout<<"	cout<<\"El area del triangulo es :\"<<tria<<endl;"<<endl;
		
		gotoxy(65,35);cout<<"}"<<endl;
	
	
		gotoxy(65,36);cout<<"void figura::circulo(float n)"<<endl;
		gotoxy(65,37);cout<<"{"<<endl;
		gotoxy(65,38);cout<<"	cirp=n*3.1416;"<<endl;
		gotoxy(65,39);cout<<"	radio=n/2;"<<endl;
		gotoxy(65,40);cout<<"	cout<<\"El perimetro de circulo :\"<<cirp<<endl;"<<endl;
		gotoxy(65,41);cout<<"	cira=3.1416*(radio*radio);"<<endl;
		gotoxy(65,42);cout<<"	cout<<\"El area del circulo es :\"<<cira<<endl;"<<endl;
		
		gotoxy(65,43);cout<<"}"<<endl;
		gotoxy(65,44);cout<<"void main()"<<endl;
		gotoxy(65,45);cout<<"{"<<endl;
		
		gotoxy(65,46);cout<<"	int ladoC;"<<endl;
		gotoxy(65,47);cout<<"	int lado1,lado2,lado3;"<<endl;
		gotoxy(65,48);cout<<"	int base,altura;"<<endl;
		gotoxy(65,49);cout<<"	float diametro;"<<endl;
		
		gotoxy(65,50);cout<<"	cout<<\"para el cuadralo\"<<endl;"<<endl;
		gotoxy(65,51);cout<<"	cout<<\"digite su lado :\"<<endl;"<<endl;
		gotoxy(65,52);cout<<"	cin>>ladoC;"<<endl;
		gotoxy(65,53);cout<<"	cout<<\"para el triangulo\"<<endl;"<<endl;
		gotoxy(65,54);cout<<"	cout<<\"digite primer lado :\"<<endl;"<<endl;
		gotoxy(65,55);cout<<"	cin>>lado1;"<<endl;
		gotoxy(65,56);cout<<"	cout<<\"digite segundo lado :\"<<endl;"<<endl;
		gotoxy(65,57);cout<<"	cin>>lado2;"<<endl;
		gotoxy(65,58);cout<<"	cout<<\"digite tercer lado :\"<<endl;"<<endl;
		gotoxy(65,59);cout<<"	cin>>lado3;"<<endl;
		gotoxy(65,60);cout<<"	cout<<\"para el rectangulo\"<<endl;"<<endl;
		gotoxy(65,61);cout<<"	cout<<\"digite su base:\"<<endl;"<<endl;
		gotoxy(65,62);cout<<"	cin>>base;"<<endl;
		gotoxy(65,63);cout<<"	cout<<\"digite su altura :\"<<endl;"<<endl;
		gotoxy(65,64);cout<<"	cin>>altura;"<<endl;
		gotoxy(65,65);cout<<"	cout<<\"para el circulo\"<<endl;"<<endl;
		gotoxy(65,66);cout<<"	cout<<\"digite su diametro:\"<<endl;"<<endl;
		gotoxy(65,67);cout<<"	cin>>diametro;"<<endl;
		gotoxy(65,68);cout<<"	figura f;"<<endl;
		gotoxy(65,69);cout<<"	f.cuadralo(int ladoC);"<<endl;
		gotoxy(65,70);cout<<"	f.rectangulo(int base,int altura);"<<endl;
		gotoxy(65,71);cout<<"	f.triangulo(int lado1,int lado2,int lado3);"<<endl;
		gotoxy(65,72);cout<<"	f.circulo(int diametro);"<<endl;
	
		
		gotoxy(65,73);cout<<"}"<<endl;
}

void parcial_2::codigo_figuras_refe()
{   
	
	
	gotoxy(65,0);

cout<<"CODIGO:"<<endl;
gotoxy(65,1);
cout<<"#include<iostream.h>"<<endl;
gotoxy(65,2);
cout<<"class figura"<<endl;
gotoxy(65,3);
cout<<"{"<<endl;
gotoxy(65,4);
cout<<"public:"<<endl;
gotoxy(65,5);
cout<<"  int cuadralo_peri(int);"<<endl;
gotoxy(65,6);
cout<<"  int rectangulo_peri(int,int);"<<endl;
gotoxy(65,7);
cout<<"  int triangulo_peri(int,int,int);"<<endl;
gotoxy(65,8);
cout<<"  float circulo_peri(float);"<<endl;
gotoxy(65,9);
	cout<<"  int cuadralo_area(int);"<<endl;
gotoxy(65,10);
cout<<"  int rectangulo_area(int,int);"<<endl;
gotoxy(65,11);
cout<<"  int triangulo_area(int,int,int);"<<endl;
gotoxy(65,12);
cout<<"  float circulo_area(float);"<<endl;
gotoxy(65,13);
cout<<"};"<<endl;
gotoxy(65,14);
cout<<"int figura::cuadralo_peri(int ladoc )"<<endl;
gotoxy(65,15);
cout<<"{"<<endl;
gotoxy(65,18);
cout<<"  return 4*ladoc;"<<endl;
gotoxy(65,19);
cout<<"}"<<endl;
gotoxy(65,20);
cout<<"int figura::cuadralo_area(int ladoc )"<<endl;
gotoxy(65,21);
cout<<"{"<<endl;
gotoxy(65,22);
cout<<"  return ladoc*2;"<<endl;
gotoxy(65,23);
cout<<"}"<<endl;
gotoxy(65,24);
cout<<"int figura::rectangulo_peri(int base,int altura)"<<endl;
gotoxy(65,25);
cout<<"{"<<endl;
gotoxy(65,26);
cout<<" return (2*base)+(2*altura)"<<endl;
gotoxy(65,27);
cout<<"}"<<endl;
gotoxy(65,28);
cout<<"int figura::rectangulo_area(int base,int altura)"<<endl;
gotoxy(65,29);
cout<<"{"<<endl;
gotoxy(65,30);
cout<<"  return base*altura;"<<endl;
gotoxy(65,31);
cout<<"}"<<endl;
gotoxy(65,32);
cout<<"int figura::triangulo_peri(int lado1,int lado2,int lado3)"<<endl;
gotoxy(65,33);
cout<<"{"<<endl;
gotoxy(65,34);
cout<<"  return lado1+lado2+lado3;"<<endl;
	gotoxy(65,35);
cout<<"}"<<endl;
gotoxy(65,36);
cout<<"int figura::triangulo_area(int lado1,int lado2,int lado3)"<<endl;
gotoxy(65,37);
cout<<"{"<<endl;
gotoxy(65,38);
cout<<"  return lado*lado2;"<<endl;
gotoxy(65,39);
cout<<"}"<<endl;

gotoxy(65,40);
cout<<"float figuras::circulo_peri(float diametro)"<<endl;
gotoxy(65,41);
cout<<"{"<<endl;
gotoxy(65,42);
cout<<"  return diametro*3.1416;"<<endl;
gotoxy(65,43);
cout<<"}"<<endl;
gotoxy(65,44);
cout<<"float figuras::circulo_area(float diametro)"<<endl;
gotoxy(65,45);
cout<<"{"<<endl;
gotoxy(65,46);
cout<<"  int radio;"<<endl;
gotoxy(65,47);
cout<<"  radio=diametro/2;"<<endl;
gotoxy(65,48);
cout<<"  return 3.1416*(radio*radio);"<<endl;
gotoxy(65,49);
cout<<"}"<<endl;

gotoxy(65,50);
cout<<"void main()"<<endl;
gotoxy(65,51);
cout<<"{"<<endl;
gotoxy(65,52);
cout<<"int ladoc,lado1,lado2,lado3,base,altura;"<<endl;
gotoxy(65,53);
cout<<"float diametro"<<endl;
gotoxy(65,54);
cout<<"  cout<<\"Para el cuadralo\"<<endl;"<<endl;
gotoxy(65,55);
cout<<"  cout<<\"Digite su lado\"<<endl;"<<endl;
gotoxy(65,56);
cout<<"  cin>>ladoc;"<<endl;
gotoxy(65,57);
cout<<"  cout<<\"Para el triangulo\"<<endl;"<<endl;
gotoxy(65,58);
cout<<"  cout<<\"Digite su primer lado\"<<endl;"<<endl;
gotoxy(65,59);
cout<<"  cin>>lado1;"<<endl;
gotoxy(65,60);
cout<<"  cout<<\"Digite su segundo lado\"<<endl;"<<endl;
gotoxy(65,61);
cout<<"  cin>>lado2;"<<endl;
gotoxy(65,62);
cout<<"  cout<<\"Digite su tercer lado\"<<endl;"<<endl;
gotoxy(65,63);
cout<<"  cin>>lado3;"<<endl;
gotoxy(65,64);
cout<<"  cout<<\"Para el rectangulo\"<<endl;"<<endl;
gotoxy(65,65);
cout<<"  cout<<\"Digite su base \"<<endl;"<<endl;
gotoxy(65,66);
cout<<"  cin>>base;"<<endl;
gotoxy(65,67);
cout<<"  cout<<\"Digite su altura\"<<endl;"<<endl;
gotoxy(65,68);
cout<<"  cin>>altura;"<<endl;
gotoxy(65,69);
cout<<"  cout<<\"Para el circulo\"<<endl;"<<endl;
gotoxy(65,70);
cout<<"  cout<<\"Digite su diametro\"<<endl;"<<endl;
gotoxy(65,71);
cout<<"  cin>>diametro;"<<endl;
gotoxy(65,72);
cout<<"  figura f;"<<endl;
gotoxy(50,73);
cout<<"cout<<\"el perimetro del cuadralo es:\"<<f.cuadralo_peri(ladoc)<<endl;;"<<endl;
gotoxy(50,74);
cout<<"cout<<\"el area del cuadralo es:\"<<f.cuadralo_area(ladoc)<<endl;;"<<endl;
gotoxy(50,75);
cout<<"cout<<\"el perimetro del rectangulo es:\"<<f.rectangulo_peri(base,altura)<<endl;;"<<endl;
gotoxy(50,76);
cout<<"cout<<\"el area del rectangulo es:\"<<f.rectangulo_area(base,altura)<<endl;;"<<endl;
gotoxy(50,77);
cout<<"cout<<\"el perimetro del triangulo es:\"<<f.triangulo_peri(lado1,lado2,lado3)<<endl;;"<<endl;
gotoxy(50,78);
cout<<"cout<<\"el area del triangulo es:\"<<f.triangulo+_area(lado1,lado2,lado3)<<endl;;"<<endl;
gotoxy(50,79);
cout<<"cout<<\"el perimetro del circulo es:\"<<f.circulo_peri(diametro)<<endl;;"<<endl;
gotoxy(50,80);
cout<<"cout<<\"el area del circulo es:\"<<f.circulo_area(diametro)<<endl;;"<<endl;
gotoxy(50,81);
cout<<"}"<<endl;

}
void parcial_2::pedir_datos_grados()
{
	cout<<"Dame los grados :"<<endl;
	cin>>grados;
	
}
void parcial_2::celcius()
{
	gradosc_f=(grados * 1.8) + 32;
	cout<<"De celcius a fahrenheit:"<<gradosc_f<<endl;
	gradosc_k=grados + 273.15;
	cout<<"de celcius a kelvin:"<<gradosc_k<<endl;
	
	
}
void parcial_2::fahrenheit()
{
	gradosf_c=(grados-32)/ 1.8;
	cout<<"De fahrenheit a celcius:"<<gradosf_c<<endl;
	gradosf_k=(5/9) *(grados - 32) + 273.15;
	cout<<"de fahrenheit  kelvin:"<<gradosf_k<<endl;
	
	
}
void parcial_2::kelvin()
{
	gradosk_c=grados-273.15;
	cout<<"De kelvin a celcius:"<<gradosk_c<<endl;
	gradosk_f=1.8*(grados - 273.15) + 32;
	cout<<"de kelvin a fahrenheit:"<<gradosk_f<<endl;
	
	
}
void parcial_2::celcius(float grados)
{
	gradosc_f=(grados * 1.8) + 32;
	cout<<"De celcius a fahrenheit:"<<gradosc_f<<endl;
	gradosc_k=grados + 273.15;
	cout<<"de celcius a kelvin:"<<gradosc_k<<endl;
	
	
}
void parcial_2::fahrenheit(float grados)
{
	gradosf_c=(grados-32)/ 1.8;
	cout<<"De fahrenheit a celcius:"<<gradosf_c<<endl;
	gradosf_k=(5/9) *(grados - 32) + 273.15;
	cout<<"de fahrenheit  kelvin:"<<gradosf_k<<endl;
	
	
}
void parcial_2::kelvin(float grados)
{
	gradosk_c=grados-273.15;
	cout<<"De kelvin a celcius:"<<gradosk_c<<endl;
	gradosk_f=1.8*(grados - 273.15) + 32;
	cout<<"de kelvin a fahrenheit:"<<gradosk_f<<endl;
	
	
}

float parcial_2::celcius_fahrenheit(float c)
{
	return  (c * 1.8) + 32;
	
}
float parcial_2::celcius_kelvin(float c)
{
	return c + 273.15;
}
float parcial_2::fahrenheit_celcius(float f)
{
	return (f-32)/ 1.8;
}
float parcial_2::fahrenheit_kelvin(float f)
{
	return (5/9) *(f - 32) + 273.15;
}
float parcial_2::kelvin_celcius(float k)
{
	return k-273.15;
}
float parcial_2::kelvin_fahrenheit(float k)
{
	return 1.8*(k - 273.15) + 32;
}
void parcial_2::codigo_grados_vacio()
{

	gotoxy(65,2);cout<<"CODIGO:"<<endl;
	gotoxy(65,3);cout<<"#include<windows.h>"<<endl;
	gotoxy(65,4);	cout<<"class temperatura"<<endl;
	gotoxy(65,5);	cout<<"{"<<endl;
	gotoxy(65,6);	cout<<"private:"<<endl;
	gotoxy(61,7);	cout<<"	float grados,gradoC_F,gradoC_K,gradoF_C,gradoF_K,gradoK_C,gradoK_F;"<<endl;
	gotoxy(65,8);	cout<<"public:"<<endl;
	
	gotoxy(65,9);	cout<<"	void pedir_datos();"<<endl;
	gotoxy(65,10);	cout<<"	void celcius();"<<endl;
	gotoxy(65,11);	cout<<"	void fahrenheit();"<<endl;
	gotoxy(65,12);	cout<<"	void kelvin();"<<endl;
		
		
	gotoxy(65,13);	cout<<"};"<<endl;
	
	gotoxy(65,14);	cout<<"void temperatura::pedir_datos()"<<endl;
	gotoxy(65,15);	cout<<"{"<<endl;
	gotoxy(65,16);	cout<<"	cout<<\"Dame los grados :\"<<endl;"<<endl;
	gotoxy(65,17);	cout<<"	cin>>grados;"<<endl;
		
	gotoxy(65,18);	cout<<"}"<<endl;
	gotoxy(65,19);	cout<<"void temperatura::celcius()"<<endl;
	gotoxy(65,20);	cout<<"{"<<endl;
	gotoxy(65,21);	cout<<"	gradoC_F=(grados * 1.8) + 32;"<<endl;
	gotoxy(65,22);	cout<<"	cout<<\"De celcius a fahrenheit:\"<<gradoC_F<<endl;"<<endl;
	gotoxy(65,23);	cout<<"	gradoC_K=grados + 273.15;"<<endl;
	gotoxy(65,24);	cout<<"	cout<<\"de celcius a kelvin:\"<<gradoC_K<<endl;"<<endl;
		
		
	gotoxy(65,25);	cout<<"}"<<endl;
	gotoxy(65,26);	cout<<"void temperatura::fahrenheit()"<<endl;
	gotoxy(65,27);	cout<<"{"<<endl;
	gotoxy(65,28);	cout<<"	gradoF_C=(grados-32)/ 1.8;"<<endl;
	gotoxy(65,29);	cout<<"	cout<<\"De fahrenheit a celcius:\"<<gradoF_C<<endl;"<<endl;
	gotoxy(65,30);	cout<<"	gradoF_K=(5/9) *(grados - 32) + 273.15;"<<endl;
	gotoxy(65,31);	cout<<"	cout<<\"de fahrenheit  kelvin:\"<<gradoF_K<<endl;"<<endl;
		
		
	gotoxy(65,32);	cout<<"}"<<endl;
	gotoxy(65,33);	cout<<"void temperatura::kelvin()"<<endl;
	gotoxy(65,34);	cout<<"{"<<endl;
	gotoxy(65,35);	cout<<"	gradoK_C=grados-273.15;"<<endl;
	gotoxy(65,36);	cout<<"	cout<<\"De kelvin a celcius:\"<<gradoK_C<<endl;"<<endl;
	gotoxy(65,37);	cout<<"	gradoK_F=1.8*(grados - 273.15) + 32;"<<endl;
	gotoxy(65,38);	cout<<"	cout<<\"de kelvin a fahrenheit:\"<<gradoK_F<<endl;"<<endl;
		
		
	gotoxy(65,39);	cout<<"}"<<endl;
	gotoxy(65,40);	cout<<"void main()"<<endl;
	gotoxy(65,41);cout<<"{"<<endl;
		
	gotoxy(65,42);cout<<"	temperatura tem;"<<endl;
	gotoxy(65,43);cout<<"	tem.pedir_datos();"<<endl;
	gotoxy(65,44);cout<<"	tem.celcius();"<<endl;
	gotoxy(65,45);cout<<"	tem.fahrenheit();"<<endl;
	gotoxy(65,46);cout<<"	tem.kelvin();"<<endl;
	
	gotoxy(65,47);cout<<"}"<<endl;
	
	
}
void parcial_2::codigo_grados_refe()
{

	
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include <iostream.h>"<<endl;
	
	gotoxy(65,2);cout<<"class temperatura"<<endl;
	gotoxy(65,3);cout<<"{"<<endl;
	gotoxy(65,4);cout<<"public:	"<<endl;
	gotoxy(65,5);cout<<"	float celcius_fahrenheit(float);"<<endl;
	gotoxy(65,6);cout<<"	float celcius_kelvin(float);"<<endl;
	gotoxy(65,7);cout<<"	float fahrenheit_celcius(float);"<<endl;
	gotoxy(65,8);cout<<"	float fahrenheit_kelvin(float);"<<endl;
	gotoxy(65,9);cout<<"	float kelvin_celcius(float);"<<endl;
	gotoxy(65,10);cout<<"	float kelvin_fahrenheit(float);"<<endl;
	gotoxy(65,11);cout<<"};"<<endl;
	
	
	gotoxy(65,12);cout<<"float temperatura::celcius_fahrenheit(float c)"<<endl;
	gotoxy(65,13);cout<<"{"<<endl;
	gotoxy(65,14);cout<<"	return  (c * 1.8) + 32;"<<endl;
		
	gotoxy(65,15);cout<<"}"<<endl;
	gotoxy(65,16);cout<<"float temperatura::celcius_kelvin(float c)"<<endl;
	gotoxy(65,17);cout<<"{"<<endl;
	gotoxy(65,18);cout<<"	return c + 273.15;"<<endl;
	gotoxy(65,19);cout<<"}"<<endl;
	gotoxy(65,20);cout<<"float temperatura::fahrenheit_celcius(float f)"<<endl;
	gotoxy(65,21);cout<<"{"<<endl;
	gotoxy(65,22);cout<<"	return (f-32)/ 1.8;"<<endl;
	gotoxy(65,23);cout<<"}"<<endl;
	gotoxy(65,24);cout<<"float temperatura::fahrenheit_kelvin(float f)"<<endl;
	gotoxy(65,25);cout<<"{"<<endl;
	gotoxy(65,26);cout<<"	return (5/9) *(f - 32) + 273.15;"<<endl;
	gotoxy(65,27);cout<<"}"<<endl;
	gotoxy(65,28);cout<<"float temperatura::kelvin_celcius(float k)"<<endl;
	gotoxy(65,29);cout<<"{"<<endl;
	gotoxy(65,30);cout<<"	return k-273.15;"<<endl;
	gotoxy(65,31);cout<<"}"<<endl;
	gotoxy(65,32);cout<<"float temperatura::kelvin_fahrenheit(float k)"<<endl;
	gotoxy(65,33);cout<<"{"<<endl;
	gotoxy(65,34);cout<<"	return 1.8*(k - 273.15) + 32;"<<endl;
	gotoxy(65,35);cout<<"}"<<endl;
	gotoxy(65,36);cout<<"void main()"<<endl;
	gotoxy(65,37);cout<<"{"<<endl;
	gotoxy(65,38);cout<<"	float grados;"<<endl;
	gotoxy(65,39);cout<<"	cout<<\"Dame los grados :\"<<endl;"<<endl;
	gotoxy(65,40);cout<<"	cin>>grados;"<<endl;
	   	
	gotoxy(65,41);cout<<"temperatura tem;"<<endl;
		
	gotoxy(55,42);cout<<"cout<<\"de celcius a fahrenheit :\"<<tem.celcius_fahrenheit(grados)<<endl;"<<endl;
	gotoxy(55,43);cout<<"cout<<\"de celcius a kelvin :\"<<tem.celcius_kelvin(grados)<<endl;"<<endl;
	gotoxy(55,44);cout<<"cout<<\"de  fahrenheit celcius :\"<<tem.fahrenheit_celcius(grados)<<endl;"<<endl;
	gotoxy(55,45);cout<<"cout<<\"de fahrenheit a kelvin :\"<<tem.fahrenheit_kelvin(grados)<<endl;"<<endl;
	gotoxy(55,46);cout<<"cout<<\"de kelvin a celcius :\"<<tem.kelvin_celcius(grados)<<endl;"<<endl;
	gotoxy(55,47);cout<<"cout<<\"de kelvin a fahrenheit :\"<<tem.kelvin_fahrenheit(grados)<<endl;"<<endl;
		
	gotoxy(65,48);cout<<"}	"<<endl;
	
	
	
	
}
void parcial_2::codigo_grados_para()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);	cout<<"#include <iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"class temperatura"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(61,5);	cout<<"	float grados,gradoC_F,gradoC_K,gradoF_C,gradoF_K,gradoK_C,gradoK_F;"<<endl;
	gotoxy(65,6);	cout<<"public:"<<endl;
		
	gotoxy(65,7);	cout<<"	void celcius(float);"<<endl;
	gotoxy(65,8);	cout<<"	void fahrenheit(float);"<<endl;
	gotoxy(65,9);	cout<<"	void kelvin(float);"<<endl;
		
		
	gotoxy(65,10);	cout<<"};"<<endl;
	
	
	gotoxy(65,11);	cout<<"void temperatura::celcius(float grados)"<<endl;
	gotoxy(65,12);	cout<<"{"<<endl;
	gotoxy(65,13);	cout<<"	gradoC_F=(grados * 1.8) + 32;"<<endl;
	gotoxy(65,14);	cout<<"	cout<<\"De celcius a fahrenheit:\"<<gradoC_F<<endl;"<<endl;
	gotoxy(65,15);	cout<<"	gradoC_K=grados + 273.15;"<<endl;
	gotoxy(65,16);	cout<<"	cout<<\"de celcius a kelvin:\"<<gradoC_K<<endl;"<<endl;
		
		
	gotoxy(65,17);	cout<<"}"<<endl;
	gotoxy(65,18);	cout<<"void temperatura::fahrenheit(float grados)"<<endl;
	gotoxy(65,19);	cout<<"{"<<endl;
	gotoxy(65,20);	cout<<"	gradoF_C=(grados-32)/ 1.8;"<<endl;
	gotoxy(65,21);	cout<<"	cout<<\"De fahrenheit a celcius:\"<<gradoF_C<<endl;"<<endl;
	gotoxy(65,22);	cout<<"	gradoF_K=(5/9) *(grados - 32) + 273.15;"<<endl;
	gotoxy(65,23);	cout<<"	cout<<\"de fahrenheit  kelvin:\"<<gradoF_K<<endl;"<<endl;
		
		
	gotoxy(65,24);	cout<<"}"<<endl;
	gotoxy(65,25);	cout<<"void temperatura::kelvin(float grados)"<<endl;
	gotoxy(65,26);	cout<<"{"<<endl;
	gotoxy(65,27);	cout<<"	gradoK_C=grados-273.15;"<<endl;
	gotoxy(65,28);	cout<<"	cout<<\"De kelvin a celcius:\"<<gradoK_C<<endl;"<<endl;
	gotoxy(65,29);	cout<<"	gradoK_F=1.8*(grados - 273.15) + 32;"<<endl;
	gotoxy(65,30);	cout<<"	cout<<\"de kelvin a fahrenheit:\"<<gradoK_F<<endl;"<<endl;
		
		
	gotoxy(65,31);	cout<<"}"<<endl;
	gotoxy(65,32);	cout<<"void main()"<<endl;
	gotoxy(65,33);	cout<<"{"<<endl;
	gotoxy(65,34);	cout<<"	float grados;"<<endl;
	gotoxy(65,35);	cout<<"	cout<<\"Digite los grados\"<<endl;"<<endl;
		gotoxy(65,36);	cout<<"	cin>>grados;"<<endl;
		
		gotoxy(65,37);	cout<<"	temperatura tem;"<<endl;
		
		gotoxy(65,38);	cout<<"	tem.celcius(grados);"<<endl;
		gotoxy(65,39);	cout<<"	tem.fahrenheit(grados);"<<endl;
		gotoxy(65,40);	cout<<"	tem.kelvin(grados);"<<endl;
		gotoxy(65,41);cout<<"}"<<endl;
	
	
}
void parcial_2::pedir_datos_metros()
{
	cout<<"Digite los metros"<<endl;
	cin>>metro;
}
void parcial_2::imprimir_datos_h_d_k()
{
	cout<<"Decametro:"<<decametro<<endl;
	cout<<"hectometro:"<<hectometro<<endl;
	cout<<"kilometro:"<<kilometro<<endl;
}


void parcial_2::deci()
{
	decimetro=metro*10;
}
void parcial_2::centi()
{
	centimetro=metro*100;
}
void parcial_2::mili()
{
	milimetro=metro*1000;
}
void parcial_2::imprimir_datos_metros()
{
	cout<<"En decimetro son:"<<decimetro<<endl;
	cout<<"En centimetro son:"<<centimetro<<endl;
	cout<<"En milimetro son:"<<milimetro<<endl;
}


void parcial_2::deci(int metro)
{
	decimetro=metro*10;
}
void parcial_2::centi(int metro)
{
	centimetro=metro*100;
}
void parcial_2::mili(int metro)
{
	milimetro=metro*1000;
}
int parcial_2::deci_r(int metro)
{
	return metro*10;
}
int parcial_2::centi_r(int metro)
{
	return metro*100;
}
int parcial_2::mili_r(int metro)
{
	return metro*1000;
}

parcial_2::~parcial_2()
{
	cout<<""<<endl;
}
void parcial_2::codigo_metro_void()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);	cout<<"include<iostream.h>"<<endl;
	gotoxy(65,2);		cout<<"	class conversion"<<endl;
	gotoxy(65,3);		cout<<"{"<<endl;
	gotoxy(65,4);		cout<<"private:"<<endl;
	gotoxy(65,5);		cout<<"	int metro,decimetro,milimetro,centimetro;"<<endl;
	gotoxy(65,6);		cout<<"public:"<<endl;
	gotoxy(65,7);		cout<<"	void conversion();"<<endl;
	gotoxy(65,8);		cout<<"	void ~conversion()"<<endl;
	gotoxy(65,9);		cout<<"	void pedir_datos();"<<endl;
	gotoxy(65,10);		cout<<"	void centi();"<<endl;
	gotoxy(65,11);		cout<<"	void deci();"<<endl;
	gotoxy(65,12);		cout<<"	void mili();"<<endl;
	gotoxy(65,13);		cout<<"	void imp();"<<endl;
	gotoxy(65,14);		cout<<"};"<<endl;
	gotoxy(65,15);		cout<<"conversion::conversion()"<<endl;
	gotoxy(65,16);		cout<<"{"<<endl;
	gotoxy(65,17);		cout<<"	metro=0;"<<endl;
	gotoxy(65,18);		cout<<"	decimetro=0;"<<endl;
	gotoxy(65,19);		cout<<"	milimetro=0;"<<endl;
	gotoxy(65,20);		cout<<"	centimetro=0;"<<endl;
		
	gotoxy(65,21);		cout<<"}"<<endl;
	gotoxy(65,22);		cout<<"void conversion::pedir_datos()"<<endl;
	gotoxy(65,23);		cout<<"{"<<endl;
	gotoxy(65,24);		cout<<"	cout<<\"Digite los metros\"<<endl;"<<endl;
	gotoxy(65,25);		cout<<"	cin>>metro;"<<endl;
	gotoxy(65,26);		cout<<"}"<<endl;
	
	gotoxy(65,27);		cout<<"void conversion::deci()"<<endl;
	gotoxy(65,28);		cout<<"{"<<endl;
	gotoxy(65,29);		cout<<"	decimetro=metro*10;"<<endl;
	gotoxy(65,30);		cout<<"}"<<endl;
	gotoxy(65,31);		cout<<"void conversion::centi()"<<endl;
	gotoxy(65,32);		cout<<"{"<<endl;
	gotoxy(65,33);		cout<<"	centimetro=metro*100;"<<endl;
	gotoxy(65,34);		cout<<"}"<<endl;
	gotoxy(65,35);		cout<<"void conversion::mili()"<<endl;
	gotoxy(65,36);		cout<<"{"<<endl;
	gotoxy(65,37);		cout<<"	milimetro=metro*1000;;"<<endl;
	gotoxy(65,38);		cout<<"}"<<endl;
	gotoxy(65,39);		cout<<"conversion::~conversion()"<<endl;
	gotoxy(65,40);		cout<<"{"<<endl;
	gotoxy(65,41);		cout<<"	cout<<\"destructor\"<<<endl;"<<endl;
	gotoxy(65,42);		cout<<"}"<<endl;
	gotoxy(65,43);		cout<<"void conversion::imp()"<<endl;
	gotoxy(65,44);		cout<<"{"<<endl;
	gotoxy(65,45);		cout<<"	cout<<\"En decimetro son:\"<<decimetro<<endl;"<<endl;
	gotoxy(65,46);		cout<<"	cout<<\"En centimetro son:\"<<centimetro<<endl;"<<endl;
	gotoxy(65,47);		cout<<"	cout<<\"En milimetro son:\"<<milimetro<<endl;"<<endl;
	gotoxy(65,48);		cout<<"}"<<endl;
	gotoxy(65,49);		cout<<"void main()"<<endl;
	gotoxy(65,50);		cout<<"{"<<endl;
	gotoxy(65,51);		cout<<"	conversion co;"<<endl;
	gotoxy(65,52);		cout<<"	co.pedir_datos();"<<endl;
	gotoxy(65,53);		cout<<"	co.deci();"<<endl;
	gotoxy(65,54);		cout<<"	co.centi();"<<endl;
	gotoxy(65,55);		cout<<"	co.mili();"<<endl;
	gotoxy(65,56);		cout<<"	co.imp();"<<endl;
		
		
	gotoxy(65,57);		cout<<"}"<<endl;
}
void parcial_2::codigo_metro_para()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"	class conversion"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(65,5);	cout<<"	int metro,decimetro,milimetro,centimetro;"<<endl;
	gotoxy(65,6);	cout<<"public:"<<endl;
	gotoxy(65,7);	cout<<"	void conversion();"<<endl;
	gotoxy(65,8);	cout<<"	void ~conversion()"<<endl;
	gotoxy(65,9);	cout<<"	void centi(int);"<<endl;
	gotoxy(65,10);	cout<<"	void deci(int);"<<endl;
	gotoxy(65,11);	cout<<"	void mili(int);"<<endl;
	gotoxy(65,12);	cout<<"	void imp(int);"<<endl;
	gotoxy(65,13);	cout<<"};"<<endl;
	gotoxy(65,14);	cout<<"conversion::conversion()"<<endl;
	gotoxy(65,15);	cout<<"{"<<endl;
	gotoxy(65,16);	cout<<"	decimetro=0;"<<endl;
	gotoxy(65,17);	cout<<"	milimetro=0;"<<endl;
	gotoxy(65,18);	cout<<"	centimetro=0;"<<endl;
		
	gotoxy(65,19);cout<<"}"<<endl;
	gotoxy(65,20);cout<<"void conversion::deci(int  metro)"<<endl;
	gotoxy(65,21);cout<<"{"<<endl;
	gotoxy(65,22);cout<<"	decimetro=metro*10;"<<endl;
	gotoxy(65,23);cout<<"}"<<endl;
	gotoxy(65,24);cout<<"void conversion::centi(int metro)"<<endl;
	gotoxy(65,25);cout<<"{"<<endl;
	gotoxy(65,26);cout<<"	centimetro=metro*100;"<<endl;
	gotoxy(65,27);cout<<"}"<<endl;
	gotoxy(65,28);cout<<"void conversion::mili(int metro)"<<endl;
	gotoxy(65,29);cout<<"{"<<endl;
	gotoxy(65,30);cout<<"	milimetro=metro*1000;"<<endl;
	gotoxy(65,31);cout<<"}"<<endl;
	gotoxy(65,32);cout<<"void conversion::imp()"<<endl;
	gotoxy(65,33);cout<<"{"<<endl;
	gotoxy(65,34);cout<<"	cout<<\"En decimetro son:\"<<decimetro<<endl;"<<endl;
	gotoxy(65,35);cout<<"	cout<<\"En centimetro son:\"<<centimetro<<endl;"<<endl;
	gotoxy(65,36);cout<<"	cout<<\"En milimetro son:\"<<milimetro<<endl;"<<endl;
	gotoxy(65,37);cout<<"}"<<endl;
	gotoxy(65,38);cout<<"void conversion::~conversion()"<<endl;
	gotoxy(65,39);cout<<"{"<<endl;
	gotoxy(65,40);cout<<"	cout<<\"destructor\"<<endl;"<<endl;
	gotoxy(65,41);cout<<"}"<<endl;
	gotoxy(65,42);cout<<"void main()"<<endl;
	gotoxy(65,43);cout<<"{ "<<endl;
	gotoxy(65,44);cout<<"	int metro;"<<endl;
	gotoxy(65,45);cout<<"	cout<<\"Digite los metros\"<<endl;"<<endl;
	gotoxy(65,46);cout<<"	cin>>metro;"<<endl;
		
	gotoxy(65,47);cout<<"	conversion co;"<<endl;
	gotoxy(65,48);cout<<"	co.deci(metro);"<<endl;
	gotoxy(65,49);cout<<"	co.centi(metro);"<<endl;
	gotoxy(65,50);cout<<"	co.mili(metro);"<<endl;
	gotoxy(65,51);cout<<"	co.imp(metro);"<<endl;
	gotoxy(65,52);cout<<"}"<<endl;
	
}
void parcial_2::codigo_metro_refe()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	
	gotoxy(65,1);cout<<"include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"	class conversion"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"public:"<<endl;
	
	gotoxy(65,5);	cout<<"	void ~conversion()"<<endl;
	gotoxy(65,6);	cout<<"	int centi(int);"<<endl;
	gotoxy(65,7);	cout<<"	int deci(int);"<<endl;
	gotoxy(65,8);	cout<<"	int mili(int);"<<endl;
	gotoxy(65,9);	cout<<"};"<<endl;
	gotoxy(65,10);	cout<<"int conversion::deci(int metro)"<<endl;
	gotoxy(65,11);	cout<<"{"<<endl;
	gotoxy(65,12);	cout<<"	return metro*10;"<<endl;
	gotoxy(65,13);	cout<<"}"<<endl;
	gotoxy(65,14);	cout<<"int conversion::centi(int metro)"<<endl;
	gotoxy(65,15);	cout<<"{"<<endl;
	gotoxy(65,16);	cout<<"	return metro*100;"<<endl;
	gotoxy(65,17);	cout<<"}"<<endl;
	gotoxy(65,18);	cout<<"int conversion::mili(int metro)"<<endl;
	gotoxy(65,19);	cout<<"{"<<endl;
	gotoxy(65,20);	cout<<"	return metro*1000;"<<endl;
	gotoxy(65,21);	cout<<"}"<<endl;
	gotoxy(65,22);	cout<<"void conversion::~conversion()"<<endl;
	gotoxy(65,23);	cout<<"{"<<endl;
	gotoxy(65,24);	cout<<"	cout<<\"destructor\"<<endl;"<<endl;
	gotoxy(65,25);	cout<<"}"<<endl;
	gotoxy(65,26);	cout<<"void main()"<<endl;
	gotoxy(65,27);	cout<<"{ "<<endl;
	gotoxy(65,28);	cout<<"	int metro;"<<endl;
	gotoxy(65,29);	cout<<"	cout<<\"Digite los metros\"<<endl;"<<endl;
	gotoxy(65,30);	cout<<"	cin>>metro;"<<endl;
		
	gotoxy(65,31);	cout<<"	conversion co;"<<endl;
	gotoxy(65,32);	cout<<"	cout<<\"En decimetro son:\"<<co.deci(metro)<<endl;"<<endl;
	gotoxy(65,33);	cout<<"	cout<<\"En centimetro son:\"<<co.centi(metro)<<endl;"<<endl;
	gotoxy(65,34);	cout<<"	cout<<\"En milimetro son:\"<<co.mili(metro)<<endl;"<<endl;
	gotoxy(65,35);	cout<<"}"<<endl;
	
	
}

	
void parcial_2::metro_pulgada()
{
	pu=metro*1.70;
}
void parcial_2::metro_pie()
{
	
	pie=metro*39.7;
}
void parcial_2::imprimir_datos_metros_pu_pie()
{
	cout<<"de metro a pulgada:"<<pu<<endl;
	cout<<"de metro a pie:"<<pie<<endl;
}

void parcial_2::metro_pulgada(float metro)
{
	pu=metro*1.70;
}
void parcial_2::metro_pie(float metro)
{
	
	pie=metro*39.7;
}

float parcial_2::metro_pulgada_r(float metro)
{
	return metro*1.70;
}
float parcial_2::metro_pie_r(float metro)
{
	
	return metro*39.7;
}
void parcial_2::codigo_metros_pu_pie_void()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"	class metro"<<endl;
	gotoxy(65,3);	cout<<"	{"<<endl;
	gotoxy(65,4);	cout<<"	private:"<<endl;
	gotoxy(65,5);	cout<<"		float m,pu,pi;"<<endl;
	gotoxy(65,6);	cout<<"	public:"<<endl;
	gotoxy(65,7);	cout<<"		metro();"<<endl;
	gotoxy(65,8);	cout<<"		~metro();"<<endl;
	gotoxy(65,9);	cout<<"		void pedir_metros();"<<endl;
	gotoxy(65,10);	cout<<"		void metro_pulgada();"<<endl;
	gotoxy(65,11);	cout<<"		void metro_pie();"<<endl;
	gotoxy(65,12);	cout<<"		void imp();"<<endl;
		
	gotoxy(65,13);	cout<<"	};"<<endl;
	gotoxy(65,14);	cout<<"	metro::metro()"<<endl;
	gotoxy(65,15);	cout<<"	{"<<endl;
	gotoxy(65,16);	cout<<"		m=pu=pi=0;"<<endl;
	gotoxy(65,17);	cout<<"	}"<<endl;
	
	gotoxy(65,18);	cout<<"	void metro::pedir_metros()"<<endl;
	gotoxy(65,19);	cout<<"	{"<<endl;
	gotoxy(65,20);	cout<<"		cout<<\"Dame los metros\"<<endl;"<<endl;
	gotoxy(65,21);	cout<<"		cin>>m;"<<endl;
	gotoxy(65,22);	cout<<"	}"<<endl;
	
	gotoxy(65,23);	cout<<"	void metro::metros_pulgada()"<<endl;
	gotoxy(65,24);	cout<<"	{"<<endl;
	gotoxy(65,25);	cout<<"		pu=m*1.70;"<<endl;
	gotoxy(65,26);	cout<<"	}"<<endl;
	
	gotoxy(65,27);	cout<<"	void metro::metros_pie()"<<endl;
	gotoxy(65,28);	cout<<"	{"<<endl;
	gotoxy(65,29);	cout<<"		pi=m*39.7;"<<endl;
	gotoxy(65,30);	cout<<"	}"<<endl;
	gotoxy(65,31);	cout<<"	void metro::imp()"<<endl;
	gotoxy(65,32);	cout<<"	{"<<endl;
	gotoxy(65,33);	cout<<"		cout<<\"De metro a pulgada\"<<pu<<endl;"<<endl;
	gotoxy(65,34);	cout<<"		cout<<\"De metro a pie\"<<pi<<endl;"<<endl;
		
	gotoxy(65,35);	cout<<"	}"<<endl;
	gotoxy(65,36);	cout<<"	metro::~metro()"<<endl;
	gotoxy(65,37);	cout<<"	{"<<endl;
	gotoxy(65,38);	cout<<"		cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,39);	cout<<"	}"<<endl;
	gotoxy(65,40);	cout<<"	void main()"<<endl;
	gotoxy(65,41);	cout<<"	{"<<endl;
		
	gotoxy(65,42);	cout<<"		metro m;"<<endl;
	gotoxy(65,43);	cout<<"		m.pedir_metros();"<<endl;
	gotoxy(65,44);	cout<<"		m.metro_pulgada();"<<endl;
	gotoxy(65,45);	cout<<"		m.metro_pie();"<<endl;
	gotoxy(65,46);	cout<<"		m.imp();"<<endl;
	gotoxy(65,47);	cout<<"	}"<<endl;
}
void parcial_2::codigo_metros_pu_pie_para()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"class metro"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(65,5);	cout<<"	float pu,pi;"<<endl;
	gotoxy(65,6);	cout<<"public:"<<endl;
	gotoxy(65,7);	cout<<"	metro();"<<endl;
	gotoxy(65,8);	cout<<"	~metro();"<<endl;
	gotoxy(65,9);	cout<<"	void metro_pulgada(float);"<<endl;
	gotoxy(65,10);	cout<<"	void metro_pie(float);"<<endl;
	gotoxy(65,11);	cout<<"	void imp();"<<endl;
		
	gotoxy(65,12);	cout<<"};"<<endl;
	gotoxy(65,13);	cout<<"metro::metro()"<<endl;
	gotoxy(65,14);	cout<<"{"<<endl;
	gotoxy(65,15);	cout<<"	pu=pi=0;"<<endl;
	gotoxy(65,16);	cout<<"}"<<endl;
	
	
	gotoxy(65,17);	cout<<"void metro::metros_pulgada(float m)"<<endl;
	gotoxy(65,18);	cout<<"{"<<endl;
	gotoxy(65,19);	cout<<"	pu=m*1.70;"<<endl;
	gotoxy(65,20);	cout<<"}"<<endl;
	
	gotoxy(65,21);	cout<<"void metro::metros_pie(float m)"<<endl;
	gotoxy(65,22);	cout<<"{"<<endl;
	gotoxy(65,23);	cout<<"	pi=m*39.7;"<<endl;
	gotoxy(65,24);	cout<<"}"<<endl;
	gotoxy(65,25);	cout<<"void metro::imp()"<<endl;
	gotoxy(65,26);	cout<<"{"<<endl;
	gotoxy(65,27);	cout<<"	cout<<\"De metro a pulgada\"<<pu<<endl;"<<endl;
	gotoxy(65,28);	cout<<"	cout<<\"De metro a pie\"<<pi<<endl;"<<endl;
		
	gotoxy(65,29);	cout<<"}"<<endl;
	gotoxy(65,30);	cout<<"metro::~metro()"<<endl;
	gotoxy(65,31);	cout<<"{"<<endl;
	gotoxy(65,32);	cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,33);	cout<<"}"<<endl;
	gotoxy(65,34);	cout<<"void main()"<<endl;
	gotoxy(65,35);	cout<<"{"<<endl;
	gotoxy(65,36);	cout<<"	float me;"<<endl;
	gotoxy(65,37);	cout<<"	cout<<\"Dame los metros\"<<endl;"<<endl;
	gotoxy(65,38);	cout<<"	cin>>me;"<<endl;
		
	gotoxy(65,39);	cout<<"	metro m;"<<endl;
	gotoxy(65,40);	cout<<"	m.pedir_metros(me);"<<endl;
	gotoxy(65,41);	cout<<"	m.metro_pulgada(me);"<<endl;
	gotoxy(65,42);	cout<<"	m.metro_pie(me);"<<endl;
	gotoxy(65,43);	cout<<"	m.imp();"<<endl;
	gotoxy(65,44);	cout<<"}"<<endl;
	
}
void parcial_2::codigo_metros_pu_pie_refe()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"	class metro"<<endl;
	gotoxy(65,3);	cout<<"	{"<<endl;
	gotoxy(65,4);	cout<<"		"<<endl;
	gotoxy(65,5);	cout<<"	public:"<<endl;
	gotoxy(65,6);	cout<<"		~metro();"<<endl;
	gotoxy(65,7);	cout<<"		float metro_pulgada(float);"<<endl;
	gotoxy(65,8);	cout<<"		float metro_pie(float);"<<endl;
	gotoxy(65,9);	cout<<"	};"<<endl;
	gotoxy(65,10);
	gotoxy(65,11);	cout<<"	float metro::metros_pulgada(float m)"<<endl;
	gotoxy(65,12);	cout<<"	{"<<endl;
	gotoxy(65,13);	cout<<"		return m*1.70;"<<endl;
	gotoxy(65,14);	cout<<"	}"<<endl;
	
	gotoxy(65,15);	cout<<"	float metro::metros_pie(float m)"<<endl;
	gotoxy(65,16);	cout<<"	{"<<endl;
	gotoxy(65,17);	cout<<"		return m*39.7;"<<endl;
	gotoxy(65,18);	cout<<"	}"<<endl;
	gotoxy(65,19);	cout<<"	metro::~metro()"<<endl;
	gotoxy(65,20);	cout<<"	{"<<endl;
	gotoxy(65,21);	cout<<"		cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,22);	cout<<"	}"<<endl;
	gotoxy(65,23);	cout<<"	void main()"<<endl;
	gotoxy(65,24);	cout<<"	{"<<endl;
	gotoxy(65,25);	cout<<"		float me;"<<endl;
	gotoxy(65,26);	cout<<"		cout<<\"Dame los metros\"<<endl;"<<endl;
	gotoxy(65,27);	cout<<"		cin>>me;"<<endl;
		
	gotoxy(65,28);	cout<<"		metro m;"<<endl;
	gotoxy(50,29);	cout<<"		cout<<\"De metro a pulgada\"<<m.metro_pulgada(me)<<endl;"<<endl;
	gotoxy(50,30);	cout<<"		cout<<\"De metro a pie\"<<m.metro_pie(me)<<endl;"<<endl;
	gotoxy(65,31);	cout<<"	}"<<endl;
}
void parcial_2::conversion()
{
	cout<<"Haciendo la conversion de metro a decametro,hectometro,kilometro"<<endl;
	decametro=metro*10;
	hectometro=metro*100;
	kilometro=metro*1000;
}
void parcial_2::conversion(float metro)
{
	cout<<"Haciendo la conversion de metro a decametro,hectometro,kilometro"<<endl;
	decametro=metro*10;
	hectometro=metro*100;
	kilometro=metro*1000;
	
}
float parcial_2::deca(float m)
{
	
	
	return m*10;
}

float parcial_2::hect(float m)
{
	
	
	return m*100;
	
}

float parcial_2::kilo(float m)
{
	
	return m*1000;
}
void parcial_2::codigo_ej7_void()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include <iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"	class metro"<<endl;
	gotoxy(65,3);	cout<<"	{"<<endl;
	gotoxy(65,4);	cout<<"	private:"<<endl;
	gotoxy(65,5);	cout<<"		float m,dam,hm,km;"<<endl;
	gotoxy(65,6);	cout<<"	public:"<<endl;
	gotoxy(65,7);	cout<<"		metro();"<<endl;
	gotoxy(65,8);	cout<<"		~metro();"<<endl;
	gotoxy(65,9);	cout<<"		void pedir_metros();"<<endl;
	gotoxy(65,10);	cout<<"		void conversion();"<<endl;
	gotoxy(65,11);	cout<<"		void imp();"<<endl;
	gotoxy(65,12);	cout<<"	};"<<endl;
	gotoxy(65,13);	cout<<"	void metro::pedir_metros()"<<endl;
	gotoxy(65,14);	cout<<"	{"<<endl;
	gotoxy(65,15);	cout<<"		cout<<\"Digite los metros\"<<endl;"<<endl;
	gotoxy(65,16);	cout<<"		cin>>m;"<<endl;
	gotoxy(65,17);	cout<<"	}"<<endl;
	gotoxy(65,18);	cout<<"	void metro::conversion()"<<endl;
	gotoxy(65,19);	cout<<"	{"<<endl;
		
	gotoxy(58,20);	cout<<"		cout<<\"pasando de metros a decametro,hectometros,kilometros\"<<endl;"<<endl;
	gotoxy(65,21);	cout<<"		dam=m*10;"<<endl;
	gotoxy(65,22);	cout<<"		hm=m*100;"<<endl;
	gotoxy(65,23);	cout<<"		km=m*1000;"<<endl;
	gotoxy(65,24);	cout<<"	}"<<endl;
	gotoxy(65,25);	cout<<"	void metro::imp()"<<endl;
	gotoxy(65,26);	cout<<"	{"<<endl;
	gotoxy(65,27);	cout<<"		cout<<\"Los resultado son \"<<endl;"<<endl;
	gotoxy(65,28);	cout<<"		cout<<\"En decametos\"<<dam<<endl;"<<endl;
	gotoxy(65,29);	cout<<"		cout<<\"En hectometro :\"<<hm<<endl;"<<endl;
	gotoxy(65,30);	cout<<"		cout<<\"En kilometros :\"<<km<<endl;"<<endl;
	gotoxy(65,31);	cout<<"	}"<<endl;
	gotoxy(65,32);	cout<<"	metro::metro()"<<endl;
	gotoxy(65,33);	cout<<"	{"<<endl;
	gotoxy(65,34);	cout<<"		m=0;"<<endl;
	gotoxy(65,35);	cout<<"		dam=0;"<<endl;
	gotoxy(65,36);	cout<<"		hm=0;"<<endl;
	gotoxy(65,37);	cout<<"		km=0;"<<endl;
	gotoxy(65,38);	cout<<"	}"<<endl;
	gotoxy(65,39);	cout<<"	void main()"<<endl;
	gotoxy(65,40);	cout<<"	{  "<<endl;
	gotoxy(65,41);	cout<<"		metro m2;"<<endl;
	gotoxy(65,42);	cout<<"		m2.pedir_metros();"<<endl;
	gotoxy(65,43);	cout<<"		m2.conversion();"<<endl;
	gotoxy(65,44);	cout<<"		m2.imp();"<<endl;
	
	
		
	gotoxy(65,45);	cout<<"	}"<<endl;
}

void parcial_2::codigo_ej7_para()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include <iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"	class metro"<<endl;
	gotoxy(65,3);	cout<<"	{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(65,5);	cout<<"	float dam,hm,km;"<<endl;
	gotoxy(65,6);	cout<<"public:"<<endl;
	gotoxy(65,7);	cout<<"	metro();"<<endl;
	gotoxy(65,8);	cout<<"	~metro();"<<endl;
	gotoxy(65,9);	cout<<"	void conversion(float);"<<endl;
	gotoxy(65,10);	cout<<"	void imp();"<<endl;
	gotoxy(65,11);	cout<<"};"<<endl;
	
	gotoxy(65,12);	cout<<"void metro::conversion(float m)"<<endl;
	gotoxy(65,13);	cout<<"{"<<endl;
		
	gotoxy(59,14);	cout<<"	cout<<\"pasando de metros a decametro,hectometros,kilometros\"<<endl;"<<endl;
	gotoxy(65,15);	cout<<"	dam=m*10;"<<endl;
	gotoxy(65,16);	cout<<"	hm=m*100;"<<endl;
	gotoxy(65,17);	cout<<"	km=m*1000;"<<endl;
	gotoxy(65,18);	cout<<"}"<<endl;
	gotoxy(65,19);	cout<<"void metro::imp()"<<endl;
	gotoxy(65,20);	cout<<"{"<<endl;
	gotoxy(65,21);	cout<<"	cout<<\"Los resultado son\"<<endl;"<<endl;
	gotoxy(65,22);	cout<<"	cout<<\"En decametos\"<<dam<<endl;"<<endl;
	gotoxy(65,23);	cout<<"	cout<<\"En hectometro :\"<<hm<<endl;"<<endl;
	gotoxy(65,24);	cout<<"	cout<<\"En kilometros :\"<<km<<endl;"<<endl;
	gotoxy(65,25);	cout<<"}"<<endl;
	gotoxy(65,26);	cout<<"metro::metro()"<<endl;
	gotoxy(65,27);	cout<<"{"<<endl;
	gotoxy(65,28);	cout<<"	dam=0;"<<endl;
	gotoxy(65,29);	cout<<"	hm=0;"<<endl;
	gotoxy(65,30);	cout<<"	km=0;"<<endl;
	gotoxy(65,31);	cout<<"}"<<endl;
	gotoxy(65,32);	cout<<"void main()"<<endl;
	gotoxy(65,33);	cout<<"{"<<endl;
	gotoxy(65,34);	cout<<"	float m;"<<endl;
	gotoxy(65,35);	cout<<"	cout<<\"Digite los metros\"<<endl;"<<endl;
	gotoxy(65,36);	cout<<"	cin>>m;"<<endl;
	gotoxy(65,37);	cout<<"	metro m2;"<<endl;
	gotoxy(65,38);	cout<<"	m2.conversion(m);"<<endl;
	gotoxy(65,39);	cout<<"	m2.imp();"<<endl;
	gotoxy(65,40);	cout<<"}"<<endl;
}
	
void parcial_2::codigo_ej7_refe()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;

	gotoxy(65,1);cout<<"#include <iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"class metro"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
		
	gotoxy(65,4);	cout<<"public:"<<endl;
		
	gotoxy(65,5);	cout<<"	~metro();"<<endl;
	gotoxy(65,6);	cout<<"	float decametro(float);"<<endl;
	gotoxy(65,7);	cout<<"	float hectometro(float);"<<endl;
	gotoxy(65,8);	cout<<"	float kilometro(float);"<<endl;
		
	gotoxy(65,9);	cout<<"};"<<endl;
	
	gotoxy(65,10);	cout<<"float metro::decametro(float m)"<<endl;
	gotoxy(65,11);	cout<<"{"<<endl;
		
		
	gotoxy(65,12);	cout<<"	return m*10;"<<endl;
	gotoxy(65,13);	cout<<"}"<<endl;
	
	gotoxy(65,14);	cout<<"float metro::hectometro(float m)"<<endl;
	gotoxy(65,15);	cout<<"{"<<endl;
		
		
	gotoxy(65,16);	cout<<"	return m*100;"<<endl;
		
	gotoxy(65,17);	cout<<"}"<<endl;
	
	gotoxy(65,18);	cout<<"float metro::kilometro(float m)"<<endl;
	gotoxy(65,19);	cout<<"{"<<endl;
		
	gotoxy(65,20);	cout<<"	return m*1000;"<<endl;
	gotoxy(65,21);	cout<<"}"<<endl;
	gotoxy(65,22);	cout<<"void main()"<<endl;
	gotoxy(65,23);	cout<<"{"<<endl;
	gotoxy(65,24);	cout<<"	float m;"<<endl;
	gotoxy(65,25);	cout<<"cout<<\"Digite los metros\"<<endl;"<<endl;
	gotoxy(65,26);	cout<<"cin>>m;"<<endl;
	gotoxy(65,27);	cout<<"metro m2;"<<endl;
	gotoxy(65,28);	cout<<"cout<<\"Los resultado son \"<<endl;"<<endl;
	gotoxy(65,29);	cout<<"cout<<\"En decametos\"<<m2.decametro(m)<<endl;"<<endl;
	gotoxy(65,30);	cout<<"cout<<\"En hectometro :\"<<m2.hectometro(m)<<endl;"<<endl;
	gotoxy(65,31);	cout<<"cout<<\"En kilometros :\"<<m2.kilometro(m)<<endl;"<<endl;
		
		
	gotoxy(65,32);	cout<<"}"<<endl;
}
void parcial_2::pedir_pulgadas()
{
	cout<<"Digite las pulgadas"<<endl;
	cin>>pulgada;
}
void parcial_2::conversion_pulgadas()
{
	pie2=pulgada*12;
	yardas=pie2*3;
	millas=yardas*1760;
}
void parcial_2::conversion_pulgadas(long pulgada)
{
	pie2=pulgada*12;
	yardas=pie2*3;
	millas=yardas*1760;
}
void parcial_2::imprimir_pulgadas()
{
	cout<<"Pulgada:"<<pulgada<<endl;
	cout<<"Pie:"<<pie2<<endl;
	cout<<"Yardas:"<<yardas<<endl;
	cout<<"Millas:"<<millas<<endl;
}
long parcial_2:: pi(long n)
{
	return n*12;
}
long parcial_2::ya(long n)
{
	return n*36;
}
long parcial_2:: mi(long n)
{
	return n*63360;
}
void parcial_2::codigo_pulgada_void()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"class pulgada"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(65,5);	cout<<"	long pu,pi,ya,mi;"<<endl;
	gotoxy(65,6);	cout<<"public:"<<endl;
	gotoxy(65,7);	cout<<"	pulgada();"<<endl;
	gotoxy(65,8);	cout<<"	~pulgada();"<<endl;
	gotoxy(65,9);	cout<<"	void pedir_datos();"<<endl;
	gotoxy(65,10);	cout<<"	void conversion();"<<endl;
	gotoxy(65,11);	cout<<"	void imp();"<<endl;
	gotoxy(65,12);	cout<<"};"<<endl;
	gotoxy(65,13);	cout<<"pulgada::pulgada()"<<endl;
	gotoxy(65,14);	cout<<"{"<<endl;
	gotoxy(65,15);	cout<<"	pu=pi=ya=mi=0;"<<endl;
	gotoxy(65,16);	cout<<"}"<<endl;
	gotoxy(65,17);	cout<<"void pulgada::pedir_datos()"<<endl;
	gotoxy(65,18);	cout<<"{"<<endl;
	gotoxy(65,19);	cout<<"	cout<<\"Digite las pulgadas\"<<endl;"<<endl;
	gotoxy(65,20);	cout<<"	cin>>pu;"<<endl;
	gotoxy(65,21);	cout<<"}"<<endl;
	gotoxy(65,22);	cout<<"void pulgada::conversion()"<<endl;
	gotoxy(65,23);	cout<<"{"<<endl;
	gotoxy(65,24);	cout<<"	pi=pu*12;"<<endl;
	gotoxy(65,25);	cout<<"	ya=pi*3;"<<endl;
	gotoxy(65,26);	cout<<"	mi=ya*1760;"<<endl;
		
	gotoxy(65,27);	cout<<"}"<<endl;
	gotoxy(65,28);	cout<<"void pulgada::imp()"<<endl;
	gotoxy(65,29);	cout<<"{"<<endl;
	gotoxy(65,30);	cout<<"	cout<<\"Pulgada\"<<pu<<endl;"<<endl;
	gotoxy(65,31);	cout<<"	cout<<\"Pies\"<<pi<<endl;"<<endl;
	gotoxy(65,32);	cout<<"	cout<<\"Yardas\"<<ya<<endl;"<<endl;
	gotoxy(65,33);	cout<<"	cout<<\"Millas\"<<mi<<endl;"<<endl;
	gotoxy(65,34);	cout<<"}"<<endl;
	gotoxy(65,35);	cout<<"pulgada:~pulgada()"<<endl;
	gotoxy(65,36);	cout<<"{"<<endl;
	gotoxy(65,37);	cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,38);	cout<<"}"<<endl;
	gotoxy(65,39);	cout<<"void main()"<<endl;
	gotoxy(65,40);	cout<<"{"<<endl;
	gotoxy(65,41);	cout<<"	pulgada p;"<<endl;
	gotoxy(65,42);	cout<<"	p.pedir_datos();"<<endl;
	gotoxy(65,43);	cout<<"	p.conversion();"<<endl;
	gotoxy(65,44);	cout<<"	p.imp();"<<endl;
	gotoxy(65,45);	cout<<"}"<<endl;
	
}
void parcial_2::codigo_pulgada_para()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;

	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);cout<<"class pulgada"<<endl;
	gotoxy(65,3);cout<<"{"<<endl;
	gotoxy(65,4);cout<<"private:"<<endl;
	gotoxy(65,5);cout<<"	long pi,ya,mi;"<<endl;
	gotoxy(65,6);cout<<"public:"<<endl;
	gotoxy(65,7);cout<<"	pulgada();"<<endl;
	gotoxy(65,8);cout<<"	~pulgada();"<<endl;
		
	gotoxy(65,9);cout<<"	void conversion(long);"<<endl;
	gotoxy(65,10);cout<<"	void imp();"<<endl;
	gotoxy(65,11);cout<<"};"<<endl;
	gotoxy(65,12);cout<<"pulgada::pulgada()"<<endl;
	gotoxy(65,13);cout<<"{"<<endl;
	gotoxy(65,14);cout<<"	pi=ya=mi=0;"<<endl;
	gotoxy(65,15);cout<<"}"<<endl;
	
	gotoxy(65,16);cout<<"void pulgada::conversion(long pu)"<<endl;
	gotoxy(65,17);cout<<"{"<<endl;
	gotoxy(65,18);cout<<"	pi=pu*12;"<<endl;
	gotoxy(65,19);cout<<"	ya=pi*3;"<<endl;
	gotoxy(65,20);cout<<"	mi=ya*1760;"<<endl;
		
	gotoxy(65,21);cout<<"}"<<endl;
	gotoxy(65,22);cout<<"void pulgada::imp()"<<endl;
	gotoxy(65,23);cout<<"{"<<endl;
	gotoxy(65,24);cout<<"	cout<<\"Pulgada\"<<pu<<endl;"<<endl;
	gotoxy(65,25);cout<<"	cout<<\"Pies\"<<pi<<endl;"<<endl;
	gotoxy(65,26);cout<<"	cout<<\"Yardas\"<<ya<<endl;"<<endl;
	gotoxy(65,27);cout<<"	cout<<\"Millas\"<<mi<<endl;"<<endl;
	gotoxy(65,28);cout<<"}"<<endl;
	gotoxy(65,29);cout<<"pulgada:~pulgada()"<<endl;
	gotoxy(65,30);cout<<"{"<<endl;
	gotoxy(65,31);cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,32);cout<<"}"<<endl;
	gotoxy(65,33);cout<<"void main()"<<endl;
	gotoxy(65,34);cout<<"{"<<endl;
	gotoxy(65,35);cout<<"	long pu;"<<endl;
	gotoxy(65,36);cout<<"	cout<<\"Digite las pulgadas\"<<endl;"<<endl;
	gotoxy(65,37);cout<<"	cin>>pu;"<<endl;
	gotoxy(65,38);cout<<"	pulgada p;"<<endl;
	gotoxy(65,39);cout<<"	p.conversion(pu);"<<endl;
	gotoxy(65,40);cout<<"	p.imp();"<<endl;
	gotoxy(65,41);cout<<"}"<<endl;
	
}
void parcial_2::codigo_pulgada_refe()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;

	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"class pulgada"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"public:"<<endl;
	gotoxy(65,5);	cout<<"	~pulgada();"<<endl;
	gotoxy(65,6);	cout<<"	long pies(long);"<<endl;
	gotoxy(65,7);	cout<<"	long yardas(long);"<<endl;
	gotoxy(65,8);	cout<<"	long millas(long);"<<endl;
		
	gotoxy(65,9);	cout<<"};"<<endl;
	
	gotoxy(65,10);	cout<<"void pulgada::pies(long n)"<<endl;
	gotoxy(65,11);	cout<<"{"<<endl;
	gotoxy(65,12);	cout<<"	return n*12;"<<endl;
	gotoxy(65,13);	cout<<"}"<<endl;
	
	gotoxy(65,14);	cout<<"void pulgada::yardas(long n)"<<endl;
	gotoxy(65,15);	cout<<"{"<<endl;
	gotoxy(65,16);	cout<<"	return n*36;"<<endl;
		
	gotoxy(65,17);	cout<<"}"<<endl;
	
	gotoxy(65,18);	cout<<"void pulgada::millas(long n)"<<endl;
	gotoxy(65,19);	cout<<"{"<<endl;
	gotoxy(65,20);	cout<<"	return n*63360;"<<endl;
		
		
	gotoxy(65,21);	cout<<"}"<<endl;
	gotoxy(65,22);	cout<<"pulgada:~pulgada()"<<endl;
	gotoxy(65,23);	cout<<"{"<<endl;
	gotoxy(65,24);	cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,25);	cout<<"}"<<endl;
	gotoxy(65,26);	cout<<"void main()"<<endl;
	gotoxy(65,27);	cout<<"{"<<endl;
	gotoxy(65,28);	cout<<"	long pu;"<<endl;
	gotoxy(65,29);	cout<<"	cout<<\"Digite las pulgadas\"<<endl;"<<endl;
	gotoxy(65,30);	cout<<"	cin>>pu;"<<endl;
	gotoxy(65,31);	cout<<"	pulgada p;"<<endl;
		
	gotoxy(65,32);	cout<<"	cout<<\"Pies\"<<p.pies(pu)<<endl;"<<endl;
	gotoxy(65,33);	cout<<"	cout<<\"Yardas\"<<p.yardas(pu)<<endl;"<<endl;
	gotoxy(65,34);	cout<<"	cout<<\"Millas\"<<p.millas(pu)<<endl;"<<endl;
		
		
	gotoxy(65,35);	cout<<"}"<<endl;
	
}
void parcial_2::codigo_arreglo_void()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"class arreglo"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(65,5);	cout<<"	int array[5];"<<endl;
	gotoxy(65,6);	cout<<"	int cont;"<<endl;
	gotoxy(65,7);	cout<<"public:"<<endl;
	gotoxy(65,8);	cout<<"arreglo();"<<endl;
	gotoxy(65,9);	cout<<"~arreglo();"<<endl;
	gotoxy(65,10);	cout<<"void llenar();"<<endl;
	gotoxy(65,11);	cout<<"void mostrar();"<<endl;
		
	gotoxy(65,12);	cout<<"};"<<endl;
	gotoxy(65,13);	cout<<"arreglo::arreglo()"<<endl;
	gotoxy(65,14);	cout<<"{"<<endl;
		
	gotoxy(65,15);	cout<<"	for(cont=0;cont<5;cont++)"<<endl;
	gotoxy(65,16);	cout<<"	{"<<endl;
	gotoxy(65,17);	cout<<"		array[cont]=0;"<<endl;
	gotoxy(65,18);	cout<<"	}"<<endl;
	gotoxy(65,19);	cout<<"	cont=0;"<<endl;
		
	gotoxy(65,20);	cout<<"}"<<endl;
	gotoxy(65,21);	cout<<"void arreglo::llenar()"<<endl;
	gotoxy(65,22);	cout<<"{"<<endl;
	gotoxy(65,23);	cout<<"	for(cont=0;cont<5;cont++)"<<endl;
	gotoxy(65,24);	cout<<"	{"<<endl;
	gotoxy(65,25);	cout<<"		cout<<\"Digite un numero\"<<endl;"<<endl;
	gotoxy(65,26);	cout<<"		cin>>array[cont];"<<endl;
	gotoxy(65,27);	cout<<"	}"<<endl;
	gotoxy(65,28);	cout<<"}"<<endl;
	gotoxy(65,29);	cout<<"void arreglo::mostrar()"<<endl;
	gotoxy(65,30);	cout<<"{"<<endl;
	gotoxy(65,31);	cout<<"	for(cont=0;cont<5;cont++)"<<endl;
	gotoxy(65,32);	cout<<"	{"<<endl;
	gotoxy(65,33);	cout<<"		cout<<\"arreglo[\"<<cont<<\"]\"<<array[cont]<<endl;"<<endl;
	gotoxy(65,34);	cout<<"	}"<<endl;
	gotoxy(65,35);	cout<<"}"<<endl;
	gotoxy(65,36);	cout<<"arreglo::~arreglo()"<<endl;
	gotoxy(65,37);	cout<<"{"<<endl;
	gotoxy(65,38);	cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,39);	cout<<"}"<<endl;
	gotoxy(65,40);	cout<<"void main()"<<endl;
	gotoxy(65,41);	cout<<"{"<<endl;
	
	gotoxy(65,42);	cout<<"	arreglo a;"<<endl;
	gotoxy(65,43);	cout<<"	a.llenar();"<<endl;
	gotoxy(65,44);	cout<<"	a.mostrar();"<<endl;
	gotoxy(65,45);	cout<<"}"<<endl;
	
	
}
void parcial_2::arreglo_llenar()
{
	for(n=0;n<5;n++)
	{
		cout<<"Digite un numero"<<endl;
		cin>>arreglo[n];
	}
}

void parcial_2::arreglo_mostrar( )
{
	for(n=0;n<5;n++)
	{
		cout<<"Arreglo["<<n<<"]"<<arreglo[n]<<endl;
	}
}

void parcial_2::arreglo_mostrar(int t)
{
	for(n=0;n<t;n++)
	{
		cout<<"Arreglo["<<n<<"]"<<arreglo[n]<<endl;
	}
}
void parcial_2::arreglo_llenar(int a[],int t)
{
	for(n=0;n<t;n++)
	{
		arreglo[n]+=a[n];
	}
}
void parcial_2::codigo_arreglo_para()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"class arreglo"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(65,5);	cout<<"	int array[100];"<<endl;
	gotoxy(65,6);	cout<<"	int cont;"<<endl;
	gotoxy(65,7);	cout<<"public:"<<endl;
	gotoxy(65,8);	cout<<"	arreglo();"<<endl;
	gotoxy(65,9);	cout<<"	~arreglo();"<<endl;
	gotoxy(65,10);	cout<<"	void llenar(int a[],int n);"<<endl;
	gotoxy(65,11);	cout<<"	void mostrar();"<<endl;
		
	gotoxy(65,12);	cout<<"};"<<endl;
	gotoxy(65,13);	cout<<"arreglo::arreglo()"<<endl;
	gotoxy(65,14);	cout<<"{"<<endl;
		
	gotoxy(65,15);	cout<<"	for(cont=0;cont<100;cont++)"<<endl;
	gotoxy(65,16);	cout<<"	{"<<endl;
	gotoxy(65,17);	cout<<"		array[cont]=0;"<<endl;
	gotoxy(65,18);	cout<<"	}"<<endl;
	gotoxy(65,19);	cout<<"	cont=0;"<<endl;
		
	gotoxy(65,20);	cout<<"}"<<endl;
	gotoxy(65,21);	cout<<"void arreglo::llenar(int a[],int t)"<<endl;
	gotoxy(65,22);	cout<<"{"<<endl;
	gotoxy(65,23);	cout<<"	for(cont=0;cont<t;cont++)"<<endl;
	gotoxy(65,24);	cout<<"	{"<<endl;
			
	gotoxy(65,25);	cout<<"		array[cont]+=a[cont];"<<endl;
	gotoxy(65,26);	cout<<"	}"<<endl;
	gotoxy(65,27);	cout<<"}"<<endl;
	gotoxy(65,28);	cout<<"void arreglo::mostrar()"<<endl;
	gotoxy(65,29);	cout<<"{"<<endl;
	gotoxy(65,30);	cout<<"	for(cont=0;cont<5;cont++)"<<endl;
	gotoxy(65,31);	cout<<"	{"<<endl;
	gotoxy(65,32);	cout<<"		cout<<\"arreglo[\"<<cont<<\"]\"<<array[cont]<<endl;"<<endl;
	gotoxy(65,33);	cout<<"	}"<<endl;
	gotoxy(65,34);	cout<<"}"<<endl;
	gotoxy(65,35);		cout<<"arreglo::~arreglo()"<<endl;
	gotoxy(65,36);		cout<<"{"<<endl;
	gotoxy(65,37);		cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,38);		cout<<"}"<<endl;
	gotoxy(65,39);		cout<<"void main()"<<endl;
	gotoxy(65,40);		cout<<"{"<<endl;
	gotoxy(65,41);		cout<<"	int n,tam;"<<endl;
	gotoxy(65,42);		cout<<"	int a[100];"<<endl;
	gotoxy(65,43);		cout<<"	cout<<\"Digite el tamaño del arreglo\"<<endl;"<<endl;
	gotoxy(65,44);		cout<<"	cin>>tam;"<<endl;
	gotoxy(65,45);		cout<<"	for(n=0;n<tam;n++)"<<endl;
	gotoxy(65,46);		cout<<"	{"<<endl;
	gotoxy(65,47);		cout<<"		cout<<\"Digite un numero\"<<endl;"<<endl;
	gotoxy(65,48);		cout<<"		cin>>a[n];"<<endl;
			
	gotoxy(65,49);		cout<<"	}"<<endl;
		
	gotoxy(65,50);		cout<<"arreglo ar;"<<endl;
	gotoxy(65,51);		cout<<"ar.llenar(a,tam);"<<endl;
	gotoxy(65,52);		cout<<"ar.mostrar();"<<endl;
		
	gotoxy(65,53);		cout<<"}"<<endl;
	
}
void parcial_2::arreglo_suma()
{
	int tam;
	cout<<"Digite el tamaño del arreglo"<<endl;
	cin>>tam;
	for(n=0;n<tam;n++)
	{
		cout<<"Digite un numero"<<endl;
		cin>>arreglo[n];
		suma+=arreglo[n];
		
	}
}
void parcial_2::arreglo_suma_mostrar(int numeros[])
{
	for (int n=0;n<5;n++)
	{
		cout<<"["<<n<<"]"<<numeros[n]<<endl;
	}
	cout<<"La suma del arreglo es:"<<suma<<endl;
	
}
void parcial_2::arreglo_suma(int numeros[])
{
	for (int n=0;n<5; n++)
	{
		suma+=numeros[n];
	}
	
}
void parcial_2::arreglo_suma_mostrar()
{
	cout<<"La suma del arreglo es:"<<suma<<endl;
	
}
void parcial_2::codigo_arreglo_suma_void()
{
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	gotoxy(65,2);	cout<<"class arreglo"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(65,5);	cout<<"	int numeros[100];"<<endl;
	gotoxy(65,6);	cout<<"	int n,suma,tam;"<<endl;
	gotoxy(65,7);	cout<<"public:"<<endl;
	gotoxy(65,8);	cout<<"	arreglo();"<<endl;
	gotoxy(65,9);	cout<<"	~arreglo();"<<endl;
	gotoxy(65,10);	cout<<"	void pedir_datos_y_suma();"<<endl;
	gotoxy(65,11);	cout<<"	void mostrar();"<<endl;
	gotoxy(65,12);	cout<<"};"<<endl;
	gotoxy(65,13);	cout<<"arreglo::arreglo()"<<endl;
	gotoxy(65,14);	cout<<"{"<<endl;
		
	gotoxy(65,15);	cout<<"	for(n=0;n<100;n++)"<<endl;
	gotoxy(65,16);	cout<<"	{"<<endl;
	gotoxy(65,17);	cout<<"		numeros[n]=0;"<<endl;
	gotoxy(65,18);	cout<<"	}"<<endl;
	gotoxy(65,19);	cout<<"	n=0;"<<endl;
	gotoxy(65,20);	cout<<"	suma=0;"<<endl;
	gotoxy(65,21);	cout<<"	tam=0;"<<endl;
	gotoxy(65,22);	cout<<"}"<<endl;
	gotoxy(65,23);	cout<<"void arreglo::pedir_datos_y_suma()"<<endl;
	gotoxy(65,24);	cout<<"{"<<endl;
	gotoxy(65,25);	cout<<"	cout<<\"Digite el tamaño del arreglo\"<<endl;"<<endl;
	gotoxy(65,26);	cout<<"	cin>>tam;"<<endl;
	gotoxy(65,27);	cout<<"	for(n=0;n<tam;n++)"<<endl;
	gotoxy(65,28);	cout<<"	{"<<endl;
	gotoxy(65,29);	cout<<"		cout<<\"Digite un numero\"<<endl;"<<endl;
	gotoxy(65,30);	cout<<"		cin>>numeros[n];"<<endl;
	gotoxy(65,31);	cout<<"		suma+=numeros[n];"<<endl;
	gotoxy(65,32);	cout<<"	}"<<endl;
	gotoxy(65,33);	cout<<"}"<<endl;
	gotoxy(65,34);	cout<<"void arreglo::mostrar()"<<endl;
	gotoxy(65,35);	cout<<"{"<<endl;
	gotoxy(65,36);	cout<<"	cout<<\"la suma del arreglo es:\"<<suma<<endl;"<<endl;
	gotoxy(65,37);	cout<<"}"<<endl;
	gotoxy(65,38);	cout<<"arreglo::~arreglo()"<<endl;
	gotoxy(65,39);	cout<<"{"<<endl;
	gotoxy(65,40);	cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,41);	cout<<"}"<<endl;
	gotoxy(65,42);	cout<<"void main()"<<endl;
	gotoxy(65,43);	cout<<"{"<<endl;
	gotoxy(65,44);	cout<<"	arreglo a;"<<endl;
	gotoxy(65,45);	cout<<"	a.pedir_datos_y_suma();"<<endl;
	gotoxy(65,46);	cout<<"	a.mostrar();"<<endl;
		
	gotoxy(65,47);	cout<<"}"<<endl;
	
	
	
	
}
void parcial_2::codigo_arreglo_suma_para()
{
	

	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	
	gotoxy(65,2);	cout<<"class arreglo"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
	gotoxy(65,4);	cout<<"private:"<<endl;
	gotoxy(65,5);	cout<<"	int suma;"<<endl;
	gotoxy(65,6);	cout<<"public:"<<endl;
	gotoxy(65,7);	cout<<"	arreglo();"<<endl;
	gotoxy(65,8);	cout<<"	~arreglo();"<<endl;
	gotoxy(65,9);	cout<<"	void suma_arreglo(int []);"<<endl;
	gotoxy(65,10);	cout<<"	void mostrar_datos(int []);"<<endl;
	gotoxy(65,11);	cout<<"};"<<endl;
	gotoxy(65,12);	cout<<"arreglo::arreglo()"<<endl;
	gotoxy(65,13);	cout<<"{"<<endl;
	gotoxy(65,14);	cout<<"	suma=0;"<<endl;
	gotoxy(65,15);	cout<<"}"<<endl;
	gotoxy(65,16);	cout<<"void arreglo::suma_arreglo(int numeros[])"<<endl;
	gotoxy(65,17);	cout<<"{"<<endl;
	gotoxy(65,18);	cout<<"	for (int n=0;n<5; n++)"<<endl;
	gotoxy(65,19);	cout<<"	{"<<endl;
	gotoxy(65,20);	cout<<"		suma+=numeros[n];"<<endl;
	gotoxy(65,21);	cout<<"	}"<<endl;
	gotoxy(65,22);	cout<<"}"<<endl;
	gotoxy(65,23);	cout<<"void arreglo::mostrar_datos(int numeros []"<<endl;
	gotoxy(65,24);	cout<<"{"<<endl;
	gotoxy(65,25);	cout<<"	for (int n=0;n<5;n++)"<<endl;
	gotoxy(65,26);	cout<<"	{"<<endl;
	gotoxy(65,27);	cout<<"		cout<<\"[\"<<n<<\"]\"<<numeros[n]<<endl;"<<endl;
	gotoxy(65,28);	cout<<"	}"<<endl;
	gotoxy(65,29);	cout<<"	cout<<\"La suma del arreglo es:\"<<suma<<endl;"<<endl;
	gotoxy(65,30);	cout<<"}"<<endl;
	gotoxy(65,31);	cout<<"arreglo::~arreglo()"<<endl;
	gotoxy(65,32);	cout<<"{"<<endl;
	gotoxy(65,33);	cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,34);	cout<<"}"<<endl;
	gotoxy(65,35);	cout<<"void main()"<<endl;
	gotoxy(65,36);	cout<<"{"<<endl;
	gotoxy(65,37);	cout<<"	int numeros[5];"<<endl;
	gotoxy(65,38);	cout<<"	for (int n=0; n<5; n++)"<<endl;
	gotoxy(65,39);	cout<<"	{"<<endl;
	gotoxy(65,40);	cout<<"		cout<<\"Digite un numero\"<<endl;"<<endl;
	gotoxy(65,41);	cout<<"		cin>>numeros[n];"<<endl;
	gotoxy(65,42);	cout<<"	}"<<endl;
	gotoxy(65,43);	cout<<"	arreglo a;"<<endl;
	gotoxy(65,44);	cout<<"	a.suma_arreglo(numeros);"<<endl;
	gotoxy(65,45);	cout<<"	a.mostrar_datos(numeros);"<<endl;
		
		
		
	gotoxy(65,46);	cout<<"}"<<endl;
	
}

void parcial_2::arreglo_suma(int numeros[],int &suma)
{
	for (int n=0;n<5; n++)
	{
		suma+=numeros[n];
	}
}
void parcial_2::codigo_arreglo_suma_refe()
{
	
	gotoxy(65,0);cout<<"CODIGO:"<<endl;
	gotoxy(65,1);cout<<"#include<iostream.h>"<<endl;
	
	gotoxy(65,2);	cout<<"class arreglo"<<endl;
	gotoxy(65,3);	cout<<"{"<<endl;
		
	gotoxy(65,4);	cout<<"public:"<<endl;
		
	gotoxy(65,5);	cout<<"	~arreglo();"<<endl;
	gotoxy(65,6);	cout<<"	void suma_arreglo(int [], int&);"<<endl;
		
	gotoxy(65,7);	cout<<"};"<<endl;
	
	gotoxy(65,8);	cout<<"void arreglo::suma_arreglo(int numeros[],int &suma)"<<endl;
	gotoxy(65,9);	cout<<"{"<<endl;
	gotoxy(65,10);	cout<<"	for (int n=0;n<5; n++)"<<endl;
	gotoxy(65,11);	cout<<"	{"<<endl;
	gotoxy(65,12);	cout<<"		suma+=numeros[n];"<<endl;
	gotoxy(65,13);	cout<<"	}"<<endl;
	gotoxy(65,14);	cout<<"}"<<endl;
	
	gotoxy(65,15);	cout<<"arreglo::~arreglo()"<<endl;
	gotoxy(65,16);	cout<<"{"<<endl;
	gotoxy(65,17);	cout<<"	cout<<\"Destructor\"<<endl;"<<endl;
	gotoxy(65,18);	cout<<"}"<<endl;
	gotoxy(65,19);	cout<<"void main()"<<endl;
	gotoxy(65,20);	cout<<"{"<<endl;
	gotoxy(65,21);	cout<<"	int suma=0;"<<endl;
	gotoxy(65,22);	cout<<"	int numeros[5];"<<endl;
	gotoxy(65,23);	cout<<"	for (int n=0; n<5; n++)"<<endl;
	gotoxy(65,24);	cout<<"	{"<<endl;
	gotoxy(65,25);	cout<<"		cout<<\"Digite un numero\"<<endl;"<<endl;
	gotoxy(65,26);	cout<<"		cin>>numeros[n];"<<endl;
	gotoxy(65,27);	cout<<"	}"<<endl;
	gotoxy(65,28);	cout<<"	arreglo a;"<<endl;
	gotoxy(65,29);	cout<<"	a.suma_arreglo(numeros,suma);"<<endl;
	gotoxy(65,30);	cout<<"	cout<<\"la suma es:\"<<suma;"<<endl;
	
		
	gotoxy(65,31);	cout<<"}"<<endl;
	
}

int main()
{

    portada();
	Sleep(15000);
	parcial pa;
	parcial_2 pa2;
	bool salir=false;
	int opcion;
	int opcion2;
	int opcion_cuatrimestre;
	int opcion_parcial;
	int opcion_ejercicios_parcial1;
	int opcion_parcial2;
	int opcion_ejercicios_parcial2;
	
	system("CLS");
	gotoxy(40,8);
	cout<<"INTRUCCIONES"<<endl;
	gotoxy(40,10);
	cout<<"El programa solo se manejara por numero enteros 0 a 9"<<endl;
	gotoxy(40,12);
	cout<<"Si no hace como las intrucciones marcara error."<<endl;
	gotoxy(40,14);
	cout<<"Al acabar la ejecucion del ejercicio se mostrara el codigo del ejercicio"<<endl;
	gotoxy(40,16);
	cout<<"el programa fue optimizado para serlo mas simple y entendible al usuario,"<<endl;
	gotoxy(40,18);
	cout<<"Creando solo dos clases para todos los ejercicios,"<<endl;
	gotoxy(40,20);
	cout<<"una llamada parcial y otro parcial2 eso es todo"<<endl;
	gotoxy(40,22);
	cout<<"GRACIAS"<<endl;
	Sleep(15000);
	do 
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
		cout<<"PROYECTO DE PROGRAMACION ORIENTADA A OBJETOS:"<<endl;
		
		gotoxy(40,10);
		cout<<" 1 Entrar al menu"<<endl;
		gotoxy(40,12);
		cout<<" 2 salir de menu"<<endl;
		gotoxy(40,14);
		cin>>opcion;
		
		
		if(opcion ==1)
		{//primer if
			
			
			
			do 
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
				gotoxy(40,15);
				cin>>opcion_parcial;
				
				
				
				switch(opcion_parcial){
					
					
				case 1:
					//inico del menu de cuatrimestre
					do
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
						cout<<"PRIMER PARCIAL EJERCICIOS"<<endl;
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
						cout<<"0:Salir"<<endl;
						gotoxy(40,21);
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
						
						
					}while(opcion_ejercicios_parcial1!=0);//10
					break;
				case 2:
					
					do
					{//11
						
						
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
						cout<<"SEGUNDO PARCIAL EJERCICIOS"<<endl;
						gotoxy(40,6);
						cout<<"1:Suma de tres numeros"<<endl;
						gotoxy(40,8);
						cout<<"2:El mayor y menor de tres numeros"<<endl;
						gotoxy(40,10);
						cout<<"3:Area y perimetro de figuras"<<endl;
						gotoxy(40,12);
						cout<<"4:Grados,celcius,fahrenheit,kevin"<<endl;
						gotoxy(40,14);
						cout<<"5:metros a centimetros,decimetros,milimetros"<<endl;
						gotoxy(40,16);
						cout<<"6:Metro a pulgada,pie,"<<endl;
						gotoxy(40,18);
						cout<<"7:Metro a decametro,hectometro,kilometro"<<endl;
						gotoxy(40,20);
						cout<<"8:pulgad a pie,yardas,millas"<<endl;
						gotoxy(40,22);
						cout<<"9:Arreglo"<<endl;
						gotoxy(40,24);
						cout<<"10:Suma de arreglo"<<endl;
						gotoxy(40,26);
						cout<<"0:Salir"<<endl;
						gotoxy(40,27);
						cin>>opcion_ejercicios_parcial2;
						
						switch(opcion_ejercicios_parcial2)
						{//788
							
						case 1://2882
							do{
								
							system("CLS");
						
							gotoxy(40,1);
							cout<<"Lista:"<<endl;
							gotoxy(40,3);
							cout<<"1:por vacio"<<endl;
							gotoxy(40,4);
							cout<<"2:por parametro"<<endl;
							gotoxy(40,5);
							cout<<"3:por referencia"<<endl;
							gotoxy(40,6);
							cout<<"4:regresar"<<endl;
							gotoxy(40,7);
							cin>>opcion2;
							
							switch(opcion2){
								
							case 1:
								system("CLS");
								cout<<"Por vacio"<<endl;
								pa2.sumar_3();
								pa2.imprimir_3();
								pa2.codigo_3_void();
								system("pause");
								break;
							case 2:
								system("CLS");
								int nu1,nu2,nu3;
								cout<<"Por parametro"<<endl;
								cout<<"Ingrese un numero"<<endl;
								cin>>nu1;
								cout<<"Ingrese un numero"<<endl;
								cin>>nu2;
								cout<<"Ingrese un numero"<<endl;
								cin>>nu3;
								pa2.sumar_3(nu1,nu2,nu3);
								pa2.imprimir_3();
								pa2.codigo_3_para();
								system("pause");
								break;
							case 3:
								system("CLS");
								int n1,n2,n3;
								cout<<"Por referencia"<<endl;
								cout<<"digite un numero"<<endl;
								cin>>n1;
								cout<<"digite un numero"<<endl;
								cin>>n2;
								cout<<"digite un numero"<<endl;
								cin>>n3;
							   cout<<"El resultado es:"<<pa2.sumar_3r(n1,n2,n3)<<endl;
								pa2.codigo_3_refe();
								system("pause");
								break;
							}
							
								
							}while(opcion2!=4);
							break;//2882
						case 2://9282
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:por referencia"<<endl;
								gotoxy(40,6);
								cout<<"4:regresar"<<endl;
								gotoxy(40,7);
								cin>>opcion2;
								
					            switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									pa2.pedir_datos();
									pa2.cal_mayor();
									pa2.cal_menor();
									pa2.imprimir_ma_me();
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_mayor_menor_void();
									system("pause");
									break;
								case 2:
									system("CLS");
									int n1,n2,n3;
									cout<<"Por parametro"<<endl;
									cout<<"Digite un numero"<<endl;
									cin>>n1;
									cout<<"Digite un numero"<<endl;
									cin>>n2;
									cout<<"Digite un numero"<<endl;
									cin>>n3;
									pa2.cal_mayor(n1,n2,n3);
									pa2.cal_menor(n1,n2,n3);
									pa2.imprimir_ma_me();
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_mayor_menor_para();
									system("pause");
						            
									break;
								case 3:
									system("CLS");
							        cout<<"Por referencia"<<endl;
									int n1r=0,n2r=0,n3r=0;
									cout<<"Digite un numero"<<endl;
									cin>>n1r;
									cout<<"Digite un numero"<<endl;
									cin>>n2r;
									cout<<"Digite un numero"<<endl;
									cin>>n3r;
									cout<<"El numero mayor es:"<<pa2.cal_mayor_re(n1r,n2r,n3r)<<endl;
									cout<<"El numero menor es:"<<pa2.cal_menor_re(n1r,n2r,n3r)<<endl;
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_mayor_menor_refe();
									system("pause");
									break;
								}
								
								
							}while(opcion2!=4);
							
							
							break;//9282
						case 3://777
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:por referencia"<<endl;
								gotoxy(40,6);
								cout<<"4:regresar"<<endl;
								gotoxy(40,7);
								cin>>opcion2;
								
								switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									pa2.pedir_datos_figuras();
									pa2.cuadralo();
									pa2.rectangulo();
									pa2.triangulo();
									pa2.circulo();
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_figuras_void();
									system("pause");
									break;
								case 2:
									system("CLS");
									int ladoc,lado1,lado2,lado3,base,altura;
									float diametro;
									cout<<"Por parametro"<<endl;
									cout<<"Para el cuadralo"<<endl;
									cout<<"Digite su lado"<<endl;
									cin>>ladoc;
									cout<<"\nPara el triangulo"<<endl;
									cout<<"Digite su primer lado"<<endl;
									cin>>lado1;
									cout<<"Digite su segundo lado"<<endl;
									cin>>lado2;
									cout<<"Digite su tercer lado"<<endl;
									cin>>lado3;
									cout<<"\nPara el rectangulo"<<endl;
									cout<<"Digite su base "<<endl;
									cin>>base;
									cout<<"Digite su altura"<<endl;
									cin>>altura;
									cout<<"\nPara el circulo"<<endl;
									cout<<"Digite su diametro"<<endl;
									cin>>diametro;
									pa2.cuadralo(ladoc);
									pa2.rectangulo(base,altura);
									pa2.triangulo(lado1,lado2,lado3);
									pa2.circulo(diametro);
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_figuras_para();
									system("pause");
									
									break;
								case 3:
									system("CLS");
									cout<<"Por referencia"<<endl;
									int ladocr,lado1r,lado2r,lado3r,baser,alturar;
									float diametror;
							
									cout<<"Para el cuadralo"<<endl;
									cout<<"Digite su lado"<<endl;
									cin>>ladocr;
									cout<<"\nPara el triangulo"<<endl;
									cout<<"Digite su primer lado"<<endl;
									cin>>lado1r;
									cout<<"Digite su segundo lado"<<endl;
									cin>>lado2r;
									cout<<"Digite su tercer lado"<<endl;
									cin>>lado3r;
									cout<<"\nPara el rectangulo"<<endl;
									cout<<"Digite su base "<<endl;
									cin>>baser;
									cout<<"Digite su altura"<<endl;
									cin>>alturar;
									cout<<"\nPara el circulo"<<endl;
									cout<<"Digite su diametro"<<endl;
									cin>>diametror;
									
									cout<<"El perimetro del cuadralo es:"<<pa2.cuadralo_peri(ladocr)<<endl;
									cout<<"El area del cuadralo es:"<<pa2.cuadralo_area(ladocr)<<endl;
									cout<<"El perimetro del rectangulo es:"<<pa2.rectangulo_peri(baser,alturar)<<endl;
									cout<<"El area del rectangulo es:"<<pa2.rectangulo_area(baser,alturar)<<endl;
									cout<<"El perimetro del triangulo es:"<<pa2.triangulo_peri(lado1r,lado2r,lado3r)<<endl;
									cout<<"El area del triangulo es:"<<pa2.triangulo_area(lado1r,lado2r,lado3r)<<endl;
									cout<<"El perimetro del circulo es:"<<pa2.circulo_peri(diametror)<<endl;
									cout<<"El area del circulo es:"<<pa2.circulo_area(diametror)<<endl;
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_figuras_refe();
									system("pause");
									break;
								}
								
								
							}while(opcion2!=4);
							
							break;//777
						case 4://11290
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:por referencia"<<endl;
								gotoxy(40,6);
								cout<<"4:regresar"<<endl;
								gotoxy(40,7);
								cin>>opcion2;
							
								switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									pa2.pedir_datos_grados();
									pa2.celcius();
									pa2.fahrenheit();
									pa2.kelvin();
									system("pause");
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_grados_vacio();
									system("pause");
									break;
								case 2:
									system("CLS");
									int grados;
									cout<<"Por parametro"<<endl;
									cout<<"Digite los grados"<<endl;
									cin>>grados;
									pa2.celcius(grados);
									pa2.fahrenheit(grados);
									pa2.kelvin(grados);
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_grados_para();
									system("pause");
									break;
								case 3:
									system("CLS");
									int gradosr;
									cout<<"Por referencia"<<endl;
									cout<<"Digite los grados"<<endl;
									cin>>gradosr;
									cout<<"de celcius a fahrenheit :"<<pa2.celcius_fahrenheit(gradosr)<<endl;
									cout<<"de celcius a kelvin :"<<pa2.celcius_kelvin(gradosr)<<endl;
									cout<<"de  fahrenheit celcius :"<<pa2.fahrenheit_celcius(gradosr)<<endl;
									cout<<"de fahrenheit a kelvin :"<<pa2.fahrenheit_kelvin(gradosr)<<endl;
									cout<<"de kelvin a celcius :"<<pa2.kelvin_celcius(gradosr)<<endl;
									cout<<"de kelvin a fahrenheit :"<<pa2.kelvin_fahrenheit(gradosr)<<endl;
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_grados_refe();
									system("pause");
									
									break;
								}
								
								
							}while(opcion2!=4);
							break;//11290
						case 5://1234
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:por referencia"<<endl;
								gotoxy(40,6);
								cout<<"4:regresar"<<endl;
								gotoxy(40,7);
								cin>>opcion2;
								
								switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									pa2.pedir_datos_metros();
									pa2.deci();
									pa2.centi();
									pa2.mili();
									pa2.imprimir_datos_metros();
									system("pause");
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_metro_void();
									system("pause");
									break;
								case 2:
									system("CLS");
									int metro;
									cout<<"Por parametro"<<endl;
									cout<<"Digite los metros"<<endl;
									cin>>metro;
									pa2.deci(metro);
									pa2.centi(metro);
									pa2.mili(metro);
									pa2.imprimir_datos_metros();
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_metro_para();
									system("pause");
									break;
								case 3:
									system("CLS");
									int metror;
									cout<<"Por referencia"<<endl;
									cout<<"Digite los metros"<<endl;
									cin>>metror;
									cout<<"En decimetro son:"<<pa2.deci_r(metror)<<endl;
									cout<<"En centimetro son:"<<pa2.centi_r(metror)<<endl;
									cout<<"En milimetro son:"<<pa2.mili_r(metror)<<endl;
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_metro_refe();
									system("pause");
									
									break;
								}
								
								
							}while(opcion2!=4);
							
							break;//1234
						case 6://oip
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:por referencia"<<endl;
								gotoxy(40,6);
								cout<<"4:regresar"<<endl;
								gotoxy(40,7);
								cin>>opcion2;
								
								switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									pa2.pedir_datos_metros();
									pa2.metro_pulgada();
									pa2.metro_pie();
									pa2.imprimir_datos_metros_pu_pie();
									system("pause");
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_metros_pu_pie_void();
									system("pause");
									break;
								case 2:
									system("CLS");
									int metro;
									cout<<"Por parametro"<<endl;
									cout<<"Digite los metros"<<endl;
									cin>>metro;
									pa2.metro_pulgada(metro);
									pa2.metro_pie(metro);
									
									pa2.imprimir_datos_metros_pu_pie();
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_metros_pu_pie_para();
									system("pause");
									break;
								case 3:
									system("CLS");
									int metror;
									cout<<"Por referencia"<<endl;
									cout<<"Digite los metros"<<endl;
									cin>>metror;
									cout<<"En decimetro son:"<<pa2.metro_pulgada_r(metror)<<endl;
									cout<<"En centimetro son:"<<pa2.metro_pie_r(metror)<<endl;
									
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_metros_pu_pie_refe();
									system("pause");
									
									break;
								}
								
								
							}while(opcion2!=4);
							
							break;//oip
						case 7://lkj
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:por referencia"<<endl;
								gotoxy(40,6);
								cout<<"4:regresar"<<endl;
								gotoxy(40,7);
								cin>>opcion2;
								
								switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									pa2.pedir_datos_metros();
									
									
									pa2.conversion();
									pa2.imprimir_datos_h_d_k();
									system("pause");
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_ej7_void();
									system("pause");
									break;
								case 2:
									system("CLS");
									int metro;
									cout<<"Por parametro"<<endl;
									cout<<"Digite los metros"<<endl;
									cin>>metro;

								
									pa2.conversion(metro);
								
									pa2.imprimir_datos_h_d_k();
								

									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_ej7_para();
									system("pause");
									break;
								case 3:
									system("CLS");
									int metror;
									cout<<"Por referencia"<<endl;
									cout<<"Digite los metros"<<endl;
									cin>>metror;
									cout<<"En decametro son:"<<pa2.deca(metror)<<endl;
									cout<<"En hectometro son:"<<pa2.hect(metror)<<endl;
									cout<<"En kilometro son:"<<pa2.kilo(metror)<<endl;
																										
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_ej7_refe();
									system("pause");
									
									break;
								}
								
								
							}while(opcion2!=4);
							
							break;//lkj
						case 8://nmb
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:por referencia"<<endl;
								gotoxy(40,6);
								cout<<"4:regresar"<<endl;
								gotoxy(40,7);
								cin>>opcion2;
								
								switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									
									pa2.pedir_pulgadas();
									pa2.conversion_pulgadas();
									pa2.imprimir_pulgadas();
									
									
									
									
									system("pause");
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_pulgada_void();
									system("pause");
									break;
								case 2:
									system("CLS");
									long pulgada;
									cout<<"Por parametro"<<endl;
									cout<<"Digite las pulgadas"<<endl;
									cin>>pulgada;
				                    pa2.conversion_pulgadas(pulgada);
								   pa2.imprimir_pulgadas();
									
									
									
									
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_pulgada_para();
									system("pause");
									break;
								case 3:
									system("CLS");
									long pulgadar;
									cout<<"Por referencia"<<endl;
									cout<<"Digite las pulgadas"<<endl;
									cin>>pulgadar;
									cout<<"En Pies son:"<<pa2.pi(pulgadar)<<endl;
									cout<<"En Yardas son:"<<pa2.ya(pulgadar)<<endl;
									cout<<"En Millas son:"<<pa2.mi(pulgadar)<<endl;
								
								
								
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_pulgada_refe();
									system("pause");
									
									break;
								}
								
								
							}while(opcion2!=4);
																			
							break;//nmb
						case 9://vcd
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:regresar"<<endl;
								
								
								gotoxy(40,6);
								cin>>opcion2;
								
								switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									pa2.arreglo_llenar();
									 pa2.arreglo_mostrar();
									
									
																		
									
									
									
									
									system("pause");
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_arreglo_void();
									system("pause");
									break;
								case 2:
									system("CLS");
									
									cout<<"Por parametro"<<endl;
									
									int n,tam;
									int a[100];
									cout<<"Digite el tamaño del arreglo"<<endl;
									cin>>tam;
									for(n=0;n<tam;n++)
									{
										cout<<"Digite un numero"<<endl;
										cin>>a[n];
										
									}
									pa2.arreglo_llenar(a,tam);
									pa2.arreglo_mostrar(tam);
									
																											
									
									
									
									
									
									
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_arreglo_para();
									system("pause");
									break;
								
								}
								
								
							}while(opcion2!=3);
							
							
							
							break;//vcd
						case 10://qwe
							do{
								
								system("CLS");
								
								gotoxy(40,1);
								cout<<"Lista:"<<endl;
								gotoxy(40,3);
								cout<<"1:por vacio"<<endl;
								gotoxy(40,4);
								cout<<"2:por parametro"<<endl;
								gotoxy(40,5);
								cout<<"3:por referencia"<<endl;
								gotoxy(40,6);
								cout<<"4:regresar"<<endl;
								gotoxy(40,7);
								cin>>opcion2;
								
								switch(opcion2){
									
								case 1:
									system("CLS");
									cout<<"Por vacio"<<endl;
									
									pa2.arreglo_suma();
									pa2.arreglo_suma_mostrar();
									
									
									
									
									system("pause");
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_arreglo_suma_void();
									system("pause");
									break;
								case 2:
									system("CLS");
									
									cout<<"Por parametro"<<endl;
									int numeros[5];
									for (int n=0; n<5; n++)
									{
										cout<<"Digite un numero"<<endl;
										cin>>numeros[n];
									}
									
									pa2.arreglo_suma(numeros);
									pa2.arreglo_suma_mostrar(numeros);
									
									
									
									
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_arreglo_suma_para();
									system("pause");
									break;
								case 3:
									system("CLS");
									
									cout<<"Por referencia"<<endl;
									
									int suma=0;
									int numerosr[5];
									for (int n=0; n<5; n++)
									{
										cout<<"Digite un numero"<<endl;
										cin>>numerosr[n];
									}
									
									pa2.arreglo_suma(numerosr,suma);
									cout<<"la suma es:"<<suma;
									
									
									
									cout<<"\n presione enter para mostrar el codigo"<<endl;
									getch();
									pa2.codigo_arreglo_suma_refe();
									system("pause");
									
									break;
								}
								
								
							}while(opcion2!=4);
							
						
							break;//qwe
							
							
						
						}//788
						
						
						
					}while(opcion_ejercicios_parcial2!=0);//11
					break;
					
					if(opcion==3)
					{
						salir=true;
						
					}
					
					
				}//fin del switch del menu del cuatrimestre
				
				
				
				
			}while(opcion_parcial!=3);//menu del los parciales //fin del menu de los parciales
			
			
			
			
			
			
		}//fin del menu del programas
		
		
		
		if(opcion==2)
		{
			
			system("CLS");
			gotoxy(40,10);
			cout<<"FIN DEL PROGRAMA GRACIAS!! FELIZ NAVIDAD Y PROSPERO AÑO NUEVO"<<endl;
			Sleep(5000);
			
		}
		
	}while(opcion!=2);//fin del primer while fin de menu principal
	
	
	return 0;
	system("pause");
	
}
