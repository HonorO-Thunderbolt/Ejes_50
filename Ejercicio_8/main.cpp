#include <iostream>
using namespace std;

int multiplesK(const int v[],int k, int n, int i, int &c) {
    if (i == n) return c;
    if(v[i]%k==0) c++;
    return multiplesK(v,k, n, i + 1,c);
}

int main() {
    int k;
    cout<<"Numero Multiplico= ";cin>>k;
    int v[6] = {6,10,12,15,18,21};
    int c=0;
    cout<<"Resultado= "<<multiplesK(v,k,6,0,c);
    return 0;
}