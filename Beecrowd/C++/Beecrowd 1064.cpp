#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,f,a1,b1,c1,d1,e1,f1,media;
    int A,B,C,D,E,F,T;
    cin>>a>>b>>c>>d>>e>>f;
    if (a>0)
    {
        A=1;
        a1=a;
    }
    else
    {
        A=0;
        a1=0;
    }
    if (b>0)
    {
        B=1;
        b1=b;
    }
    else
    {
        B=0;
        b1=0;
    }
    if (c>0)
    {
        C=1;
        c1=c;
    }
    else
    {
        C=0;
        c1=0;
    }
    if (d>0)
    {
        D=1;
        d1=d;
    }
    else
    {
        D=0;
        d1=0;
    }
    if (e>0)
    {
        E=1;
        e1=e;
    }
    else
    {
        E=0;
        e1=0;
    }
    if (f>0)
    {
        F=1;
        f1=f;
    }
    else
    {
        F=0;
        f1=0;
    }
    T=A+B+C+D+E+F;
    media=(a1+b1+c1+d1+e1+f1)/T;
    cout<<T<<" valores positivos"<<endl;
    cout.precision(1);
    cout<<std::fixed;
    cout<<media<<endl;

    return 0;
}
