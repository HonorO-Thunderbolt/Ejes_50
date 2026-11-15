#include <iostream>
using namespace std;

const int F=3, C=3;
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
bool VerfHorizontal(const int m[][C],int i, int j, int k, int c){
    if(i==F) return false;
    if(j==C) return VerfHorizontal(m,i+1,0,k,0);
    if(m[i][j]==k) c++;
    else c=0;
    if(c==F) return true;
    return VerfHorizontal(m,i,j+1,k,c);
}
bool VerfVertical(const int m[][C],int i, int j, int k, int c){
    if(j==C) return false;
    if(i==F) return VerfVertical(m,0,j+1,k,0);
    if(m[i][j]==k) c++;
    else c=0;
    if(c==C) return true;
    return VerfVertical(m,i+1,j,k,c);
}
bool VerfDiagonal(const int m[][C],int i, int j, int k, int c){
    if(i==F or j==C) return false;
    if(m[i][j]==k) c++;
    else c=0;
    if(c==F or c==C) return true;
    return VerfDiagonal(m,i+1,j+1,k,c);
}
bool VerfFinal(const int m[][C],int i, int j, int k){
    if(VerfHorizontal(m,0,0,k,0) or VerfVertical(m,0,0,k,0) or VerfDiagonal(m,0,0,k,0)) return true;
    return false;
}
int main(){
    int k;
    int m[F][C] = {{5,1,2},{4,5,3},{7,8,5}};
    mostrar(m,0,0);
    cout<<endl;
    cout<<"K= ";cin>>k;cout<<endl;
    cout<<VerfFinal(m,0,0,k);
    return 0;
}