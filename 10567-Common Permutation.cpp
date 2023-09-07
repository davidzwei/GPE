#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    while(getline(cin, a)){
        getline(cin, b);

//        cout << a << endl;
//        cout << b << endl;

        vector<int> tb_a(26, 0);
        vector<int> tb_b(26, 0);

        for(auto i:a)
            tb_a[i-'a']++;

        for(auto i:b)
            tb_b[i-'a']++;


        for(int i = 0; i<26; i++){
            if(tb_a[i] && tb_b[i]){
                int num = min(tb_a[i], tb_b[i]);
                char c = 'a'+i;
                while(num--)
                    printf("%c", 'a'+i);
            }
        }
        printf("\n");
    }
}
