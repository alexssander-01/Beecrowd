#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a<b&&b<c)
    {
        cout<<a<<endl<<b<<endl<<c<<endl<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    if (a<c&&c<b)
    {
        cout<<a<<endl<<c<<endl<<b<<endl<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    if (b<a&&a<c)
    {
        cout<<b<<endl<<a<<endl<<c<<endl<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    if (b<c&&c<a)
    {
        cout<<b<<endl<<c<<endl<<a<<endl<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    if (c<a&&a<b)
    {
        cout<<c<<endl<<a<<endl<<b<<endl<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    if (c<b&&b<a)
    {
        cout<<c<<endl<<b<<endl<<a<<endl<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    return 0;
}
