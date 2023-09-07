#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int cases = 0;
    while(cin >> n){
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        long long res = 0;


        for(int i = 0; i<n; i++){
            long long tmp = 1;
            for(int j = i; j<n; j++){
                tmp *= arr[j];
                res = max(res, tmp);
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n", ++cases, res);
//        getchar();
    }
}
