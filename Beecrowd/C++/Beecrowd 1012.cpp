#include <iostream>
 
using namespace std;
 
int main() {
 
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO,PI;
	PI=3.14159;
	cin>>A>>B>>C;
	TRIANGULO=(A*C)/2;
	CIRCULO=PI*(C*C);
	TRAPEZIO=((A+B)*C)/2;
	QUADRADO=B*B;
	RETANGULO=A*B;
	cout.precision(3);
	cout <<std:: fixed;
	cout<<"TRIANGULO: "<<TRIANGULO<<endl;
	cout<<"CIRCULO: "<<CIRCULO<<endl;
	cout<<"TRAPEZIO: "<<TRAPEZIO<<endl;
	cout<<"QUADRADO: "<<QUADRADO<<endl;
	cout<<"RETANGULO: "<<RETANGULO<<endl;
 
    return 0;
}