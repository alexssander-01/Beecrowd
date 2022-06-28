#include <iostream>
 
using namespace std;
 
int main() {
 	int NUMERO;
	float HT,VRHT,SALARIO;
	cin>>NUMERO >>HT >>VRHT;
	SALARIO = HT * VRHT;
	cout<<"NUMBER = "<<NUMERO<<endl;
	cout.precision(2);
	cout<< std:: fixed;
	cout<<"SALARY = U$ "<<SALARIO<<endl;
    return 0;
}