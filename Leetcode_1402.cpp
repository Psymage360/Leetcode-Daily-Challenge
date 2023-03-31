#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSatisfaction(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int res=0,sum=0;
        for(int i=0;i<nums.size();i++){
            res=max(res,res+sum+nums[i]);
            sum+=nums[i];
        }
   return res; }
};