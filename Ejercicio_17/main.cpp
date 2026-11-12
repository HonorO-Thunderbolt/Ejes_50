#include <iostream>
using namespace std;

void EliminarEleXPos(int v[], int n, int i, int p){
    if(i==n-1) return;
    if(i>=p) v[i]=v[i+1];
    EliminarEleXPos(v,n,i+1,p);
}
void mostrar(const int v[], int n, int i) {
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
int main() {
    int p;
    cout<<"P= ";cin>>p;
    int v[5] = {7,2,9,4,6};
    EliminarEleXPos(v,5,0,p);
    mostrar(v,4,0);
    return 0;
}