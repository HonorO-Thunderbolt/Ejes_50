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
void ContarParesImpares(const int m[][C], int i, int j, int& Par, int& Impar){
    if(i==F) return;
    if(j==C){
        ContarParesImpares(m,i+1,0,Par,Impar);
        return;
    }
    if(m[i][j]%2==0) Par++;
    else Impar++;
    ContarParesImpares(m,i,j+1,Par,Impar);
}
int main(){
    int m[F][C] = {{2,3,4},{5,6,7}};
    mostrar(m,0,0);
    int Par=0,Impar=0;
    ContarParesImpares(m,0,0,Par,Impar);
    cout<<"Pares= "<<Par<<endl;
    cout<<"Impares= "<<Impar<<endl;
    return 0;
}