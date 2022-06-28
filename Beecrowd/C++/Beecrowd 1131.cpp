#include <iostream>

using namespace std;

int main()
{
    int I,G,i,n,inter,gremio,empates;
    i=0;
    n=0;
    inter=0;
    gremio=0;
    empates=0;
    do
    {
        cin>>I>>G;
        if (I>G)
        {
            inter += 1;
            i++;
        }
        else if (I<G)
        {
            gremio += 1;
            i++;
        }
        else
        {
            empates += 1;
            i++;
        }
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>n;
        if (n==2)
        {
            break;
        }
    } while (true);
    cout<<i<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<empates<<endl;
    if (inter>gremio)
    {
        cout<<"Inter venceu mais"<<endl;
    }
    else if (gremio>inter)
    {
        cout<<"Gremio venceu mais"<<endl;
    }
    else
    {
        cout<<"Nao houve vencedor"<<endl;
    }
    return 0;
}
