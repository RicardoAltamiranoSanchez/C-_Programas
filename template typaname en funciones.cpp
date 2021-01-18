#include <iostream>
#include<windows.h>
#include"ordenamiento.h"
using namespace std;
template <typename t>
void pedir_datos(t *arreglo,t n)
{
	for(int m=0; m<n; m++)
	{
		cout<<"ingrese el dato"<<endl;
		cin>>arreglo[m];
	}
	
}
template <typename t>
void mostrar_datos(t *arreglo,t n)
{
	for(int m=0; m<n; m++)
	{
     cout<<"["<<m<<"]";
	 cout<<arreglo[m]<<endl;
	}
	
}



int main()
{
	int nelementos;
	cout<<"Digite el numero de elementos del arreglo"<<endl;
	cin>>nelementos;
	int *arreglo=new int (nelementos);
	pedir_datos(arreglo,nelementos);
	cout<<"Ordenado Ascedentemente"<<endl;
	ordenadoAscedentemente(arreglo,nelementos);
	mostrar_datos(arreglo,nelementos);
	cout<<"Ordenado Descedentemente"<<endl;
	ordenadoDescedentemente(arreglo,nelementos);
	mostrar_datos(arreglo,nelementos);
	
	
	delete [] arreglo;
	system("pause");
	return 0;
}
