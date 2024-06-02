using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int start= 0, end = s.size() - 1;
        while(start < end)
        {
            int tmp = s[start];
            s[start] = s[end];
            s[end] = tmp;

            start++, end--;
        }
    }
};