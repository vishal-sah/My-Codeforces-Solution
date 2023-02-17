#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    string s;
    cin >> s;
    int arr[s.length()];
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '+'){
            continue;
        }
        else{
            arr[count++]=s[i]-'0'; 
        }
    }
    sort(arr, arr+count);
    for(int i=0; i<count; i++){
        cout << arr[i];
        if(i==count-1) break;
        cout << "+";
    }

    return 0;
}