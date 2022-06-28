#include <iostream>

using namespace std;

int main()
{
    do
    {
        int a,b;
        cin>>a>>b;
        if (a==0||b==0)
        {
            break;
        }
        else if (a>0&&b>0)
        {
            cout<<"primeiro"<<endl;
        }
        else if (a<0&&b>0)
        {
            cout<<"segundo"<<endl;
        }
        else if (a<0&&b<0)
        {
            cout<<"terceiro"<<endl;
        }
        else if (a>0&&b<0)
        {
            cout<<"quarto"<<endl;
        }

    } while (true);
    return 0;
}
