#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long int n,m;
        cin >> n >> m;
        cout << m/(n*n) << endl;
    }

    return 0;
}