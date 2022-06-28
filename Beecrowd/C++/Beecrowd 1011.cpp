#include <iostream>
 
using namespace std;
 
int main() {
 
   double raio,pi,volume;
	pi=3.14159;
	cin>>raio;
	volume=(4/3.0)*pi*(raio*raio*raio);
	cout. precision(3);
	cout << std:: fixed;
	cout<<"VOLUME = "<<volume<<endl;
 
    return 0;
}