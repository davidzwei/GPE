#include <bits/stdc++.h>
using namespace std;

bool compare(const string a, const string b){
    return a+b > b+a;
}

int main(){
    int n;
    while(cin >> n && n){
        vector<string> strs(n);
        string buf;
        for(int i = 0; i<n; i++){
            cin >> strs[i];
        }
        sort(strs.begin(), strs.end(), compare);

        string res = "";
        for(auto i:strs)
            res += i;

        cout << res << endl;
    }
}
