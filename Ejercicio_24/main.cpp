#include <iostream>
using namespace std;

void mostrar(const int v[], int n, int i){
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
void SegundoMayor(const int v[],int n, int i, int& IPM, int& ISM, int& PM, int& SM){
    if(i==n) return;
    if(v[i]>PM){
        SM=PM;
        ISM=IPM;
        PM=v[i];
        IPM=i;
    }
    else if(v[i] > SM and v[i] < PM){
        SM = v[i];
        ISM = i;
    }
    SegundoMayor(v,n,i+1,IPM,ISM,PM,SM);
}
int main() {
    int n=7;
    int v[7] = {8, 2, 8, 5, 7, 7, 1};
    cout << "Vector original= ";
    mostrar(v, n, 0);
    cout << endl;
    int IPM=0,ISM=0,PM=v[0],SM=-1;
    SegundoMayor(v,n,0,IPM,ISM,PM,SM);
    cout<<"Primer Mayor= "<<PM<<endl;
    cout<<"Segundo Mayor= "<<SM<<endl;
    return 0;
}