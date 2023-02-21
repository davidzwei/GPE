#include <bits/stdc++.h>

using namespace std;

void factor(int n, vector<int>& fac){

    for(int i = 1; i<n; i++){
        if(n % i == 0)
            fac.push_back(i);
    }
}

int main(){
    int n;
    cout << "PERFECTION OUTPUT" << endl;
    while(cin >> n && n){
        vector<int> fac;
        factor(n, fac);

        int sum = accumulate(fac.begin(), fac.end(), 0);

        if(sum == n)
            printf("%5d  PERFECT\n", n);
        else if(sum > n)
            printf("%5d  ABUNDANT\n", n);
        else if(sum < n)
            printf("%5d  DEFICIENT\n", n);
    }
    cout << "END OF OUTPUT" << endl;
}
