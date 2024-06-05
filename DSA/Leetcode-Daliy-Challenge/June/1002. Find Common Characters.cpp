#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        unordered_map<char, int> mp;
        int n = words.size();

        for(int i=0; i<n; i++)
        {
            string str = words[i];
            unordered_map<char, int> tmpMp;

            for(int j=0; j<str.length(); j++)
            tmpMp[str[j]]++;

            for(char ch = 'a'; ch <= 'z'; ch++)
            {
                if(i == 0)
                mp[ch] = tmpMp[ch];
                else
                mp[ch] = min(mp[ch], tmpMp[ch]);
            }
        }

        vector<string> res;
        for(auto it:mp)
        {
            // cout<<it.first<<"* "<<it.second.first<<"* "<<it.second.second<<"*\n";
            int freq = it.second;
            while(freq--)
            {
                    string s = "";
                    s += it.first;
                    res.push_back(s);

            }
        }

        return res;
    }
};