#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; // n milk divides to m container
    while(cin >> n >> m){
        vector<int> vessel(n);
        for(int i = 0; i<n; i++)
            cin >> vessel[i];

        int Max = *max_element(vessel.begin(), vessel.end());
        int sum = accumulate(vessel.begin(), vessel.end(), 0);
//        cout << Max <<" " << sum << endl;

        int l = Max, r = sum;

        while(l < r){
            int mid = (l+r)/2;
//            cout << "m=" << m << endl;
            int count = 0;
            int cap = 0;
            for(int i = 0; i<n; i++){
                cap += vessel[i];

                if(cap > mid){
                    count++;
                    cap = vessel[i];
                }
                else if(cap == mid){
                    count++;
                    cap = 0;
                }
            }
            if(cap > 0)
                count++;
//            cout << "count=" << count <<endl;
            if(count > m)
                l = mid+1;
            else
                r = mid;
        }
        cout << l << endl;
    }
}

