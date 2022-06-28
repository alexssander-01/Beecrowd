#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    cin>>a;
    for (i=1;i<=a;i++)
    {
        cin>>b;
        if (b%2==1||b%2==-1)
        {
            cout<<"ODD ";
        }
        else if (b%2==0&&!b==0)
        {
            cout<<"EVEN ";
        }
        if (b>0)
        {
            cout<<"POSITIVE"<<endl;
        }
        else if (b<0)
        {
            cout<<"NEGATIVE"<<endl;
        }
        else if (b==0)
        {
            cout<<"NULL"<<endl;
        }
    }
    return 0;
}
