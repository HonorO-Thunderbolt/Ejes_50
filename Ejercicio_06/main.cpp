#include <iostream>
using namespace std;

void contar(const int v[], int n, int i,int &negativos, int &positivos, int& ceros) {
    if (i == n) return;
    if (v[i] < 0) negativos++;
    else if(v[i] > 0) positivos++;
    else ceros++;
    contar(v, n, i + 1, negativos,positivos,ceros);
}
int main() {
    int v[7] = {-2, 0, 5, -7, 3, 0, 1};
    int negativos = 0, positivos = 0, ceros=0;
    contar(v, 7, 0, negativos, positivos, ceros);
    cout << "Negativos= " << negativos << endl;
    cout << "Positivos= " << positivos << endl;
    cout<< "Ceros= "<< ceros;
    return 0;
}