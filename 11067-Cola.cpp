#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;

    while(cin >> num){
        int res = num;
        while(num >= 3){
            res += num/3;
            num = num/3 + num%3;
        }

        if(num == 2)
            res++;

        cout << res << endl;
    }
}

// 8
//              8
// 2 + 2 = 4    2
// 1 + 1 = 2    1
// 1            1
