#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,ab,ac,bc,abc;
    cin>>a>>b>>c;
    ab=(a+b+abs(a-b))/2;
    ac=(a+c+abs(a-c))/2;
    bc=(b+c+abs(b-c))/2;
    abc=(ab+ac+abs(ab-ac))/2;
    cout<<abc<<" eh o maior"<<endl;
    return 0;
}
