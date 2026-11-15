#include <iostream>
using namespace std;

const int N=3;
void mostrar(const int m[][N], int i, int j){
    if (i == N) return;
    if (j == N){
        cout << endl;
        mostrar(m, i + 1, 0);
        return;
    }
    cout << m[i][j] << " ";
    mostrar(m, i, j + 1);
}
void SumarRegionesTriangulares(const int m[][N],int i, int j, int& SS, int& SI){
    if(i==N) return;
    if(j==N){
        SumarRegionesTriangulares(m,i+1,0,SS,SI);
        return;
    }
    if(i<=j) SS+=m[i][j];
    if(i>=j) SI+=m[i][j];
    SumarRegionesTriangulares(m,i,j+1,SS,SI);
}
int main(){
    int m[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    mostrar(m,0,0);
    cout<<endl;
    int SS=0, SI=0;
    SumarRegionesTriangulares(m,0,0,SS,SI);
    cout<<"Triangulo Superior= "<<SS<<endl;
    cout<<"Triangulo Inferior= "<<SI<<endl;
    return 0;
}