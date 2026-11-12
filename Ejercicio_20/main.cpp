#include <iostream>
using namespace std;

bool existeAntes(const int v[], int i, int x, int actual = 0){
    if (actual >= i) return false;
    if (v[actual] == x) return true;
    return existeAntes(v, i, x, actual + 1);
}
void eliminarEnPos(int v[], int n, int i, int p){
    if (i == n - 1) return;
    if (i >= p) v[i] = v[i + 1];
    eliminarEnPos(v, n, i + 1, p);
}
void quitarDuplicados(int v[],int& n, int i){
    if(i>=n) return;
    if (existeAntes(v, i, v[i])) {
        eliminarEnPos(v, n, 0, i);
        n--;
        quitarDuplicados(v, n, i);
    } else {
        quitarDuplicados(v, n, i + 1);
    }
}
void mostrar(const int v[], int n, int i){
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
int busquedaBinaria(const int v[], int izq, int der, int x){
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
    int n=8;
    int v[8] = {4, 7, 4, 2, 7, 9, 2, 5};
    cout << "Vector original= ";
    mostrar(v, n, 0);
    cout << endl;
    quitarDuplicados(v, n, 0);
    cout << "Sin duplicados= ";
    mostrar(v, n, 0);
    cout << endl;
    return 0;
}