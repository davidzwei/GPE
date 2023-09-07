#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    while(cin >> num){
        if(num == 0) break;

        int root = sqrt(num);

        if(root*root == num)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
