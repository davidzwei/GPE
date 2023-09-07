#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i = 0; i<num; i++){
        int row, col, t;
        cin >> row >> col >> t;
        cout << row <<" "<< col <<" "<<t<<endl;

        vector<vector<char>> map(row, vector<char>(col));
        for(int i = 0; i<row; i++){
            for(int j = 0; j < col; j++){
                cin >> map[i][j];
            }
        }
        int r, c;
        for(int i=0; i<t; i++){
            cin >> r >> c;
            int height, width, half;
            height = min(r, row-1-r);
            width = min(c, col-1-c);
            half = min(height, width);
//            cout << height << width << half << endl;
            bool isSquare = true;
            int largetHalf = 0;
            int halfVal;
            for(halfVal=1; halfVal<=half; halfVal++){
                for(int i = r-halfVal; i<=r+halfVal; i++){
                    for(int j=c-halfVal; j<=c+halfVal; j++){
                        if(map[i][j] != map[r][c]){
//                            cout << i << " " << j << endl;
                            isSquare = false;
                            break;
                        }
                    }
                }
                if(!isSquare){
                    break;
                }
                else{
                    largetHalf++;
                }

            }
            cout << largetHalf * 2 + 1 << endl;
        }
    }
}
