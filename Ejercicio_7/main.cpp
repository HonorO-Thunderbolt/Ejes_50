#include <iostream>
using namespace std;

double Promedio(const int v[], int n, int i, int& suma, int &c) {
    if (i == n) return static_cast<double>(suma) / c;
    suma+=v[i];
    c++;
    return Promedio(v, n, i + 1,suma,c);
}

int main() {
    int v[4] = {12,14,16,18};
    int suma=0.00, c=0;
    cout<<"Promedio= "<<Promedio(v,4,0,suma,c);
    return 0;
}