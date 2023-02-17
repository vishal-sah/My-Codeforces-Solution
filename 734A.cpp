#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='A') a++;
        else d++;
    }
    if(a>d) cout << "Anton\n";
    else if(d>a) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}