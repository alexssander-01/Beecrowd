#include <iostream>

using namespace std;

int main()
{
    int i,I,J;
    I=1;
    J=7;
    for (i=1;i<=5;i++)
    {
        cout<<"I="<<I<<" J="<<J<<endl;
        J=J-1;
        cout<<"I="<<I<<" J="<<J<<endl;
        J=J-1;
        cout<<"I="<<I<<" J="<<J<<endl;
        J=J+2;
        I=I+2;
    }
    return 0;
} 
