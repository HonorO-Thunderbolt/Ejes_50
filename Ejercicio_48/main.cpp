#include <iostream>
using namespace std;

const int F=2, C=2;
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
bool esMinimoFila(const int m[][C], int fila, int col, int val, int jAct){
    if (jAct == C) return true;
    if (m[fila][jAct] < val) return false;
    return esMinimoFila(m, fila, col, val, jAct + 1);
}
bool esMaximoColumna(const int m[][C], int fila, int col, int val, int iAct){
    if (iAct == F) return true;
    if (m[iAct][col] > val) return false;
    return esMaximoColumna(m, fila, col, val, iAct + 1);
}
void buscarPuntoDeSilla(const int m[][C], int i, int j, int& Silla, int& Si, int& Sj) {
    if (i == F) return;
    if (j == C) {
        buscarPuntoDeSilla(m, i + 1, 0,Silla,Si,Sj);
        return;
    }
    if (esMinimoFila(m, i, j, m[i][j], 0) and esMaximoColumna(m, i, j, m[i][j], 0)) {
        Silla=m[i][j];
        Si=i;
        Sj=j;
    }
    buscarPuntoDeSilla(m, i, j + 1,Silla,Si,Sj);
}
int main(){
    int m[F][C] = {{3,1},{4,2}};
    mostrar(m,0,0);
    cout<<endl;
    int Silla=m[0][0]; int Si=0,Sj=0;
    buscarPuntoDeSilla(m,0,0,Silla,Si,Sj);
    cout<<"valor= "<<Silla<<endl;
    cout<<"Fila= "<<Si<<endl;
    cout<<"Columna= "<<Sj<<endl;
    return 0;
}