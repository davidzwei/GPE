#include <bits/stdc++.h>

using namespace std;

int main(){
    long long s, d;
    while(cin >> s >> d){
        long long time = 0;
        while(1){
            time += s;
            if(time >= d){
                cout << s << endl;
                break;
            }
            s += 1;
        }
    }
}

//1 6,  1 2 3
//3 10, 3 4 5
//3 14, 3 4 5 6
// �`�N long long
