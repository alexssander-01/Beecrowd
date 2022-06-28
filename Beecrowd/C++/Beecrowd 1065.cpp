#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,A,B,C,D,E,T;
    cin>>a>>b>>c>>d>>e;
    if (a%2==0)
    {
        A=1;
    }
    else
    {
        A=0;
    }
    if (b%2==0)
    {
        B=1;
    }
    else
    {
        B=0;
    }
    if (c%2==0)
    {
        C=1;
    }
    else
    {
        C=0;
    }
    if (d%2==0)
    {
        D=1;
    }
    else
    {
        D=0;
    }
    if (e%2==0)
    {
        E=1;
    }
    else
    {
        E=0;
    }
    T=A+B+C+D+E;
    cout<<T<<" valores pares"<<endl;
}
