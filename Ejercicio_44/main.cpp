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
void Girar90(const int m[][N], int i, int j){
    if(i==N) return;
    if(j==N){
        cout << endl;
        Girar90(m,i+1,0);
        return;
    }
    cout<< m[N-1-j][i]<< " ";
    Girar90(m,i,j+1);
}
int main(){
    int m[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    mostrar(m,0,0);
    cout<<endl;
    Girar90(m,0,0);
    return 0;
}