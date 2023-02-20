#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,ans=0,l=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        ans += (x-l)/120;
        l = x;
    }
    ans += (1440-l)/120;
    if(ans >= 2) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}