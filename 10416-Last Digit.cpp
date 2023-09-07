#include <bits/stdc++.h>
using namespace std;

const int m[] = {0,1,5,2,8,3,9,2,8,7,7,8,4,7,3,8,4,1, 5, 4};

int main(){
    string n;
    while(cin >> n){
        if(n == "0") break;
        int len = n.size();
        int val = 0;
        val += (n[len-1] - '0');
        if(len > 1)
            val += (n[len-2] - '0') * 10;

        int res = m[val % 20] + val / 20 * 4 ;
        res = res % 10;

        cout << res << endl;
    }
}

//0^n%10: 0
//
//1^n%10: 1
//
//2^n%10: 2,4,8,6
//
//3^n%10: 3,9,7,1
//
//4^n%10: 4,6
//
//5^n%10: 5
//
//6^n%10: 6
//
//7^n%10: 7,9,3,1
//
//8^n%10: 8,4,2,6
//
//9^n%10: 9,1
