#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        char c;
        cin >> c;
        if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s'){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}