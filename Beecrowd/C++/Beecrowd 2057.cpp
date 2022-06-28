#include <iostream>

using namespace std;

int main()
{
	int s , t , f , hora;
	cin >> s >> t >> f;
	hora = s + t + f;
	if (hora > 23)
	{
		hora = hora - 24;
	}
	else if (hora < 0)
	{
		hora = hora + 24;
	}
	cout << hora << endl;
	return 0;
}