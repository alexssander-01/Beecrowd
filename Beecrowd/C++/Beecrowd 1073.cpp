#include <iostream>

using namespace std;

int main()
{
    int a,i,b;
    b=2;
    cin>>a;
    if (a%2==0)
    {
        a=a;
    }
    else if (a%2==1)
    {
        a=a-1;
    }
    for (i=0;i<a;i=i+2)
    {
        cout<<b<<"^2 = "<<b*b<<endl;
        b=b+2;
    }
    return 0;
}
