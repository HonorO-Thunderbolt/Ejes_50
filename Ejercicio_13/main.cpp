#include <iostream>
using namespace std;

void ReempEle(int v[], int n, int i, int x, int y){
    if(i==n) return;
    if(v[i]==x) v[i]=y;
    ReempEle(v,n,i+1,x,y);
}
void mostrar(const int v[], int n, int i) {
    if (i == n) return;
    cout << v[i] << " ";
    mostrar(v, n, i + 1);
}
int main() {
    int x,y;
    cout<<"X= ";cin>>x;
    cout<<"Y= ";cin>>y;
    int v[6] = {4,2,4,7,4,1};
    ReempEle(v,6,0,x,y);
    mostrar(v,6,0);
    return 0;
}