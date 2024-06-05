#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char, int> mp;

        for(int i=0; i<s.length(); i++)
        mp[s[i]]++;

        int len = 0, flag = false;
        for(auto it:mp)
        {
            if(it.second % 2 == 0)
            len += it.second;
            else
            {
              if(flag == false)
              len += it.second, flag = true;
              else
              len += (it.second - 1);
            } 
        }

        return len;
    }
};