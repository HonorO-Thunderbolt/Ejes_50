#include <iostream>
using namespace std;

const int N = 3;
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
int diagonalSec(const int m[][N], int i){
    if (i == N) return 0;
    return m[i][N-1-i] + diagonalSec(m, i + 1);
}
int main(){
    int m[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    mostrar(m,0,0);
    cout<<endl;
    cout << "Suma diagonal secundaria= " << diagonalSec(m, 0);
    return 0;
}