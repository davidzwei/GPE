#include<bits/stdc++.h>
using namespace std;

int exgcd(int a, int b, int& x, int& y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    else{
        int tx, ty;
        int gcd = exgcd(b, a%b, tx, ty);
        x = ty;
        y = tx - (a/b)*ty;
        return gcd;
    }
}

int main(){
    int a, b;
    while(cin >> a >> b){
        int x, y;
        int gcd = exgcd(a, b, x, y);
        cout << x << " " << y << " " << gcd << endl;
    }
}

// ax+by = gcd()
//int tx, ty;
//        int gcd = exgcd(b, a%b, tx, ty);
//        x = ty;
//        y = tx - (a/b)*ty;
//        return gcd;

//(47, 30)
//47 =  30*1 +17
//30 = 17*1 +13
//...
//
//
//1 = 30*4 + 17(-7)       // tx = 4, ty = -7
//1 = 47*(-7) + 30*11     // x = ty = -7, y = tx - (a/b)*ty = 4 - (30/17)*(-7) = 11
