#include <iostream>

using namespace std;

int main()
{
    float n,n1,n2;
    do
    {
        cin >> n;
        if (n >= 0 && n <= 10)
        {
            n1 = n;
            break;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }while (true);
    do
    {
        cin >> n;
        if (n >= 0 && n <= 10)
        {
            n2 = n;
            break;
        }
        else
        {
            cout << "nota invalida" <<endl;
        }
    }while (true);
    cout.precision(2);
    cout << std :: fixed;
    n = ( n1 + n2 ) / 2;
    cout<<"media = "<< n << endl;
    return 0;
}
