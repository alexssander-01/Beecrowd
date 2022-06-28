#include <iostream>
 
using namespace std;
 
int main() {
 
    int saque,resto1,resto2,resto3,resto4,resto5,resto6,cedula100,cedula50,cedula20,cedula10,cedula5,cedula2,cedula1;
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
    cedula1=resto6/1;
    cout<<saque<<endl;
	cout<<cedula100<<" nota(s) de R$ 100,00"<<endl;
	cout<<cedula50<<" nota(s) de R$ 50,00"<<endl;
	cout<<cedula20<<" nota(s) de R$ 20,00"<<endl;
	cout<<cedula10<<" nota(s) de R$ 10,00"<<endl;
	cout<<cedula5<<" nota(s) de R$ 5,00"<<endl;
	cout<<cedula2<<" nota(s) de R$ 2,00"<<endl;
	cout<<cedula1<<" nota(s) de R$ 1,00"<<endl;
 
    return 0;
}