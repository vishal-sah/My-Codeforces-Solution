#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> t;
    while(t--){
        cin >> n;
        int x=0,y=0;
        bool check=0;
        string s;
        cin >> s;
        for(int i=0; i<n; i++){
            if(s[i] == 'L') x--;
            else if(s[i] == 'R') x++;
            else if(s[i] == 'U') y++;
            else if(s[i] == 'D') y--;
            if(x==1 && y==1) check=1;
        }
        if(check==1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}