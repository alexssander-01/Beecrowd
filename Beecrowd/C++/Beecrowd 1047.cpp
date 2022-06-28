#include <iostream>

using namespace std;

int main()
{
    int hi,mi,hf,mf,hora,minuto,resto;
    cin>>hi>>mi>>hf>>mf;
    hi=hi*60;
    hi=hi+mi;
    hf=hf*60;
    hf=hf+mf;
    if (hi>hf)
    {
        hora=1440-hi;
        hora=hora+hf;
        resto=hora;
        hora=hora/60;
        minuto=resto%60;
        cout<<"O JOGO DUROU "<<hora<<" HORA(S) E "<<minuto<<" MINUTO(S)"<<endl;
    }
    if (hi<hf)
    {
        hora=hf-hi;
        resto=hora;
        hora=hora/60;
        minuto=resto%60;
        cout<<"O JOGO DUROU "<<hora<<" HORA(S) E "<<minuto<<" MINUTO(S)"<<endl;
    }
    if (hi==hf)
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    return 0;
}
