#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int, int> mp;
       

        int currSum = 0;
        for(int i=0; i<n; i++)
        {
            currSum += nums[i];
            int currRem = currSum % k;
            if(currRem == 0 && i >= 1)
            return true;

            if(mp.find(currRem) != mp.end())
            {
                if(i - mp[currRem] >= 2)
                return true;

            }
            else
            mp[currRem] = i;
        }

        return false;
    }
};