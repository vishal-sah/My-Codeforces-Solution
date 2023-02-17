#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int n,a,b,p,min = INT_MAX, x;
    cin >> n;
    for(int i=1; i<= sqrt(n); i++){
        if(n%i==0){
            a=i;
            b=n/i;
        }
        p = 2*(a+b);
        if(p<min) min = p;
    }
    cout << min << endl;

    return 0;
}