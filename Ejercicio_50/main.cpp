#include <iostream>
using namespace std;

const int F=3, C=3;
void mostrar(const int m[][C], int i, int j){
    if (i == F) return;
    if (j == C){
        cout << endl;
        mostrar(m, i + 1, 0);
        return;
    }
    cout << m[i][j] << " ";
    mostrar(m, i, j + 1);
}
int maxSuma(const int m[][C], int i, int j, int& Camino) {
    if (i == F-1 and j == C-1) return m[i][j];
    if (i == F or j == C) return -1;
    int derecha = maxSuma(m, i, j + 1,Camino);
    int abajo = maxSuma(m, i + 1, j,Camino);
    if(derecha > abajo) Camino=derecha;
    else Camino=abajo;
    return m[i][j]+Camino;
}
int main(){
    int m[F][C] = {{5,1,2},{4,8,3},{1,9,6}};
    mostrar(m,0,0);
    cout<<endl;
    int Camino=0;
    cout<<"Suma maxima= "<<maxSuma(m,0,0,Camino);
    return 0;
}