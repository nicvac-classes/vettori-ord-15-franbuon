#include <iostream>
using namespace std;

int main() {
    int N, i, j, t;
    string s;
    bool scambio;
    cout<<"Quante maccine partecipano alla gara?"<<endl;
    cin>>N;
    float posizioni[N];
    string nomi[N];
    i=0;
    while(i<N)
    {
        cout<<"Qual'é la marca della tua automobile?"<<endl;
        cin>>nomi[i];
        posizioni[i]=1+rand()%N;
        cout<<posizioni[i];
        i=i+1;
    }
    i=0;
    scambio=true;
    while(i<=N-1 and scambio)
    {
        scambio=false;
        j=0;
        while(j<=(N-2)-i)
        {
            if(posizioni[j]>posizioni[j+1])
            {
                t=posizioni[j];
                posizioni[j]=posizioni[j+1];
                posizioni[j+1]=t;
                s=nomi[j];
                nomi[j]=nomi[j+1];
                nomi[j+1]=s;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<N)
    {
        cout<<"La "<<nomi[i]<<" è arrivata in "<<posizioni[i]<<"° posizione"<<endl;
        i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
