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
bool VerfCerosDiagonalInferior(const int m[][N], int i, int j){
    if(i==N) return true;
    if(j==N) return VerfCerosDiagonalInferior(m,i+1,0);
    if(i>j and m[i][j]!=0) return false;
    return VerfCerosDiagonalInferior(m,i,j+1);
}
int main(){
    int m[N][N] = {{2,3,4},{0,5,6},{0,0,7}};
    mostrar(m,0,0);
    cout<<endl;
    cout<<VerfCerosDiagonalInferior(m,1,0);
    return 0;
}