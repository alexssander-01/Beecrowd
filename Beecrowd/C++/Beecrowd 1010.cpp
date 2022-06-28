#include <iostream>
 
using namespace std;
 
int main() {
 
    int cod1,cod2;
	float quan1,quan2,valor1,valor2,total1,total2,total;
	cin>>cod1>>quan1>>valor1;
	cin>>cod2>>quan2>>valor2;
	total1=quan1*valor1;
	total2=quan2*valor2;
	total=total1+total2;
	cout.precision(2);
	cout <<std:: fixed;
	cout<<"VALOR A PAGAR: R$ "<<total<<endl;
 
    return 0;
}