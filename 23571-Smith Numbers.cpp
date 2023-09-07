#include <bits/stdc++.h>
using namespace std;

int convert(int n){
    int ret = 0;
    while(n){
        ret += (n%10);
        n /= 10;
    }
    return ret;
}

bool help(int n){
    int ans = n;
    int val = convert(n);

    int val2 = 0;
    bool isPrime = true;

    for(int i = 2; i<=(int)sqrt(n); i++){
        if(n % i == 0){
            int time = 0;
            while(n % i == 0){
                n /= i;
                time++;
            }
            val2 += time * convert(i);
            isPrime = false;
        }
    }
    // isPrime return false
    if(isPrime)
        return false;
    if(n != 1 && isPrime == false){
        val2 += convert(n);
    }
    if(val == val2 && isPrime == false){
        cout << ans << endl;
        return true;
    }
    return false;
}

int main(){
    int cases;
    cin >> cases;

    while(cases--){
        int n;
        cin >> n;
        for(int i = n+1; ; i++){
            if(help(i))
                break;
        }
    }
}

//42 = 2*3*7
