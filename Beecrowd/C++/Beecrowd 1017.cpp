#include <iostream>
 
using namespace std;
 
int main() {
 
   float tempo,velocidade;
	float distancia;
	cin>>tempo>>velocidade;
	distancia=(tempo*velocidade)/12;
	cout.precision(3);
	cout <<std::fixed;
	cout<<distancia<<endl;
 
    return 0;
}