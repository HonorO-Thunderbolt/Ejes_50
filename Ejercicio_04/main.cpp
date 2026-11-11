#include <iostream>
using namespace std;

int sumar(const int v[], int n, int i) {
    if (i == n) return 0;
    return v[i] + sumar(v, n, i + 1);
}
int main() {
    int v[5] = {10, 20, 30, 40, 50};
    cout << "Suma: " << sumar(v, 5, 0);
    return 0;
}