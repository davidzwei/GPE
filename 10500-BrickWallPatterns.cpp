#include <bits/stdc++.h>

using namespace std;

int main(){
    int dp[51] = {0};
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for(int i = 4; i<=50; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    int num;
    while(cin >> num){
        if(num == 0) break;

        if(num <= 3){
            cout << num << endl;
            continue;
        }

        cout << dp[num] << endl;
    }
}
