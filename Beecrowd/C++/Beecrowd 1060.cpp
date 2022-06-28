#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,f;
    int A,B,C,D,E,F,T;
    cin>>a>>b>>c>>d>>e>>f;
    if (a>0)
        A=1;
    else
        A=0;
    if (b>0)
        B=1;
    else
        B=0;
    if (c>0)
        C=1;
    else
        C=0;
    if (d>0)
        D=1;
    else
        D=0;
    if (e>0)
        E=1;
    else
        E=0;
    if (f>0)
        F=1;
    else
        F=0;
    T=A+B+C+D+E+F;
    cout<<T<<" valores positivos"<<endl;

    return 0;
}
