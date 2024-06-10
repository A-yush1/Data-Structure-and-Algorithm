#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int cnt = 0;
        unordered_map<int, int> mp;

        for(int i=0; i<heights.size(); i++)
        mp[heights[i]]++;
        int i = 0, it = 1, ans = 0;  

        while(it <= 100)
        {
            while(mp[it] != 0)
            {
                if(it != heights[i])
                ans++;

                mp[it]--;
                i++;
            }

            it++;
        }

        return ans;
    }
};