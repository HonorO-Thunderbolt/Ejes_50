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
int SumarBorde(const int m[][C], int i, int j, int& S){
    if(i==F) return S;
    if(j==C){
        return SumarBorde(m,i+1,0,S);
    }
    if(i==0 or i== F-1 or j==0 or j==C-1){
        S+=m[i][j];
    }
    return SumarBorde(m,i,j+1,S);
}
int main(){
    int m[F][C] = {{1,2,3},{4,5,6},{7,8,9}};
    mostrar(m,0,0);
    cout<<endl;
    int S=0;
    cout<<"Suma del borde= "<<SumarBorde(m,0,0,S);
    return 0;
}