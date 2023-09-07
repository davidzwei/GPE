#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        long long num;
        cin >> num;

        cout << "Case #" << i << ": " << num;

        long long tmp = num;
        set<long long> st;

        while(num != 1){
            // recursion
            if(st.count(num))
                break;
            st.insert(num);

            long long sum = 0;
            while (num){
                sum += (num % 10) * (num % 10);
                num /= 10;
            }
//            sum += num*num;
            num = sum;
        }

        if(num == 1) cout <<" is a Happy number.\n";
        else cout <<" is an Unhappy number.\n";
    }
}

