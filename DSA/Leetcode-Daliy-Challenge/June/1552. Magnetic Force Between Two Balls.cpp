using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    bool isPossible(int force, int m, vector<int>& position)
    {
        int magnets = 0;
        int lastMagnetPosition = position[0];
        magnets++;

        for(int i=1; i<position.size(); i++)
        {
            if(position[i] - lastMagnetPosition >= force)
            magnets++, lastMagnetPosition = position[i];
            
            if(magnets == m)
            return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        
        int n = position.size();
        sort(position.begin(), position.end());

        int minForcePossible = INT_MAX;
        for(int i=1; i<n; i++)
        minForcePossible = min(minForcePossible, position[i] - position[i-1]);

        int maxForcePossible = position[n-1] - position[0];
        int ans = 0;
        while(minForcePossible <= maxForcePossible)
        {
            int mid = minForcePossible + (maxForcePossible - minForcePossible) / 2;
            if(isPossible(mid, m, position))
            {
                ans = mid;
                minForcePossible = mid + 1;
            }
            else
            maxForcePossible = mid - 1;
        }

        return ans;
    }
};