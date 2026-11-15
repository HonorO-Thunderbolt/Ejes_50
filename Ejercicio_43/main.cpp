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
bool esSimetrica(const int m[][N], int i, int j){
    if(i==N) return true;
    if(j==N) return esSimetrica(m,i+1,0);
    if(m[i][j]!=m[j][i]) return false;
    return esSimetrica(m,i,j+1);
}
int main(){
    int m[N][N] = {{2,9,4},{2,4,5},{3,5,6}};
    mostrar(m,0,0);
    cout<<endl;
    cout<< esSimetrica(m,0,0);
    return 0;
}