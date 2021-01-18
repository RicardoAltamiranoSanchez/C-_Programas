#include<iostream>
#include<windows.h>
using namespace std;
class alumno{
private:
	string carrera;
public:
		alumno(string carrera)
		{
			this->carrera=carrera;
		}
		void mostrar_datos()
		{
			cout<<"Nombre de la carrera:"<<carrera<<endl;
		}
		string getcarrera()
		{
			return carrera;
		}
		void setcarrera(string cambiar)
		{
			carrera=cambiar;
		}
		~alumno()
		{
			
		}
};
class deportista
{
private:
	string entrenador;
public:
	deportista(string entrenador)
	{
		this->entrenador=entrenador;
	}
	void mostrar_datos()
	{
		cout<<"EL entrenador:"<<entrenador<<endl;
	}
	string getentrenador()
	{
		return entrenador;
	}
	void setentrenador(string cambio)
	{
		entrenador=cambio;
	}
	~deportista()
	{
		
	}
	
};

class becadodeporte:public alumno,public deportista{
private:
	float montobeca;
public:
	becadodeporte(string carrera,string entrenador,float montobeca):alumno(carrera),deportista(entrenador)
	{
		this->montobeca=montobeca;
	}
	void mostrar_datos()
	{
		alumno::mostrar_datos();
		deportista::mostrar_datos();
		cout<<"Monto de beca :"<<montobeca<<endl;
	}
	void setmontobeca(float n)
	{
		float incremento=(montobeca*n)/100;
		this->montobeca+=incremento;
	}
	float getmontobeca()
	{
		return montobeca;
	}
	
};

int main()
{
	alumno* alumnojuan=new alumno("informatica");
	alumno* alumnopedro=new alumno("sistemas");
	deportista* depoluis=new deportista("popeye");
	becadodeporte* bdana=new becadodeporte("administracion","jordan",1500);
	becadodeporte* bdcarmen=new becadodeporte("contaduria","pancho",1800);
	cout<<"Datos alumno juan:\n";alumnojuan->mostrar_datos();
	cout<<"\nDatos alumno pedro:\n";alumnopedro->mostrar_datos();
	cout<<"\nDatos alumno luis:\n";depoluis->mostrar_datos();
	cout<<"\nDatos alumno ana:\n";bdana->mostrar_datos();
	cout<<"\nDatos alumno bdcarmen:\n";bdcarmen->mostrar_datos();
	string carrera;
	cout<<"Digite la nueva carrera de juan"<<endl;
	getline(cin,carrera);
	alumnojuan->setcarrera(carrera);
	cout<<"Digite la nueva carrera de ana"<<endl;
	getline(cin,carrera);
	bdana->setcarrera(carrera);
	string entrenador;
	cout<<"Nuevo entrenador de luis"<<endl;
	getline(cin,entrenador);
	depoluis->setentrenador(entrenador);
	cout<<"Nuevo entrenador de carmen"<<endl;
	getline(cin,entrenador);
	bdcarmen->setentrenador(entrenador);
	float porcentaje;
	cout<<"digite el porcentaje de ana"<<endl;
	cin>>porcentaje;
	bdana->setmontobeca(porcentaje);
	cout<<"digite el porcentaje de carmen"<<endl;
	cin>>porcentaje;
	bdcarmen->setmontobeca(porcentaje);
	cout<<bdcarmen->getmontobeca()<<endl;
	cout<<bdana->getmontobeca()<<endl;
	
	
	
	
	delete alumnojuan;
	delete alumnopedro;
	delete depoluis;
	delete bdana;
	delete bdcarmen;
	system("pause");
	return 0;
}
