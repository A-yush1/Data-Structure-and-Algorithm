using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int squareRoot = sqrt(c);

        int low = 0, high = squareRoot;

        while(low <= high)
        {
            long long  curr = (long long)low * low + high * high;
            if(curr == c)
            return true;
            else if(curr < c)
            low++;
            else
            high--;
        }

        return false;
    }
};