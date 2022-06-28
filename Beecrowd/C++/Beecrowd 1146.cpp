#include <iostream>

using namespace std;

int main()
{
	int a;
	do
	{
		cin>>a;
		if (a>0)
		{
			for (int i = 1 ;i <= a ; i++)
			{
				if ( i == a )
				{
					cout << i << endl;
				}
				else
				{
					cout << i <<" ";
				}
			}
		}
	} while ( a != 0 );
	return 0;
}