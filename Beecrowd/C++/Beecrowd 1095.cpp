#include <iostream>

using namespace std;

int main()
{
    int i,I,J;
    I=1;
    J=60;
    for (i=60;i>=0;i=i-5)
    {
        cout<<"I="<<I<<" J="<<J<<endl;
        I=I+3;
        J=J-5;
    }
    return 0;
}
