#include <iostream>
using namespace std;

void cargar(int v[], int n, int i) {
    if (i == n) return;
    cout << "Ingrese numero " << i + 1 << "= ";
    cin >> v[i];
    cargar(v, n, i + 1);
    cout<<v[i]<<"\t";
}
int main() {
    int v[5];
    cargar(v, 5, 0);
    return 0;
}