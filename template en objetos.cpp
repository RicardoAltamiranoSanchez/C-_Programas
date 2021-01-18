#include <iostream>
#include<windows.h>
#include"materia.h"
using namespace std;

int main()
{
	materia <int> alumno1("matematicas",78,8);
	materia <float>alumno2("Programacion",89,9.8);
	materia <char>alumno3("Programacion",59,'A');
	cout<<"Mostrando datos de alumnos"<<endl;
	alumno1.mostrar_datos();
	alumno2.mostrar_datos();
	alumno3.mostrar_datos();
	cout<<endl<<endl;
	alumno1.setcalificacion(10);
	alumno2.setcalificacion(9.7);
	alumno3.setcalificacion('B');
	alumno1.mostrar_datos();
	alumno2.mostrar_datos();
	alumno3.mostrar_datos();
	
	
	system("pause");
	return 0;
}
