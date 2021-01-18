#include <iostream>
#include<windows.h>
using namespace std;
class ser_vivo
{
public:
	virtual void alimentarse()=0;
	
};
class planta:public ser_vivo
{
public:
	void alimentarse()
	{
		cout<<"Se alimenta del los rayos del sol"<<endl;
	}
	
};
class animal:public ser_vivo
{

	
};
class carnivoro:public animal
{
public:
	void alimentarse()
	{
		cout<<"Se alimenta de carne"<<endl;
	}
	
};
class herviboro:public animal
{
public:
	void alimentarse()
	{
		cout<<"Se alimenta de plantas"<<endl;
	}
	
};



int main()
{
	planta* pa=new planta();
	pa->alimentarse();
	carnivoro* ca=new carnivoro();
	ca->alimentarse();
	herviboro* h=new herviboro();
	h->alimentarse();
	delete pa;
	delete ca;
	delete h;
	system("pause");
	return 0;
	
}
