#include <iostream>

using namespace std;

int main()
{
    int i=0,n;
    float a,b,ab;
    cout.precision(1);
    cout<<std::fixed;
    cin>>n;
    while (i<n)
    {
        cin>>a>>b;
        if (b==0)
        {
            cout<<"divisao impossivel"<<endl,i++;
        }
        else
        {
            ab=a/b;
            cout<<ab<<endl,i++;
        }
    }
    return 0;
}
