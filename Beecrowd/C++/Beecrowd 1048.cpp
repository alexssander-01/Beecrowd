#include <iostream>

using namespace std;

int main()
{
    float S,NS,RG;
    cin>>S;
    cout.precision(2);
    cout<<std::fixed;
    if (S>2000)
    {
        NS=S*1.04;
        RG=NS-S;
        cout<<"Novo salario: "<<NS<<endl;
        cout<<"Reajuste ganho: "<<RG<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    if (S<=2000&&S>=1200.01)
    {
        NS=S*1.07;
        RG=NS-S;
        cout<<"Novo salario: "<<NS<<endl;
        cout<<"Reajuste ganho: "<<RG<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    if (S<=1200&&S>=800.01)
    {
        NS=S*1.10;
        RG=NS-S;
        cout<<"Novo salario: "<<NS<<endl;
        cout<<"Reajuste ganho: "<<RG<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    if (S<=800&&S>=400.01)
    {
        NS=S*1.12;
        RG=NS-S;
        cout<<"Novo salario: "<<NS<<endl;
        cout<<"Reajuste ganho: "<<RG<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    if (S<=400)
    {
        NS=S*1.15;
        RG=NS-S;
        cout<<"Novo salario: "<<NS<<endl;
        cout<<"Reajuste ganho: "<<RG<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    return 0;
}
