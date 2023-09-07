#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    while(cin >> num){
        if(num == 0) break;

        unordered_map<string, int> mp;
        vector<int> tmp(5);

        for(int i = 0; i<num; i++){
            for(int j = 0; j<5; j++){
                cin >> tmp[j];
            }
            sort(tmp.begin(), tmp.end());

            string k;
            for(auto t:tmp){
//                cout << t << " ";
                k += to_string(t);
            }
//            cout << endl;
//            cout << k <<endl;
            mp[k]++;

        }
        int maxNum = 0;
        for(auto m:mp){
            maxNum = max(maxNum, m.second);
        }

        int res = 0;
        for(auto m:mp){
            if(m.second == maxNum)
                res += maxNum;
        }

        cout << res << endl;
    }
}

// a:2, b:1
