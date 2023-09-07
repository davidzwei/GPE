#include <bits/stdc++.h>
using namespace std;

long long bigmod(long long b, long long p, long long m){
    if(p == 0)
        return 1;
    if(p == 1)
        return b % m;
    else{
        long long res = bigmod(b, p/2, m);
        // p: odd
        if(p%2)
            return res*res*b%m;
        // p: even
        else
            return (res*res)%m;
    }
}

int main(){
    long long b, p, m;
    while(cin >> b >> p >> m){
        cout << bigmod(b, p, m) << endl;
    }
}

//(BP)%M = (B^(P/2)%M) * (B^(P/2)%M)
