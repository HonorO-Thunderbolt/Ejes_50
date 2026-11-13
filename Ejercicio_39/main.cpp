#include <iostream>
using namespace std;

const int F = 3, C = 4;
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
void MostrarBorde(const int m[][C], int i, int j){
    if(i==F) return;
    if(j==C){
        MostrarBorde(m,i+1,0);
        return;
    }
    if(i==0 or i== F-1 or j==0 or j==C-1){
        cout<<m[i][j]<<" ";
    }
    MostrarBorde(m,i,j+1);
}
int main(){
    int m[F][C] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    mostrar(m,0,0);
    cout<<endl;
    MostrarBorde(m,0,0);
    return 0;
}