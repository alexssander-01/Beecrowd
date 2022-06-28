#include <iostream>

using namespace std;

int main()
{
	int a , b , matricula;
	float c,nota;
	cin>>a;
	for (int i=1; i <= a; i++ )
	{
		cin>>b>>c;
		if (c>nota)
		{
			nota=c;
			matricula=b;
		}
	}
	if (nota >= 8)
	{
		cout<<matricula<<endl;
	}
	else
	{
	    cout<<"Minimum note not reached"<<endl;	
	}
	return 0;
}