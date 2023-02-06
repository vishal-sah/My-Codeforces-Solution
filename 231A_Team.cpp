#include<iostream>
using namespace std;

int main(){
    int n,count = 0;
    cin >> n;
    while(n--){
        int arr[3];
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }
        int ans = 0;
        for(int i=0; i<3; i++){
            if(arr[i]==1){
                ans++;
            }
        }
        if(ans>=2){
            count++;
        }
    }
    cout << count;

    return 0;
}