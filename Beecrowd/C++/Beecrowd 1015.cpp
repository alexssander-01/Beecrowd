#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double X1,X2,Y1,Y2,P1,P2,POTENCIA1,POTENCIA2,RAIZ1,RAIZ2;
	cin>>X1>>Y1;
	cin>>X2>>Y2;
	P1=X2-X1;
	P2=Y2-Y1;
	POTENCIA1=P1*P1;
	POTENCIA2=P2*P2;
	RAIZ1=POTENCIA1+POTENCIA2;
	RAIZ2=sqrt(RAIZ1);
	cout.precision(4);
	cout <<std:: fixed;
	cout<<RAIZ2<<endl;
	return 0;
}