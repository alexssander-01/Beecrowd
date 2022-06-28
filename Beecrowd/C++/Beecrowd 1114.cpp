#include <iostream>

using namespace std;

int main()
{
    do
    {
        int a;
        cin>>a;
        if (a==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;
        }
    } while (true);
    return 0;
}
