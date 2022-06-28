#include <iostream>

using namespace std;

int main()
{
    int a,b,i,soma;
    cin>>a>>b;
    soma=0;
    if (b>a)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for (i=b;i<=a;i++)
    {
        if (i%13==0)
        {
            soma += -i;
        }
        soma += i;
    }
    cout<<soma<<endl;
    return 0;
}
