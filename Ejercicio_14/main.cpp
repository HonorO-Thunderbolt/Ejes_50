#include <iostream>
using namespace std;

void inverso(const int v[], int i) {
    if (i < 0) return;
    cout << v[i] << " ";
    inverso(v, i - 1);
}
int main() {
    int v[5] = {1,2,3,4,5};
    inverso(v, 4);
    return 0;
}