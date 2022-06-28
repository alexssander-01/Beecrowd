#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (x=1;x<=n;x++)
    {
        int a,b,i,soma;
        cin>>a>>b;
        if (b>a)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        a=a-1;
        b=b+1;
        soma=0;
        for (i=b;i<=a;i++)
        {
            if (i%2==1||i%2==-1)
            {
                soma += i;
            }
        }
        cout << soma<<endl;
    }
    return 0;
}
