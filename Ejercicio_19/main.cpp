#include <iostream>
using namespace std;

bool VerfAsc(const int v[], int n, int i){
    if(i==n-1) return true;
    if(v[i]>v[i+1]) return false;
    return VerfAsc(v,n,i+1);
}
int busquedaBinaria(const int v[], int izq, int der, int x) {
    if (izq > der) return -1;
    int medio = izq + (der - izq) / 2;
    if (v[medio] == x) {
        return medio;
    }
    if (v[medio] > x) {
        return busquedaBinaria(v, izq, medio - 1, x);
    }
    return busquedaBinaria(v, medio + 1, der, x);
}
int main() {
    int x;
    int v[7] = {2, 4, 6, 8, 10, 12, 14};
    if(VerfAsc(v,7,0)){
        cout<<"X= ";cin>>x;
        cout<<"Indice Encontrado= "<<busquedaBinaria(v, 0, 6, x);
    }
    else cout<<-1;
    return 0;
}