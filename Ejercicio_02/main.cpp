#include <iostream>
using namespace std;

void mostrar(const int v[], int n, int i) {
 if (i == n) return;
 cout << v[i] << " ";
 mostrar(v, n, i + 1);
}
int main() {
 int v[5] = {10, 20, 30, 40, 50};
 mostrar(v, 5, 0);
 return 0;
}