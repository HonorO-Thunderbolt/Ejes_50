#include <iostream>
using namespace std;

const int F = 4, C= 4;
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
void recorrerArriba(const int m[][C], int fila, int colInicio, int colFin) {
    if (colInicio > colFin) return;
    cout << m[fila][colInicio] << " ";
    recorrerArriba(m, fila, colInicio + 1, colFin);
}
void recorrerDerecha(const int m[][C], int filaInicio, int filaFin, int col) {
    if (filaInicio > filaFin) return;
    cout << m[filaInicio][col] << " ";
    recorrerDerecha(m, filaInicio + 1, filaFin, col);
}
void recorrerAbajo(const int m[][C], int fila, int colFin, int colInicio) {
    if (colFin < colInicio) return;
    cout << m[fila][colFin] << " ";
    recorrerAbajo(m, fila, colFin - 1, colInicio);
}
void recorrerIzquierda(const int m[][C], int filaFin, int filaInicio, int col) {
    if (filaFin < filaInicio) return;
    cout << m[filaFin][col] << " ";
    recorrerIzquierda(m, filaFin - 1, filaInicio, col);
}
void recorridoEspiral(const int m[][C], int iniF, int finF, int iniC, int finC){
    if (iniF > finF or iniC > finC) return;
    recorrerArriba(m, iniF, iniC, finC);
    recorrerDerecha(m, iniF + 1, finF, finC);
    if(iniF < finF) recorrerAbajo(m, finF, finC - 1, iniC);
    if(iniC < finC) recorrerIzquierda(m, finF - 1, iniF + 1, iniC);
    recorridoEspiral(m,iniF+1,finF-1,iniC+1, finC-1);
}
int main(){
    int m[F][C] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    mostrar(m,0,0);
    cout<<endl;
    recorridoEspiral(m,0,F-1,0,C-1);
    return 0;
}