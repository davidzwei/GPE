#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;

    while(cin >> num){
        if(num == 0) break;

        set<int> st;
        st.insert(num);
        while(1){
            int tmp = num*num;
            tmp /= 100;
            tmp = tmp%10000;

            if(st.find(tmp) != st.end())
                break;
            else
                st.insert(tmp);
            num = tmp;
        }
        cout << st.size() << endl;
    }
}
