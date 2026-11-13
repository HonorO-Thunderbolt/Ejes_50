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
void SumarCadaColumna(const int m[][C],int i, int j,int& SC){
    if(j==C) return;
    if(i==F){
        cout<<"Suma columnas "<<j<<"= "<<SC<<endl;
        SC=0;
        SumarCadaColumna(m,0,j+1,SC);
        return;
    }
    SC+=m[i][j];
    SumarCadaColumna(m,i+1,j,SC);
}
int main(){
    int m[F][C] = {{1,2,3},{4,5,6}};
    mostrar(m,0,0);
    cout<<endl;
    int SC=0;
    SumarCadaColumna(m,0,0,SC);
    return 0;
}