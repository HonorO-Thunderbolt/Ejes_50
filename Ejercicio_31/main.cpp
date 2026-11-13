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
void MenorElemento(const int m[][C], int i, int j, int& ME, int& IM, int& JM){
    if (i==F) return;
    if (j==C){
        MenorElemento(m,i+1,0,ME,IM,JM);
        return;
    }
    if (m[i][j]<ME){
        ME=m[i][j];
        IM=i;
        JM=j;
    }
    MenorElemento(m,i,j+1,ME,IM,JM);
}
int main(){
    int m[F][C] = {{5,2,8},{1,7,6},{1,4,9}};
    mostrar(m,0,0);
    cout<<endl;
    int IM=0,JM=0;int ME=m[0][0];
    MenorElemento(m,0,0,ME,IM,JM);
    cout<< "Menor = " <<ME<<endl;
    cout<< "Fila= "<<IM<<endl;
    cout<< "Columna= "<<JM<<endl;
    return 0;
}