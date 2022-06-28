#include <iostream>
 
using namespace std;
 
int main() {
 	char NAME[10];
	double SALARIO,TVE,TOTAL;
	cin>>NAME;
	cin>>SALARIO>>TVE;
	TOTAL=SALARIO+(TVE*0.15);
	cout.precision(2);
	cout <<std:: fixed;
	cout<<"TOTAL = R$ "<<TOTAL<<endl;
 
    return 0;
}