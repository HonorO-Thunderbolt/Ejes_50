#include <iostream>
using namespace std;

void OrdenInverso(int v[], int n) {
    if (n <= 0) return;
    cout << v[n -1]<<"\t";
    OrdenInverso(v,n-1);
}
int main() {
    int v[5] = {10, 20, 30, 40, 50};
    OrdenInverso(v, 5);
    return 0;
}