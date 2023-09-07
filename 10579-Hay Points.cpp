#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    unordered_map<string, int> mp;

    for(int i = 0; i<m; i++){
        string str;
        int val;
        cin >> str >> val;
        mp[str] = val;
    }

    for(int i = 0; i<n; i++){
        string tmp;
        int sum = 0;
        while(cin >> tmp && tmp != "."){
            if(mp.find(tmp) != mp.end())
                sum += mp[tmp];
        }
        cout << sum << endl;
    }
}
