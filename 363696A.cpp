#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int value(int n, int m){
    int ans;
    for(int i=n; i>=1; i--){
        if(i%m==0){
            ans = i;
            return ans;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a = value(n,m);
        int sum = 0;
        string s = to_string(a);
        int l = s.length();
        for(int i=0; i<l; i++){
            sum += s[i];
        }
        if(l==1) cout << "00" << sum << endl;
        else if(l==2) cout << "0" << sum << endl;
        else cout << sum << endl;
    }

    return 0;
}