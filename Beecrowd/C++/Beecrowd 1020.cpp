#include <iostream>
 
using namespace std;
 
int main() 
{
    int tempo,ano,mes,dia;
	cin>>tempo;
	ano=tempo/365;
	mes=(tempo-ano*365)/30;
	dia=tempo-ano*365-mes*30;
	cout<<ano<<" ano(s)"<<endl;
	cout<<mes<<" mes(es)"<<endl;
	cout<<dia<<" dia(s)"<<endl;
 
    return 0;
}