#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t,a,b,c = 0,m = 0;
    cin >> t;
    while(t--){
        cin >> a >> b;
        c -= a;
        c += b;
        if(c>m) m=c;
    }
    cout << m << endl;

    return 0;
}