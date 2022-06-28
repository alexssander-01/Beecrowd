#include <iostream>

using namespace std;

int main()
{
	int a , b , c , d;
	cin >> a;
	for (int i = 1;i <= a; i++)
	{
		b = i;
		cout << b <<" ";
		c = b * b;
		cout << c <<" ";
		d = b * b * b;
		cout << d <<endl;
		cout << b <<" ";
		c = c + 1;
		cout << c <<" ";
		d = d + 1;
		cout << d <<endl;
	}
	return 0;
}