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
void PosicionX(const int m[][C], int i, int j, int x,int& ix,int& jx){
    if(i==F) return;
    if(j==C){
        PosicionX(m,i,j+1,0,ix,jx);
        return;
    }
    if(m[i][j]==x){
        ix=i;
        jx=j;
        return;
    }
    PosicionX(m,i,j+1,x,ix,jx);
}
int main(){
    int x;
    int m[F][C] = {{4,8,2},{7,8,5}};
    mostrar(m,0,0);
    cout<<endl;
    cout<<"X= ";cin>>x;
    cout<<endl;
    int ix=-1,jx=-1;
    PosicionX(m,0,0,x,ix,jx);
    cout<< "Fila= " <<ix<<endl;
    cout<< "Columna= "<<jx<<endl;
    return 0;
}