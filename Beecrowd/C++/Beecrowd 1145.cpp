#include <iostream>
using namespace std;
int main()
{
	int x,y,i;
	cin>>x>>y;
	for (i=0;i<y;i++)
	{
		if (i+1<y)
		{
			if ((1+i)%x!=0)
			{
				cout<<i+1<<" ";
			}
			else
			{
				cout<<i+1<<endl;
			}
		}
		else
		{
			cout<<i+1<<endl;
		}
	}
	return 0;
}