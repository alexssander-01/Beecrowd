#include <iostream>

using namespace std;

int main()
{
    float a,b,c,perimetro,bc,area;
    cin>>a>>b>>c;
    bc=b-c;
    cout.precision(1);
    cout<<std::fixed;
    if (bc<a&&a<b+c)
    {
        perimetro=a+b+c;
        cout<<"Perimetro = "<<perimetro<<endl;
    }
    else
    {
        area=((a+b)*c)/2;
        cout<<"Area = "<<area<<endl;
    }
    return 0;
}
