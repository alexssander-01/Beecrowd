#include <iostream>

using namespace std;

int main()
{
    float CODIGO,QUANTIDADE,VALORT,VALOR;
    cin>>CODIGO>>QUANTIDADE;
    cout.precision(2);
    cout<<std::fixed;
    if (CODIGO==1)
    {
        VALOR=4;
        VALORT=VALOR*QUANTIDADE;
        cout<<"Total: R$ "<<VALORT<<endl;

    }
    if (CODIGO==2)
    {
        VALOR=4.5;
        VALORT=VALOR*QUANTIDADE;
        cout<<"Total: R$ "<<VALORT<<endl;
    }
    if (CODIGO==3)
    {
        VALOR=5;
        VALORT=VALOR*QUANTIDADE;
        cout<<"Total: R$ "<<VALORT<<endl;
    }
    if (CODIGO==4)
    {
        VALOR=2;
        VALORT=VALOR*QUANTIDADE;
        cout<<"Total: R$ "<<VALORT<<endl;
    }
    if (CODIGO==5)
    {
        VALOR=1.5;
        VALORT=VALOR*QUANTIDADE;
        cout<<"Total: R$ "<<VALORT<<endl;
    }

    return 0;
}
