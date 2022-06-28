#include <iostream>

using namespace std;

int main()
{
    int a,b,r;
    cin>>a>>b;
    if (a>b)
    {
        r=-a+24+b;
        cout<<"O JOGO DUROU "<<r<<" HORA(S)"<<endl;
    }
    if (a<b)
    {
        r=b-a;
        cout<<"O JOGO DUROU "<<r<<" HORA(S)"<<endl;
    }
    if (a==b)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    return 0;
}
