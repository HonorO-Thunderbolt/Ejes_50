#include <iostream>
using namespace std;

void EleMenYPosc(const int v[], int n, int i, int &m,int& im){
    if(i == n) return;
    if(v[i]<m){
        m=v[i];
        im=i;
    }
    EleMenYPosc(v,n,i+1,m,im);
}
int main() {
    int v[6] = {8,3,6,3,9,4};
    int m=v[0],im=0;
    EleMenYPosc(v,6,0,m,im);
    cout<<"Menor= "<<m<<endl;
    cout<<"Indice= "<<im<<endl;
    return 0;
}