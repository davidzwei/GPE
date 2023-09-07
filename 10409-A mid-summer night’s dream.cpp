#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> arr(n);
        for(int i = 0; i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int a = arr[(n-1)/2];
        int b = arr[n/2];
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == a || arr[i] == b)
                ans++;
        }
        printf("%d %d %d\n", a, ans, b-a+1);
    }
}

