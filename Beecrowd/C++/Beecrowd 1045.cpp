#include <iostream>

using namespace std;

int main()
{
    float a,b,c,x,y,z,A,B,C,BC;
    cin>>x>>y>>z;
    if (x>=y&&y>z)
    {
        a=x;b=y;c=z;
    }
    if (x>=z&&z>y)
    {
        a=x;b=z;c=y;
    }
    if (x==y&&y==z)
    {
        a=x;b=y;c=z;
    }
    if (y>x&&x>=z)
    {
        a=y;b=x;c=z;
    }
    if (y>=z&&z>x)
    {
        a=y;b=z;c=x;
    }
    if (z>x&&x>=y)
    {
        a=z;b=x;c=y;
    }
    if (z>y&&y>x)
    {
        a=z;b=y;c=x;
    }
    A=a*a,B=b*b,C=c*c,BC=B+C;
    if (a>=(b+c))
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else
    {
        if (A==BC)
        {
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if ((a*a)>(b*b+c*c))
        {
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        if ((a*a)<(b*b+c*c))
        {
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if (a==b&&b==c)
        {
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        if (a==b&&!(b==c))
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
        if (a==c&&!(b==c))
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
        if (b==c&&!(a==b))
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }

    return 0;
}
