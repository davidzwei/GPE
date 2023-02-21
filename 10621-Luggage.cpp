#include <bits/stdc++.h> 

using namespace std;

int main(){
    int num;
    char ch;
    // cin >> num >> ch;
    

    // important
    scanf("%d%c", &num, &ch);

    // int tmp;
    // cin >> tmp;

    // cout << num << endl;
    for(int i = 0; i<num; i++){
        string str;
        // getchar();
        getline(cin, str);

        stringstream ss;
        ss << str;
        
        vector<int> weights;
        int weight;
        int sum = 0;
        while(ss >> weight){
            weights.push_back(weight);
            sum += weight;
        }

        // cout << sum << endl;

        if(sum % 2 == 1){
            cout << "NO" << endl;
            continue;
        }
        
        vector<bool> dp(weights.size()+1, false);
        dp[0] = true;
    
        // 0/1 package
        for(int i =0; i<weights.size(); i++){
            for(int j = sum; j>=weights[i]; j--){
                if(dp[j - weights[i]])
                    dp[j] = true;
            }
        }
        

        if(dp[sum/2]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
}
