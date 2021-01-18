#include "punto.h"

punto::punto()
{
	x=y=0;
}
punto::punto(int p_x , int p_y)
{
	x=p_x;
	y=p_y;
}
void setx(int valor_x)
{
	x=valor_x;
}
void sety(int valor_y)
{
	y=valor_y;
}
int getx()
{
	return x;
}

int gety()
{
	return y;
}
