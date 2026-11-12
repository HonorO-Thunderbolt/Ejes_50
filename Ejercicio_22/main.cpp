#include <iostream>
using namespace std;

void mostrar(const int v[], int n, int i){
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
void rotarUnaPosicion(int v[], int n, int i, int ultimo) {
    if (i == n) return;
    int actual = v[i];
    v[i] = ultimo;
    rotarUnaPosicion(v, n, i + 1, actual);
}
void RotarVector(int v[],int n, int k){
    if(k<=0) return;
    int ultimo=v[n-1];
    rotarUnaPosicion(v,n,0,ultimo);
    RotarVector(v,n,k-1);
}
int main() {
    int n=5;int k;
    int v[5] = {1,2,3,4,5};
    cout << "Vector original= ";
    mostrar(v, n, 0);
    cout << endl;
    cout<<"k= ";cin>>k;
    RotarVector(v,n,k);
    cout<< "Vector resultado= ";
    mostrar(v,n,0);
    return 0;
}