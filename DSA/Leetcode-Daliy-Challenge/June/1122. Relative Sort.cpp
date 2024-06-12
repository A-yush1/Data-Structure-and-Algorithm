using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        for(int i=0; i<arr1.size(); i++)
        mp[arr1[i]]++;

        int idx = 0;

        for(int i=0; i<arr2.size(); i++)
        {
            while(mp[arr2[i]]--)
            arr1[idx++] = arr2[i];
        }

        for(auto &it : mp)
        {
            while(it.second-- > 0)
            arr1[idx++] = it.first;
        }

        return arr1;

    }
};