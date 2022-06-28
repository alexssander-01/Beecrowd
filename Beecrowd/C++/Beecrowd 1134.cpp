#include <iostream>

using namespace std;

int main()
{
	int a,al,g,d;
	al=0;
	g=0;
	d=0;
	do
	{
		cin>>a;
		if (a==1)
		{
			al+=1;
		}
		else if (a==2)
		{
			g+=1;
		}
		else if (a==3)
		{
			d+=1;
		}
	} while (a!=4);
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<al<<endl;
	cout<<"Gasolina: "<<g<<endl;
	cout<<"Diesel: "<<d<<endl;
	return 0;
}