#include <iostream>
using namespace std;

int ContarRepeticiones(const int v[], int n, int i,int x, int& c){
    if(i==n) return c;
    if(v[i]==x) c++;
    return ContarRepeticiones(v,n,i+1,x,c);
}
int main() {
    int x;
    cout<<"X= ";cin>>x;
    int v[8] = {3,5,3,1,3,8,5,3};
    int c=0;
    cout<<"Apariciones= "<<ContarRepeticiones(v,8,0,x,c);
    return 0;
}