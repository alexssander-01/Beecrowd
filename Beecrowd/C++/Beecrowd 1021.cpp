#include <iostream>

using namespace std;

int main()
{
	int cedula100,cedula50,cedula20,cedula10,cedula5,cedula2,moeda1,moeda50,moeda25,moeda10,moeda5;
	float resto1,resto2,resto3,resto4,resto5,resto6,resto7,resto8,resto9,resto10,resto11,moeda1c;
	float saque;
	cin>>saque;
	cedula100=saque/100;
	resto1=saque-cedula100*100;
	cedula50=resto1/50;
	resto2=resto1-cedula50*50;
	cedula20=resto2/20;
	resto3=resto2-cedula20*20;
    cedula10=resto3/10;
    resto4=resto3-cedula10*10;
    cedula5=resto4/5;
    resto5=resto4-cedula5*5;
    cedula2=resto5/2;
    resto6=resto5-cedula2*2;
    moeda1=resto6/1;
    resto7=resto6-moeda1*1;
    moeda50=resto7/0.5;
    resto8=resto7-moeda50*0.5;
    moeda25=resto8/0.25;
    resto9=resto8-moeda25*0.25;
    moeda10=resto9/0.10;
    resto10=resto9-moeda10*0.10;
    moeda5=resto10/0.05;
    resto11=resto10-moeda5*0.05;
    moeda1c=resto11/0.01;
    cout<<"NOTAS:"<<endl;
	cout<<cedula100<<" nota(s) de R$ 100.00"<<endl;
	cout<<cedula50<<" nota(s) de R$ 50.00"<<endl;
	cout<<cedula20<<" nota(s) de R$ 20.00"<<endl;
	cout<<cedula10<<" nota(s) de R$ 10.00"<<endl;
	cout<<cedula5<<" nota(s) de R$ 5.00"<<endl;
	cout<<cedula2<<" nota(s) de R$ 2.00"<<endl;
	cout<<"MOEDAS:"<<endl;
	cout<<moeda1<<" moeda(s) de R$ 1.00"<<endl;
	cout<<moeda50<<" moeda(s) de R$ 0.50"<<endl;
	cout<<moeda25<<" moeda(s) de R$ 0.25"<<endl;
	cout<<moeda10<<" moeda(s) de R$ 0.10"<<endl;
	cout<<moeda5<<" moeda(s) de R$ 0.05"<<endl;
	cout.precision(0);
	cout<<std:: fixed;
	cout<<moeda1c<<" moeda(s) de R$ 0.01"<<endl;
	return 0;
}