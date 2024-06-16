using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        
       
        long long int i=0, maxReachable = 0, cnt = 0;

        while(maxReachable < n)
        {
            if(i < nums.size() && nums[i] <= maxReachable + 1)
            {
                maxReachable += nums[i];
                i++;
            }
            else
            {
                maxReachable += (maxReachable + 1);
                cnt++;
            }
        }

        return cnt;
    }
};