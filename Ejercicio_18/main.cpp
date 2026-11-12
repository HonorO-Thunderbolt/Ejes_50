#include <iostream>
using namespace std;

int encontrarMin(const int v[], int n, int i, int minI) {
    if (i == n) return minI;
    if (v[i] < v[minI]) {
        minI = i;
    }
    return encontrarMin(v, n, i + 1, minI);
}
void ordenarAsc(int v[], int n, int i) {
    if (i >= n - 1) return;
    int minI = encontrarMin(v, n, i, i);
    if (minI != i) {
        int aux = v[i];
        v[i] = v[minI];
        v[minI] = aux;
    }
    ordenarAsc(v, n, i + 1);
}
void mostrar(const int v[], int n, int i) {
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
int main() {
    int v[6] = {8,1,6,3,2,5};
    mostrar(v, 6, 0);
    cout << endl;
    ordenarAsc(v, 6, 0);
    cout << "Vector ordenado= ";
    mostrar(v, 6, 0);
    cout << endl;
    return 0;
}