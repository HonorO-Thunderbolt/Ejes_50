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
void SumarTri(const int m[][N],int i, int j, int& SEncima, int & SDebajo){
    if(i==N) return;
    if(j==N){
        SumarTri(m,i+1,0,SEncima,SDebajo);
        return;
    }
    if(j>i) SEncima+=m[i][j];
    else if(i>j) SDebajo+=m[i][j];
    SumarTri(m,i,j+1,SEncima,SDebajo);
}
int main(){
    int m[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    mostrar(m,0,0);
    cout<<endl;
    int SEncima = 0,SDebajo = 0;
    SumarTri(m, 0, 0, SEncima, SDebajo);
    cout<<"Encima= "<<SEncima<<endl;
    cout<<"Debajo= "<<SDebajo<<endl;
    return 0;
}