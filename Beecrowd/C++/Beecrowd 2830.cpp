#include <iostream>

using namespace std;

int main()
{
    int k,l,a,b;
    cin>>k>>l;
    if (k<=16&&l<=16)
    {
        a=0;
        if (k<=8&&l<=8)
        {
            b=0;
            if (k<=4&&l<=4)
            {
                a=0;
                if (k<=2&&l<=2)
                {
                    a=1;
                    b=1;
                    cout<<"oitavas"<<endl;
                }
                if (k>=3&&k<=4&&l>=3&&l<=4)
                {
                    a=1;
                    b=1;
                    cout<<"oitavas"<<endl;
                }
                if (a==0)
                {
                    a=1;
                    b=1;
                    cout<<"quartas"<<endl;
                }
            }
            if (k>=5&&k<=8&&l>=5&&l<=8)
            {
                a=0;
                if (k>=5&&k<=6&&l>=5&&l<=6)
                {
                    a=1;
                    b=1;
                    cout<<"oitavas"<<endl;
                }
                if (k>=7&&k<=8&&l>=7&&l<=8)
                {
                    a=1;
                    b=1;
                    cout<<"oitavas"<<endl;
                }
                if (a==0)
                {
                    a=1;
                    b=1;
                    cout<<"quartas"<<endl;
                }
            }
            if (b==0)
            {
                a=1;
                cout<<"semifinal"<<endl;
            }
        }
        if (k>=9&&k<=16&&l>=9&&l<=16)
        {
            b=0;
            if (k>=9&&k<=12&&l>=9&&l<=12)
            {
                if (k>=9&&k<=10&&l>=9&&l<=10)
                {
                    a=1;
                    b=1;
                    cout<<"oitavas"<<endl;
                }
                if (k>=11&&k<=12&&l>=11&&l<=12)
                {
                    a=1;
                    b=1;
                    cout<<"oitavas"<<endl;
                }
                if (a==0)
                {
                    a=1;
                    b=1;
                    cout<<"quartas"<<endl;
                }
            }
            if (k>=13&&k<=16&&l>=13&&l<=16)
            {
                a=0;
                if (k>=13&&k<=14&&l>=13&&l<=14)
                {
                    a=1;
                    b=1;
                    cout<<"oitavas"<<endl;
                }
                if (k>=15&&k<=16&&l>=15&&l<=16)
                {
                    a=1;
                    b=1;
                    cout<<"oitavas"<<endl;
                }
                if (a==0)
                {
                    a=1;
                    b=1;
                    cout<<"quartas"<<endl;
                }
            }
            if (b==0)
            {
                a=1;
                cout<<"semifinal"<<endl;
            }
        }
        if (a==0)
        {
            cout<<"final"<<endl;
        }
    }
    return 0;
}
