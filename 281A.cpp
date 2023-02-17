#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    string s;
    cin >> s;
    if(s[0]>=97 && s[0]<=122) s[0] = s[0]-32;
    cout << s << endl;

    return 0;
}