#include <iostream>
using namespace std;

bool VerfAsc(const int v[], int n, int i){
    if(i==n-1) return true;
    if(v[i]>v[i+1]) return false;
    return VerfAsc(v,n,i+1);
}
int main() {
    int v[6] = {1,2,2,5,8,8};
    cout<<VerfAsc(v, 6, 0);
    return 0;
}