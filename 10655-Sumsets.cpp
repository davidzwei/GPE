#include <bits/stdc++.h>

using namespace std;

int find(vector<long long>& nums){
    for(int d = nums.size()-1; d>0; d--){
        for(int i = 0; i<nums.size()-3; i++){
            for(int j = i+1; j<nums.size()-2; j++){
                for(int k = j+1; k<nums.size()-1; k++){
                    // avoid duplicate
                    if(nums[i]+nums[j]+nums[k] == nums[d] && i!=j && j!=k && k!=d)
                        return nums[d];
                }
            }
        }
    }
    return INT_MAX;
}


int main(){

    int num;
    while(cin >> num){
        if(num == 0)
            break;
        else{
            vector<long long> nums(num);
            for(int i= 0; i<num; i++){
                cin >> nums[i];
            }

            sort(nums.begin(), nums.end());

            long long res = find(nums);

            if(res == INT_MAX){
                cout << "no solution" << endl;
            }
            else{
                cout << res << endl;
            }
        }
    }

}
