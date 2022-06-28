#include <iostream>

using namespace std;

int main()
{
    int i,a,b;
    cin>>a;
    if ((a%2)==0)
    {
        b=a+1;
        for (i=b;i<=b+11;i=i+2)
        {
            cout<<i<<"\n";
        }
    }
    if ((a%2)==1)
    {
        for (i=a;i<=a+11;i=i+2)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}
