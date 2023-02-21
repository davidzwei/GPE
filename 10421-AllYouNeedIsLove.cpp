#include <bits/stdc++.h> 

using namespace std;


int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}


int main(){
    int num;

    cin >> num;

    for(int i = 0; i<num; i++){
        string s1;
        string s2;
        cin >> s1 >> s2;

        // 30 char overflow
        int a = atoi(s1.c_str());
        int b = atoi(s2.c_str());

        // 2 進位
        int a = stoi(s1, nullptr, 2);
        int b = stoi(s2, nullptr, 2);

        // int num1 = stoi(S1, nullptr, 2);
        // int num2 = stoi(S2, nullptr, 2);

        // cout << a << endl;
        // cout << b << endl;

        int g = gcd(a, b);
        // cout << g << endl;

        if(g != 1)
            cout << "Pair #" << i+1 <<": All you need is love!" << endl;
        else
            cout << "Pair #" << i+1 <<": Love is not all you need!" << endl;
    }
}