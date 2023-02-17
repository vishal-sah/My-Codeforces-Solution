#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool isLower(char ch){
    if(ch>='a' && ch<='z'){
        return true;
    }
    return false;
}
bool isUpper(char ch){
    if(ch>='A' && ch<='Z'){
        return true;
    }
    return false;
}

int main(){
    char ch[101];
    cin >> ch;
    int l = strlen(ch);
    int lower = 0, upper = 0;

    for(int i=0; i<l; i++){
        if(isLower(ch[i])) lower++;
        if(isUpper(ch[i])) upper++;
    }
    if(lower >= upper){
        cout << strlwr(ch) << endl;
    }
    if(lower < upper) cout << strupr(ch) << endl;

    return 0;
}