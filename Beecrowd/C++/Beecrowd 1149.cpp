#include <iostream>

using namespace std;

int main()
{
	int a , A , n;
	cin >> a ;
	A = 0;
	do
	{
		cin >> n ;
	}while (n <= 0 );
	
	for (int i = 0; i < n; i++)
	{
		A = A + a + i;
	}
	cout << A << endl;
	return 0;
}