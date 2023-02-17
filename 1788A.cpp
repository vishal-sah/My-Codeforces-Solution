#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int p = 1;
    for(int i=0; i<n; i++){
        p *= a[i];
    }
    int k = 1;
    int lhs = a[0];
    bool flag = true;
    while(k<n){
        if(lhs==(p/lhs) && p%lhs==0){
            cout << k << endl;
            flag = false;
            break;
        }
        lhs *= a[k];
        k++;
    }
    if(flag) cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}