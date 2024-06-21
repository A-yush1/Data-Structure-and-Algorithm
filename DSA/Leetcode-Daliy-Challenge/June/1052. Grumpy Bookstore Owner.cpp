using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int n = customers.size();
        int satisfied = 0, satisfiedDueToMinutes = 0, maxSatisfiedDueToMinutes = 0;
        int startMinute = -1;

        for(int i=0; i<n; i++)
        {
            if(grumpy[i] == 0)
            satisfied += customers[i];
            else if(grumpy[i] == 1)
            satisfiedDueToMinutes += customers[i];

            if(i >= minutes)
            {
                if(grumpy[i-minutes] == 1)
                satisfiedDueToMinutes -= customers[i-minutes];
            }

            maxSatisfiedDueToMinutes = max(maxSatisfiedDueToMinutes, satisfiedDueToMinutes);
        }
        return satisfied + maxSatisfiedDueToMinutes;
    }
};