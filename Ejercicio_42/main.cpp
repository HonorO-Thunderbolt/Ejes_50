#include <iostream>
using namespace std;

const int F = 3, C = 3;
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
void MayorCadaFila(const int m[][C],int i, int j,int MF){
    if(i==F) return;
    if(j==C){
        cout<<"Mayor fila "<<i<<"= "<<MF<<endl;
        MF=m[i+1][0];
        MayorCadaFila(m,i+1,0,MF);
        return;
    }
    if(m[i][j]>MF) MF=m[i][j];
    MayorCadaFila(m,i,j+1,MF);
}
int main(){
    int m[F][C] = {{2,9,4},{8,1,5},{3,7,6}};
    mostrar(m,0,0);
    cout<<endl;
    MayorCadaFila(m,0,0,m[0][0]);
    return 0;
}