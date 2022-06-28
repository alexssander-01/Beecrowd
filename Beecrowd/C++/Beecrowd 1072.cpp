#include <iostream>

using namespace std;

int main()
{
    int a,b,c,p,in,i;
    b=0;
    c=0;
    p=0;
    in=0;
    for (i=0;i<5;i++)
    {
        cin>>a;
        if (a>0)
        {
            b++;
        }
        else if (a<0)
        {
            c++;
        }
        if (a%2==0)
        {
            p++;
        }
        else if (a%2==1||a%2==-1)
        {
            in++;
        }
    }
    cout<<p<<" valor(es) par(es)"<<endl;
    cout<<in<<" valor(es) impar(es)"<<endl;
    cout<<b<<" valor(es) positivo(s)"<<endl;
    cout<<c<<" valor(es) negativo(s)"<<endl;
    return 0;
}
