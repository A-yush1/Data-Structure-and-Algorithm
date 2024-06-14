using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int low = 0, mid = 0, high = n - 1;

        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                mid++, low++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;

            }
        }
    }
};