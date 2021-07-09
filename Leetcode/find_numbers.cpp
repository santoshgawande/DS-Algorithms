#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(auto n:nums){
            // Make integer number to string and check length is even or not
            if(to_string(n).length()%2 == 0){
                c++;
            }
        }
        return c;
    }
};


int main(){
    vector<int> nums = {12, 345, 4456};
    Solution s;
    int res = s.findNumbers(nums);
    cout<<"even digit no count: "<<res<<endl;
    return 0;
}