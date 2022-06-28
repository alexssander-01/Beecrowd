#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	string b , c;
	cin>>a;
	for (int i=1; i <= a; i++ )
	{
		cin>>b>>c;
		if ("papel"==b&&"papel"==c)
		{
			cout<<"Caso #"<<i<<": De novo!"<<endl;
		}
		else if ("papel"==b&&"pedra"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("papel"==b&&"Spock"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("pedra"==b&&"papel"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("Spock"==b&&"papel"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("pedra"==b&&"lagarto"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("pedra"==b&&"tesoura"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("pedra"==b&&"pedra"==c)
		{
			cout<<"Caso #"<<i<<": De novo!"<<endl;
		}
		else if ("tesoura"==b&&"pedra"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("lagarto"==b&&"pedra"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("tesoura"==b&&"papel"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("tesoura"==b&&"lagarto"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("tesoura"==b&&"tesoura"==c)
		{
			cout<<"Caso #"<<i<<": De novo!"<<endl;
		}
		else if ("papel"==b&&"tesoura"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("lagarto"==b&&"tesoura"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("lagarto"==b&&"Spock"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("lagarto"==b&&"papel"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("lagarto"==b&&"lagarto"==c)
		{
			cout<<"Caso #"<<i<<": De novo!"<<endl;
		}
		else if ("Spock"==b&&"lagarto"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("papel"==b&&"lagarto"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("Spock"==b&&"tesoura"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("Spock"==b&&"pedra"==c)
		{
			cout<<"Caso #"<<i<<": Bazinga!"<<endl;
		}
		else if ("Spock"==b&&"Spock"==c)
		{
			cout<<"Caso #"<<i<<": De novo!"<<endl;
		}
		else if ("tesoura"==b&&"Spock"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
		else if ("pedra"==b&&"Spock"==c)
		{
			cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
		}
	}
	return 0;
}