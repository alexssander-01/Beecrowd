#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float A,B,C,DELTA,R1,R2;
    cin>>A>>B>>C;
    if  (A>0)
    {
        DELTA=(B*B)-(4*A*C);
        if 	(DELTA<0)
            cout<<"Impossivel calcular"<<endl;
        if (DELTA>=0)
        {
            R1=(-B+sqrt(DELTA))/(2*A);
            R2=(-B-sqrt(DELTA))/(2*A);
            cout.precision(5);
            cout <<std:: fixed;
            cout<<"R1 = "<<R1<<endl;
            cout<<"R2 = "<<R2<<endl;
        }
    }
    if (A<0)
    {
        DELTA=(B*B)-(4*A*C);
        if 	(DELTA<0)
            cout<<"Impossivel calcular"<<endl;
        if (DELTA>=0)
        {
            R1=(-B+sqrt(DELTA))/(2*A);
            R2=(-B-sqrt(DELTA))/(2*A);
            cout.precision(5);
            cout <<std:: fixed;
            cout<<"R1 = "<<R1<<endl;
            cout<<"R2 = "<<R2<<endl;
        }
    }
    if (A==0)
        cout<<"Impossivel calcular"<<endl;
    return 0;
}
