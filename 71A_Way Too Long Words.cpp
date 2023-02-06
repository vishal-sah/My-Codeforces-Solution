#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        if(len <= 10) cout << s << endl;
        else{
            cout << s[0] << len-2 << s[len-1] << endl;
        }
    }

    return 0;
}