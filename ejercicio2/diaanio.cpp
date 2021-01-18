#include"dianio.h"
dianio::dianio(int _d,int _m)
{
	d=_d;
	m=_m;
}
bool dianio::igual(dianio& n)
{
	if(d==n.d && m==n.m)
	{
		return true
	}
	else 
	   {
		return false;
	}
	
}
void dianio::visualizar()
{
	cout<<"EL dia es :"<<d<<endl;
	cout<<"El mes es :"<<m<<endl;
}
