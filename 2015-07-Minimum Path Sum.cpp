#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        int grid[m][n];
        int dp[m][n];
        memset(grid, 0, sizeof(grid));
        memset(dp, 0, sizeof(dp));

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                cin >> grid[i][j];
            }
        }

        dp[0][0] = grid[0][0];
        for(int i = 1; i<m; i++)
            dp[i][0] = dp[i-1][0] + grid[i][0];
        for(int i = 1; i<n; i++)
            dp[0][i] = dp[0][i-1] + grid[0][i];
        for(int i = 1; i<m; i++){
            for(int j = 1; j<n; j++){
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            }
        }
        cout << dp[m-1][n-1] << endl;
    }
}
