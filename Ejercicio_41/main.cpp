#include <iostream>
using namespace std;

const int F = 2, C = 3;
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
void mostrarTranspuesta(const int m[][C], int j, int i){
    if (j == C) return;
    if (i == F){
        cout << endl;
        mostrarTranspuesta(m, j + 1, 0);
        return;
    }
    cout << m[i][j] << " ";
    mostrarTranspuesta(m, j, i + 1);
}
int main(){
    int m[F][C] = {{1,2,3},{4,5,6}};
    mostrar(m,0,0);
    cout<<endl;
    mostrarTranspuesta(m,0,0);
    return 0;
}