#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> mp;

        for(int i=0; i<hand.size(); i++)
        mp[hand[i]]++;

        for(auto it:mp)
        {
            if(it.second == 0)
            continue;

            for(int i=1; i<groupSize; i++)
            {
                int nextNum = it.first + i;
                if(mp[nextNum] < it.second)
                return false;

                mp[nextNum] -= it.second;
            }
        }
        return true;
    }
};