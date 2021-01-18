#include<iostream>
#include <windows.h>
using namespace std;
class dianio{
private:
	int dia,mes;
public:
	dianio(int,int);
	bool igual(dianio&);
	void visualizar();
};
dianio::dianio(int _d,int _m)
{
	dia=_d;
	mes=_m;
}
bool dianio::igual(dianio &n)
{
	if(dia==n.dia && mes==n.mes)
	{
		return true;
	}
	else 
	{
		return false;
	}
	
}
void dianio::visualizar()
{
	cout<<"EL dia es :"<<dia<<endl;
	cout<<"El mes es :"<<mes<<endl;
}



int main (int argc, char *argv[])
{
	int d,m;
	dianio* hoy;
	dianio* cumple;
	cout<<"Digite la fecha de hoy,dia"<<endl;
	cin>>d;
	cout<<"Digite la fecha de hoy,mes"<<endl;
	cin>>m;
	hoy=new dianio(d,m);
	cout<<"Fecha de tu cumpleaños"<<endl;
	cout<<"Digite la fecha  de tu cumpleaños ,dia"<<endl;
	cin>>d;
	cout<<"Digite la fecha  de tu cumpleaños ,mes"<<endl;
	cin>>m;
	cumple=new dianio(d,m);
	hoy->visualizar();
	cout<<endl;
	cumple->visualizar();
	if(hoy->igual(*cumple))
	{
		cout<<"Feliz cumple"<<endl;
		
	}
	else{
		cout<<"Que tenga un buen dia"<<endl;
	}
	
	
	
	
	
	system("pause");
	return 0;
}
