#include <bits/stdc++.h>
using namespace std;

int table[] = {0, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};

int main(){
    int num; // 2468
    while(cin >> num){
        for(int i = 0; i<table[num]; i++){
            int l = i/table[num/2];
            int r = i%table[num/2];
            int tmp = l + r;
            if(pow(tmp, 2) == i){
                if(num == 2) printf("%02d\n", i);
                if(num == 4) printf("%04d\n", i);
                if(num == 6) printf("%06d\n", i);
                if(num == 8) printf("%08d\n", i);
            }
        }
    }
}
