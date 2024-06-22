using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> oddNumberIdx;

        for(int i=0; i<n; i++)
        {
            if(nums[i] % 2 != 0)
            oddNumberIdx.push_back(i);
        }

        int i = 0;
        int cnt = 0;
        while(i + k - 1 < oddNumberIdx.size())
        {
            int windowStart = i, windowEnd = i + k - 1;
            int numberOfPrevEle, numberOfNextEle;
            if(windowStart == 0)
            numberOfPrevEle = oddNumberIdx[windowStart];
            else
            numberOfPrevEle = oddNumberIdx[windowStart] - oddNumberIdx[windowStart - 1] - 1;

            if(windowEnd == oddNumberIdx.size() - 1)
            numberOfNextEle = n - 1 - oddNumberIdx[windowEnd];
            else
            numberOfNextEle = oddNumberIdx[windowEnd + 1] - oddNumberIdx[windowEnd] - 1;

            cnt++;
            cnt += numberOfPrevEle + numberOfNextEle + (numberOfPrevEle * numberOfNextEle);

            i++;
        }

        return cnt;     
    }
};