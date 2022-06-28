#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i;
    b=0;
    for ( i = 1; i <= 100; i++)
    {
        cin >> a;
        if ( a > b )
        {
            b=a;
            c=i;
        }
    }
    cout << b << endl << c << endl;
    return 0;
}
