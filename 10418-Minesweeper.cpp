#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    int t = 0;
    while(cin >> m >> n){
        if(m == 0 && n == 0) break;

        char arr[m][n];
//        int res[m][n];
        vector<vector<int>> res(m, vector<int>(n, 0));
//        memset(res, 0, sizeof(res));

        char tmp;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                cin >> tmp;
                if(tmp == '*')
                    res[i][j] = -1;
            }
        }

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(res[i][j] == -1){

                    for(int l = i-1; l<=i+1; l++){
                        for(int r = j-1; r<= j+1; r++){
                            if(l >= 0 && l<m && r>=0 && r<n && res[l][r] != -1)
                                res[l][r]++;
                        }
                    }
                }
            }
        }
        if(t != 0)
            printf("\n");

        t++;
        printf("Field #%d:\n", t);

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(res[i][j] == -1)
                    printf("*");
                else
                    printf("%d", res[i][j]);
            }
            printf("\n");
        }

    }
}
