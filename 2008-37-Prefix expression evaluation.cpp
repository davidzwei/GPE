#include <bits/stdc++.h>
using namespace std;

bool isNum(string str){
    for(auto s:str){
        if(!isdigit(s))
            return false;
    }
    return true;
}

int main(){
    string line;
    while(getline(cin, line)){
        if(line[0] == '.') break;
        vector<string> str_list;
        stringstream ss("");
        ss << line;
        string tmp;
        while(ss >> tmp)
            str_list.push_back(tmp);

        ss.clear();
        ss.str("");

        stack<int> st;
        reverse(str_list.begin(), str_list.end());
//        for(auto str:str_list)
//            cout << str << " ";

        bool error = false;
        for(auto str:str_list){
            if(isNum(str))
                st.push(stoi(str));
            else{
                int a, b;
                if(str == "+"){
                    if(st.empty()) {error = true; break;}
                    else {a = st.top(); st.pop();}

                    if(st.empty()) {error = true; break;}
                    else {b = st.top(); st.pop();}

                    st.push(a+b);
                }
                else if(str == "-"){
                    if(st.empty()) {error = true; break;}
                    else {a = st.top(); st.pop();}

                    if(st.empty()) {error = true; break;}
                    else {b = st.top(); st.pop();}

                    st.push(a-b);
                }
                else if(str == "*"){
                    if(st.empty()) {error = true; break;}
                    else {a = st.top(); st.pop();}

                    if(st.empty()) {error = true; break;}
                    else {b = st.top(); st.pop();}

                    st.push(a*b);
                }
                else if(str == "/"){
                    if(st.empty()) {error = true; break;}
                    else {a = st.top(); st.pop();}

                    if(st.empty()) {error = true; break;}
                    else {b = st.top(); st.pop();}

                    st.push(a/b);
                }
                else if(str == "%"){
                    if(st.empty()) {error = true; break;}
                    else {a = st.top(); st.pop();}

                    if(st.empty()) {error = true; break;}
                    else {b = st.top(); st.pop();}

                    st.push(a % b);
                }
            }
        }
        if(error) cout << "illegal" <<endl;
        else cout << st.top() << endl;
    }
}

