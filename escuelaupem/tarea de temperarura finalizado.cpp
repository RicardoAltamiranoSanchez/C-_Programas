#include <iostream>
using namespace std;
class temperatura{
private:
	float grados,gradoC_F,gradoC_K,gradoF_C,gradoF_K,gradoK_C,gradoK_F;
public:
	temperatura(float,float,float,float,float,float,float);
	void pedir_datos();
	void celcius();
	void fahrenheit();
	void kelvin();
	
	
};
temperatura::temperatura(float pgrados,float pgradoC_F,float pgradoC_K,float pgradoF_C,float pgradoF_K ,float pgradoK_C,float pgradoK_F)
{
	gradoC_F=pgradoC_F;
	gradoC_K=pgradoC_K;
	gradoF_C=pgradoF_C;
	gradoF_K=pgradoF_K;
	gradoK_C=pgradoK_C;
	gradoK_F=pgradoK_F;
	grados=pgrados;	
		
	
	
	
	
}
void temperatura::pedir_datos()
{
	cout<<"Dame los grados :"<<endl;
	cin>>grados;
	
}
void temperatura::celcius()
{
	gradoC_F=grados x 1.8 + 32;
	cout<<"De celcius a fahrenheit:"<<gradoC_F<<endl;
	gradoC_K=grados + 273.15.;
	cout<<"de celcius a kelvin:"<<gradoC_K<<endl;
		
	
}
void temperatura::fahrenheit()
{
	gradoF_C= (grados-32) ÷ 1.8.;
	cout<<"De fahrenheit a celcius:"<<gradoF_C<<endl;
	gradoF_K=5/9 *(grados – 32) + 273.15.;
	cout<<"de fahrenheit  kelvin:"<<gradoF_K<<endl;
	
		
}
void temperatura::kelvin()
{
	gradoK_C=grados-273.15;
	cout<<"De kelvina a celcius:"<<gradoK_C<<endl;
	gradoK_F=1.8*(grados – 273.15) + 32.;
	cout<<"de kelvin a fahrenheit:"<<gradoK_F<<endl;
	
	
}
int main()
{
	float g1,g2,g3,g4,g5,g6,g7;
	temperatura tem(g1,g2,g3,g4,g5,g6,g7);
	tem.pedir_datos();
	tem.celcius();
	cout<<endl;
	tem.fahrenheit();
	cout<<endl;
	tem.kelvin();
	system("pause");
	
	
	
	
	

}

