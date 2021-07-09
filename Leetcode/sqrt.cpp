#include<iostream>
using namespace std;
// we are using Binary search and count odd digit from 1 to x
class Solution {
public:
    int mySqrt(int x) {
        int low=1, high=x;
        while(low<=high){
            // It cause Integer Overflow 
            //int mid = (low+high)/2;
            //cout<<mid<<endl;
            int mid = low+(high-low)/2;
            int temp = x/mid;

            if(temp == mid){
               return mid;
            }else if(temp<mid){
                high=mid-1;
            }else{
                low = mid+1;
            }
       }
       return low-1;
    }
};

int main(){
    // square root of 4,8 is 2
    int x = 8;
    Solution s;
    int c = s.mySqrt(x);
    cout<<"Square Root :"<<c;
    return 0;
}