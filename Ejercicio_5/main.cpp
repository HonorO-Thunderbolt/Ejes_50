#include <iostream>
using namespace std;

int contarPares(const int v[], int n, int i, int& c){
    if (i == n) return c;
    if (v[i] % 2 == 0) c++;
    return contarPares(v, n, i + 1,c);
}

int main(){
    int v[7] = {3, 8, 10, 7, 2, 5, 6};
    int c=0;
    cout<<"Cantidad pares= "<<contarPares(v, 7, 0, c);
    return 0;
}