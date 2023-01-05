#include "member.h"

using namespace std;

void inputData(member *MB){
    int k;
    cout << "Tuliskan IDnumber : ";
    cin >> (*MB).IDnumber;
    k = 0;
    while (k < Max){
        cout << "point bulan ke-"<<k+1<<": ";
        cin >> (*MB).poin[k];
        k = k+1;
    }
}

double ratarata(member MB){
    int jum = 0;
    for (int i=0;i<Max;i++){
        jum = jum + MB.poin[i];
    }
    return jum/Max;
}

void showData(member MB){
    cout<<"IDmember : "<<MB.IDnumber<<endl;
    cout<<"poin :";
    for (int i=0;i<Max;i++){
        cout<<" "<<MB.poin[i];
    }
    cout<<endl;
}
