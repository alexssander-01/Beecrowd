#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string lixo;
    int di,hi,mi,si,df,hf,mf,sf,tempo,ti,tf;
    cin>>lixo;
    cin>>di;
    cin>>hi;
    cin>>lixo;
    cin>>mi;
    cin>>lixo;
    cin>>si;
    cin>>lixo;
    cin>>df;
    cin>>hf;
    cin>>lixo;
    cin>>mf;
    cin>>lixo;
    cin>>sf;
    ti=di*86400+hi*3600+mi*60+si;
    tf=df*86400+hf*3600+mf*60+sf;
    tempo=tf-ti;
    di=tempo/86400;
    cout<<di<<" dia(s)"<<endl;
    di=tempo%86400;
    hi=di/3600;
    cout<<hi<<" hora(s)"<<endl;
    hi=di%3600;
    mi=hi/60;
    cout<<mi<<" minuto(s)"<<endl;
    hi=hi%60;
    cout<<hi<<" segundo(s)"<<endl;
    return 0;
}
