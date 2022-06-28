#include <iostream>

using namespace std;

int main()
{
    int i;
    float I,J;
    I=0;
    J=1;
    for (i=0;i<=10;i++)
    {
        cout<<"I="<<I<<" J="<<J<<endl;
        J=J+1;
        cout<<"I="<<I<<" J="<<J<<endl;
        J=J+1;
        cout<<"I="<<I<<" J="<<J<<endl;
        I=I+0.2;
        J=J-1.8;
    }
    return 0;
}
