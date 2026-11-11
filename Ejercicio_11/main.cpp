#include <iostream>
using namespace std;

int PrimerPosEle(const int v[], int n, int i, int x){
    if(v[i]==x) return i;
    if(i==n) return -1;
    return PrimerPosEle(v,n,i+1,x);
}
int main() {
    int x;
    cout<<"X= ";cin>>x;
    int v[6] = {2,9,4,9,7,1};
    cout<<"Primera Posicion= "<<PrimerPosEle(v,6,0,x);
    return 0;
}