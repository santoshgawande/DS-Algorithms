#include<iostream>
#include<vector>
using namespace std;

// Vector is nothing but Template and it is not any type like int, etc
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count =0, count =0;
        for(auto n : nums){
            if(n ==1){
                max_count = max(++count, max_count);
            }else{
                count= 0;
            }
        }
        return max_count;
        
    }
};

int main(){
    // Initialized vector
    vector<int> nums = {1,1,0,1,1,1};
    Solution s;
    int res= s.findMaxConsecutiveOnes(nums);
    cout<<"res: "<<res<<endl;
    return 0;

}