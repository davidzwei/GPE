#include <bits/stdc++.h>

long long dp[30001];

int main(){
    dp[0] = 1;
    int money[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};

    for(int i = 10; i>=0; i--){
        for(int j = money[i]; j <=30000; j+=5){
            dp[j] += dp[j-money[i]];
        }
    }

    int num1, num2;

    while(scanf("%d.%d", &num1, &num2)!=EOF){
        if(num1 == 0 && num2 == 0){
            break;
        }
        int num = num1*100 + num2;

        printf("%3d.%02d%17lld\n", num1, num2, dp[num]);
    }
}


