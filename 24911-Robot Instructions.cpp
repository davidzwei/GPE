#include <bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;

    int instr;
    for(int i = 0; i<test; i++){
        int res = 0;
        cin >> instr;
//        cout << instr << "instruction" << endl;
        vector<int> tb(instr + 1, 0);
        string buff;
        for(int i = 0; i<instr; i++){
            cin >> buff;
            if(buff[0] == 'L'){
                res -= 1;
                tb[i+1] = -1;
//                cout << "-1" << endl;
            }
            else if(buff[0] == 'R'){
                res += 1;
                tb[i+1] = 1;
//                cout << "+1" << endl;
            }
            else{
                string tmp2;
                int tmp3;
                cin >> tmp2 >> tmp3;
//                cout << "s "<< tmp3 << endl;
                tb[i+1] = tb[tmp3];
                res += tb[tmp3];
            }
//            cout << "res=" << res << endl;
        }
        cout << res << endl;
    }


}
