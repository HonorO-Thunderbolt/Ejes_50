#include <iostream>
using namespace std;

const int F = 2, C = 3;
void cargar(int m[][C], int i, int j){
    if (i == F) return;
    if (j == C){
        cargar(m, i + 1, 0);
        return;
    }
    cout << "Ingrese [" << i << "][" << j << "]: ";
    cin >> m[i][j];
    cargar(m, i, j + 1);
}
int main() {
    int m[F][C];
    cargar(m, 0, 0);
    return 0;
}