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
void SumarCadaFila(const int m[][C],int i, int j,int& SF){
    if(i==F) return;
    if(j==C){
        cout<<"Suma fila "<<i<<"= "<<SF<<endl;
        SF=0;
        SumarCadaFila(m,i+1,0,SF);
        return;
    }
    SF+=m[i][j];
    SumarCadaFila(m,i,j+1,SF);
}
int main(){
    int m[F][C] = {{2,4,6},{1,3,5},{7,8,9}};
    mostrar(m,0,0);
    cout<<endl;
    int SF=0;
    SumarCadaFila(m,0,0,SF);
    return 0;
}