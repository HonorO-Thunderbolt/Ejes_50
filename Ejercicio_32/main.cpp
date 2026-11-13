#include <iostream>
using namespace std;

const int F = 2, C = 4;
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
void ContarPosNegCeros(const int m[][C], int i,int j, int& CantPos,int& CantNeg, int& Cant0){
    if(i==F) return;
    if(j==C){
        ContarPosNegCeros(m,i+1,0,CantPos,CantNeg,Cant0);
        return;
    }
    if(m[i][j]>0) CantPos++;
    else if(m[i][j]<0) CantNeg++;
    else Cant0++;
    ContarPosNegCeros(m,i,j+1,CantPos,CantNeg,Cant0);
}
int main(){
    int m[F][C] = {{-1,0,2,5},{0,-3,4,-2}};
    mostrar(m,0,0);
    cout<<endl;
    int CantPos=0,CantNeg=0,Cant0=0;
    ContarPosNegCeros(m,0,0,CantPos,CantNeg,Cant0);
    cout<< "Positivos= " <<CantPos<<endl;
    cout<< "Negativos= "<<CantNeg<<endl;
    cout<< "Ceros= "<<Cant0<<endl;
    return 0;
}