#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int gcd = __gcd(arr[0],arr[1]);
        for(int i=2; i<n; i++){
            if (gcd >= 2){
                gcd = __gcd(gcd, arr[i]);
            }
        }
        cout << gcd << endl;
    }

    return 0;
}