#include <iostream>

using namespace std;

int main()
{
    int a,b,e,i;

    while (true)
    {
        cin>>a>>b;
        e=0;
        if (b>a)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        if (a<=0||b<=0)
        {
            break;
        }
        for (i=b;i<=a;i++)
        {
            cout<<i<<" ";
            e=e+i;
        }
        cout<<"Sum="<<e<<endl;
    }
    return 0;
}
