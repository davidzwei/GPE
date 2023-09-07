#include <bits/stdc++.h>

using namespace std;

void to_north(vector<int>& die){
//    cout << "north" << endl;
    int tmp = die[0];
    die[0] = die[4];
    die[4] = die[5];
    die[5] = die[1];
    die[1] = tmp;
}

void to_south(vector<int>& die){
    int tmp = die[0];
    die[0] = die[1];
    die[1] = die[5];
    die[5] = die[4];
    die[4] = tmp;
}

void to_east(vector<int>& die){
    int tmp = die[0];
    die[0] = die[2];
    die[2] = die[5];
    die[5] = die[3];
    die[3] = tmp;
}

void to_west(vector<int>& die){
    int tmp = die[0];
    die[0] = die[3];
    die[3] = die[5];
    die[5] = die[2];
    die[2] = tmp;
}

int main(){
    int num;
    while(cin >> num){
        if(num == 0) break;
        int time;
        string dir;

        vector<int> dice = {1, 2, 3, 4, 5, 6};
        vector<int>& die = dice;
        for(int i = 0; i<num; i++){
            cin >> dir;
            if(dir == "north")
                to_north(die);
            else if(dir == "south")
                to_south(die);
            else if(dir == "east")
                to_east(die);
            else if(dir == "west")
                to_west(die);
        }
        cout << die[0] << endl;
    }
}
