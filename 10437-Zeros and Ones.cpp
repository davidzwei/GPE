#include <bits/stdc++.h>
using namespace std;

string str;

bool check(int l, int r){
    for(int i = l+1; i<=r; i++){
        if(str[i] != str[i-1])
            return false;
    }
    return true;
}

int main(){

    int num = 0;
    while(cin >> str){
        int n;
        cin >> n;
        int a, b;
        int l, r;
        ++num;
        cout << "Case " << num << ":\n";
        for(int i = 0; i<n; i++){
            cin >> a >> b;
            l = min(a, b);
            r = max(a, b);

            if(check(l, r))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
