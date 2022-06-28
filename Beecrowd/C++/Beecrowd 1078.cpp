#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    b=1;
    cin>>a;
    for (i=1;i<=10;i++)
    {
        cout<<b<<" x "<<a<<" = "<<a*b<<endl;
        b++;
    }
    return 0;
}
