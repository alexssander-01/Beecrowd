#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if (b>a)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	b=b+1;
	for (int i=b;i<a;i++)
	{
		if (i%5==2||i%5==3)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}