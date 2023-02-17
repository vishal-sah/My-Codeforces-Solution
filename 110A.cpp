#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    unsigned long long int n;
    cin >> n;
    int lucky = 0;
    string s = to_string(n);
    for(int i=0; i<s.length(); i++){
        if(s[i] == '4' || s[i] == '7') lucky++;
    }
    if(lucky == 4 || lucky == 7) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}