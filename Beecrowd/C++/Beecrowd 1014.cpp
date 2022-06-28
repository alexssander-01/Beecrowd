#include <iostream>
 
using namespace std;
 
int main() {
 
    int km;
	float litros,cosumo;
	cin>>km>>litros;
	cosumo=km/litros;
	cout.precision(3);
	cout <<std::fixed;
	cout<<cosumo;
	cout<<" km/l"<<endl;
 
    return 0;
}