#include <iostream>
 
using namespace std;
 
int main() 
{
    int tempo,hora,minuto,segundo;
	cin>>tempo;
	hora=tempo/3600;
	minuto=(tempo-hora*3600)/60;
	segundo=tempo-hora*3600-minuto*60;
	cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
    return 0;
}