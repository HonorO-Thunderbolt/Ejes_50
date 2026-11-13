#include <iostream>
using namespace std;

const int F = 2, C = 3;
int sumarMatrices(const int m[][C], int i, int j){
    if (i == F) return 0;
    if (j == C) return sumarMatrices(m, i + 1, 0);
    return m[i][j] + sumarMatrices(m, i, j + 1);
}
int main(){
    int m[F][C] = {{1,2,3},{4,5,6}};
    cout << "Suma total= " << sumarMatrices(m, 0, 0);
    return 0;
}