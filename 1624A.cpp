#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int mn = INT_MAX, mx = INT_MIN;
        for(int i=0; i<n; i++){
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }
        cout << mx-mn << endl;
    }

    return 0;
}