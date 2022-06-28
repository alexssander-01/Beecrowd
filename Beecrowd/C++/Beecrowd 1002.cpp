#include <iostream>
 
using namespace std;
 
int main() {
 
   double area,raio;
	cin >> raio;
	area=3.14159*(raio*raio);
	cout. precision(4);
	cout << std:: fixed;
	cout <<"A=" <<area <<endl;
 
    return 0;
}