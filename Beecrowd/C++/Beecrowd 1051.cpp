#include <iostream>

using namespace std;

int main()
{
    float salario,imposto;
    cin>>salario;
    cout.precision(2);
    cout<<std::fixed;
    if (salario<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    if (salario>2000.00&&salario<=3000.00)
    {
        imposto=(salario-2000)*0.08;
        cout<<"R$ "<<imposto<<endl;
    }
    if (salario>3000.00&&salario<=4500.00)
    {
        imposto=(salario-3000)*0.18+80;
        cout<<"R$ "<<imposto<<endl;
    }
    if (salario>4500.00)
    {
        imposto=(salario-4500)*0.28+350;
        cout<<"R$ "<<imposto<<endl;
    }
    return 0;
}
