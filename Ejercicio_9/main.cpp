#include <iostream>
using namespace std;

int ElemetoMayor(const int v[], int n, int i, int &m) {
    if (i == n) return m;
    if (v[i]>m) m=v[i];
    return ElemetoMayor(v, n, i + 1,m);
}
int main() {
    int v[5] = {-8,-2,-11,-5,-3};
    int m=v[0];
    cout<<"Elemnto Mayor= "<<ElemetoMayor(v,5,0,m);
    return 0;
}