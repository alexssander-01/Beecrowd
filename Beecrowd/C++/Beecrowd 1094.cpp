#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a,t,quantia;
	string cobaia;
	float c,r,s;
	c = 0;
	r = 0;
	s = 0;
	cin >> a;
	for(int i = 1; i <= a; i++)
	{
		cin >> quantia;
		cin >> cobaia;
		if (cobaia == "C")
		{
			c += quantia;
		}
		else if (cobaia == "R")
		{
			r += quantia;
		}
		else if (cobaia == "S")
		{
			s += quantia;
		}
	}
	t = c + r + s;
	cout<<"Total: "<<t<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<c<<endl;
	cout<<"Total de ratos: "<<r<<endl;
	cout<<"Total de sapos: "<<s<<endl;
	cout.precision(2);
	cout<<std::fixed;
	c = (c * 100) / t;
	r = (r * 100) / t;
	s = (s * 100) / t;
	cout<<"Percentual de coelhos: "<<c<<" %"<<endl;
	cout<<"Percentual de ratos: "<<r<<" %"<<endl;
	cout<<"Percentual de sapos: "<<s<<" %"<<endl;
	return 0;
	
}