#include <iostream>
using namespace std;

void mostrar(const int v[], int n, int i){
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
void separarParesImpares(int v[], int izq, int der) {
    if (izq >= der) return;
    if (v[izq] % 2 == 0) {
        separarParesImpares(v, izq + 1, der);
    }
    else if (v[der] % 2 != 0) {
        separarParesImpares(v, izq, der - 1);
    }
    else {
        int aux = v[izq];
        v[izq] = v[der];
        v[der] = aux;
        separarParesImpares(v, izq + 1, der - 1);
    }
}
int main() {
    int n=6;
    int v[6] = {1,2,3,4,5,6};
    cout << "Vector original= ";
    mostrar(v, n, 0);
    cout << endl;
    separarParesImpares(v,0,n-1);
    cout<< "Vector resultado= ";
    mostrar(v,n,0);
    return 0;
}