#include<iostream>
#include<windows.h>
using namespace std;


	


class persona
{
protected:
	string nombre;
	string apellido;
	int edad;
public:
	persona(string nombre,string apellido,int edad)
	{
		this->nombre=nombre;
		this->apellido=apellido;
		this->edad=edad;
	}
	void viajar()
	{
		cout<<"Viaja"<<endl;
	}
	string getnombre()
	{
		return nombre;
	}
	string getapellido()
	{
		return apellido;
	}
	int getedad()
	{
		return edad;
	}
	virtual void partido_de_futbol()=0;
	virtual void entrenamiento()=0;
	
};
class futbolista:public persona
{
private:
	int dorsal;
	string pocision;
public:
	futbolista(string nombre,string apellido,int edad,int dorsal,string pocision):persona (nombre,apellido,edad)
	{
		this->dorsal=dorsal;
		this->pocision=pocision;
	}
	void partido_de_futbol()
	{
		cout<<"Juega el partdido de futbol"<<endl;
	}
	void entrenamiento()
	{
	 cout<<"Entrena en la cancha de futbol"<<endl;	
	}
	void entrevista()
	{
		cout<<"Hace entrevista"<<endl;
	}
	~futbolista()
	{
		
	}
	
	
};
class entrenador:public persona
{
private:
	string estrategia;
public:
	entrenador(string nombre,string apellido,int edad,string estrategia):persona (nombre,apellido,edad)
	{
		this->estrategia=estrategia;
	}
	 void partido_de_futbol()
	{
	   cout<<"Dirige el partido de futbol"<<endl;	
	}
	 void entrenamiento()
	{
		 cout<<"Dirige el entrenamiento"<<endl;
	}
	void planifica_entrenamiento()
	{
		cout<<"planifica el entrenamiento"<<endl;
	}
	~entrenador()
	{
	}
};
class medico:public persona
{
private:
	string titulacion;
	int anios_experiencia;
public:
	medico(string nombre,string apellido,int edad,string titulacion,int anios_experiencia):persona(nombre,apellido,edad)		
	{
		this->titulacion=titulacion;
		this->anios_experiencia=anios_experiencia;
	}
	void partido_de_futbol()
	{
		cout<<"asiste en el partido"<<endl;
	}
	void entrenamiento()
	{
	
		cout<<"asiste en el entrenamiento"<<endl;
	}
	void curar_lesion()
	{
		cout<<"Cura lesiones"<<endl;
	}
	~medico()
	{
		
	}
};


int main()
{
	persona* equipo[4];
	equipo[0]=new futbolista("marcelo","perez",28,14,"Defensa");
	equipo[1]=new futbolista("fernando","gonzalez",25,10,"Medio");
	equipo[2]=new entrenador("luis","mujia",48,"onfensiva");
	equipo[3]=new medico("jose","megia",54,"fisioterapeuta",20);
	
	int opcion;
	do
	{
		
		cout<<"MENU"<<endl;
		cout<<"1:viaje del equipo"<<endl;
		cout<<"2:entrenamineto"<<endl;
		cout<<"3:partido de futbol"<<endl;
		cout<<"4:planificar partido"<<endl;
		cout<<"5:entrevista"<<endl;
		cout<<"6:curar lesion"<<endl;
		cout<<"7:salir"<<endl;
		cout<<"Digite una opcion"<<endl;
		cin>>opcion;
		
		switch(opcion)
		{
		case 1://viaje del equipo
			for(int n=0; n<4; n++)
			{
				cout<<equipo[n]->getnombre()<<equipo[n]->getapellido()<<"->";
				equipo[n]->viajar();
				
			}
			system("CLS");
			
			break;
		case 2://entrenamineto
			for(int n=0; n<4; n++)
			{
				cout<<equipo[n]->getnombre()<<equipo[n]->getapellido()<<"->";
				equipo[n]->entrenamiento();
				
			}
			system("CLS");
			
			break;
		case 3://partido de futbol
			for(int n=0; n<4; n++)
			{
				cout<<equipo[n]->getnombre()<<equipo[n]->getapellido()<<"->";
				equipo[n]->partido_de_futbol();
				
			}
			system("CLS");
			
			break;
			
		case 4://planificar partido
			((entrenador*)equipo[2])->planifica_entrenamiento();
			break;
		case 5://entrevista
			for(int n=0; n<2; n++)
			{
				cout<<((futbolista*)equipo[n])->getnombre()<<((futbolista*)equipo[n])->getapellido()<<"->";
				((futbolista*)equipo[n])->entrevista();
				
				
			}
			system("CLS");
			break;
		case 6://curar lesion
			((medico*)equipo[3])->curar_lesion();
			break;
		case 7://salir
			break;
		default:cout<<"Error";
		}
		cout<<endl;
		system("CLS");
		system("pause");
	} while(opcion!=7);
	system("pause");
	return 0;
}
