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
int mayorElemento(const int m[][C], int i, int j, int ME){
    if (i==F) return ME;
    if (j==C) return mayorElemento(m,i+1,0,ME);
    if (m[i][j]>ME) ME=m[i][j];
    return mayorElemento(m,i,j+1,ME);
}
int main(){
    int m[F][C] = {{-5,-1,-9},{-3,-7,-2}};
    mostrar(m,0,0);
    cout<<endl;
    cout<< "Mayor elemento= " <<mayorElemento(m, 0, 0, m[0][0])<<endl;
    return 0;
}