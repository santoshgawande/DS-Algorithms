#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        vector<int> a;
        while(!nums){
            if(nums[i] + nums[i+1] == target){
                a[i] = i;
                a[i] = i+1;
                i++;
            }
        }
        return a;
        
    }
};