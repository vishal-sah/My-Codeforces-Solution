#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int a,b;
    cin >> a >> b;
    if(a%b==0) cout << 0 << endl;
    else{
        int x = a/b;
        int y = b*x;
        int z = y+b;
        int ans = z-a;
        cout << ans << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}