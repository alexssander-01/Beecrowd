#include <iostream>

using namespace std;

int main()
{
    int N,i;
    float n1,n2,n3,m;
    cout.precision(1);
    cout<<std::fixed;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>n1>>n2>>n3;
        m=(n1*2+n2*3+n3*5)/10;
        cout<<m<<endl;
    }
    return 0;
}
