#include <iostream>
using namespace std;

void mostrar(const int v[], int n, int i){
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
void mostrarSegmento(const int v[], int actual, int fin) {
    if (actual > fin) return;
    cout << v[actual] << " ";
    mostrarSegmento(v, actual + 1, fin);
}
void maximaSumaSegmento(const int v[], int n, int i,int& suma_actual, int& suma_max,int& inicio_temporal, int& inicio_max, int& fin_max) {
    if (i == n) return;
    if (v[i] > suma_actual + v[i]) {
        suma_actual = v[i];
        inicio_temporal = i;
    } else {
        suma_actual += v[i];
    }
    if (suma_actual > suma_max) {
        suma_max = suma_actual;
        inicio_max = inicio_temporal;
        fin_max = i;
    }
    maximaSumaSegmento(v, n, i + 1, suma_actual, suma_max, inicio_temporal, inicio_max, fin_max);
}
int main() {
    int n=8;
    int v[8] = {-2, 1, -3, 4, -1, 2, 1, -5};
    cout << "Vector original= ";
    mostrar(v, n, 0);
    cout << endl;
    int suma_actual = v[0],suma_max = v[0];
    int inicio_temporal = 0,inicio_max = 0,fin_max = 0;
    maximaSumaSegmento(v, n, 1, suma_actual, suma_max, inicio_temporal, inicio_max, fin_max);
    cout << "Suma maxima: " << suma_max<<endl;
    cout << "segmento= ";
    mostrarSegmento(v, inicio_max, fin_max);
    return 0;
}