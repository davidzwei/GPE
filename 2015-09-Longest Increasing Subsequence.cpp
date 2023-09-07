#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    while(scanf("%d", &num)!=EOF){
        int arr[num];
        for(int i = 0; i<num; i++)
            cin >> arr[i];

        int res = 0;
//        int dp[num] = {1};
        vector<int> dp(num, 1);
        for(int i = 0; i<num; i++){
            for(int j = 0; j<i; j++){
                if(arr[j] < arr[i])
                    dp[i] = max(dp[j] + 1, dp[i]);
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
        for(int i = 0; i<num; i++)
            cout << dp[i] << " ";
    }
}

// j i
