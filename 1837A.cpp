#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int x,k;
    cin >> x >> k;
    if(x%k!=0){
        cout << 1 << endl << x << endl;
    }
    else if(x%k!=1){
        cout << 2 << endl << 1 << " " << x-1 << endl;
    }
    else cout << 2 << endl << -1 << " " << x+1 << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}