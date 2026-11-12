#include <iostream>
using namespace std;

void mostrar(const int v[], int n, int i){
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
void mostrarSegmento(const int v[], int inicio, int longitud, int actual = 0) {
    if (actual == longitud) return;
    cout << v[inicio + actual] << " ";
    mostrarSegmento(v, inicio, longitud, actual + 1);
}
void consecutivaCreciente(int v[], int n, int i, int& cm,int& c,int& inicio_max, int& inicio_actual){
    if(i==n-1){
        if(c > cm){
            cm=c;
            inicio_max = inicio_actual;
        }
        return;
    }
    if(v[i]<v[i+1]){
        c++;
        consecutivaCreciente(v,n,i+1,cm,c,inicio_max,inicio_actual);
    }else{
        if(c>cm){
            cm=c;
            inicio_max = inicio_actual;
        }
        c=1;
        inicio_actual = i + 1;
        consecutivaCreciente(v,n,i+1,cm,c,inicio_max,inicio_actual);
    }
}
int main() {
    int n=9;
    int v[9] = {2, 4, 7, 1, 3, 5, 6, 2, 4};
    cout << "Vector original= ";
    mostrar(v, n, 0);
    cout << endl;
    int cm=1,c=1,inicio_max = 0, inicio_actual = 0;
    consecutivaCreciente(v,n,0,cm,c,inicio_max,inicio_actual);
    cout<< "Vector resultado= ";
    mostrarSegmento(v,inicio_max,cm);
    cout<<endl;
    cout<< "Longitud maxima= "<<cm;
    return 0;
}