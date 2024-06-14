using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int prevEle = nums[0];
        int cnt = 0;

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] <= prevEle)
            {
                int moveReq = prevEle - nums[i] + 1;
                cnt += moveReq;
                prevEle = nums[i] + moveReq;  
            }
            else
            prevEle = nums[i];
         
        }

        return cnt;
    }
};