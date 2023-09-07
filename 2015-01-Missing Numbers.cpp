#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    long long psum = 0;
    long long sum = 0;
    long long tmp;

    // first
    for(int i = 0; i<n; i++){
        scanf("%lld", &tmp);
        psum += tmp;
    }
//    printf("%lld", psum);
    n--;

    for(int i = 1; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%lld", &tmp);
            sum += tmp;
        }
        printf("%lld\n", psum - sum);
        psum = sum;
        sum = 0;
        n--;
    }
}

