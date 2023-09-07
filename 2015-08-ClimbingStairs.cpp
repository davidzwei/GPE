
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> dp(101, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for(int i = 4; i<=100; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    int num;
    while(cin >> num){
        cout << dp[num] << endl;
    }
}
