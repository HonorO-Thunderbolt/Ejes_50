#include <iostream>
using namespace std;

void SumParImpar(const int v[], int n, int i, int& SPar, int& SImpar){
    if(i==n) return;
    if(i%2==0) SPar+=v[i];
    else SImpar+=v[i];
    SumParImpar(v,n,i+1,SPar,SImpar);
}
int main() {
    int v[6] = {10,3,20,4,30,5};
    int SPar=0,SImpar=0;
    SumParImpar(v,6,0,SPar,SImpar);
    cout<<"Suma Indices Pares= "<<SPar<<endl;
    cout<<"Suma Indices Impares= "<<SImpar<<endl;
    return 0;
}