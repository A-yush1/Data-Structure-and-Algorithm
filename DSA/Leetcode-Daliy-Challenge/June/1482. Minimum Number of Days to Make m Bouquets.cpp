using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    bool isPossible(int days, int m, int k, vector<int>& bloomDay)
    {
        int adjacentFlowers = 0, bouquets = 0;
        for(int i=0; i<bloomDay.size(); i++)
        {
            if(bloomDay[i] <= days)
            adjacentFlowers++;
            else
            adjacentFlowers = 0;

            if(adjacentFlowers == k)
            adjacentFlowers = 0, bouquets++;

            if(bouquets == m)
            return true;
        }
        return false;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();
        if(m > n / k)
        return -1;

        int maxBloomDay = 0, minBloomDay = INT_MAX;

        for(int i=0; i<n; i++)
        {
            minBloomDay = min(minBloomDay, bloomDay[i]);
            maxBloomDay = max(maxBloomDay, bloomDay[i]);
        }
        

        int low = minBloomDay, high = maxBloomDay;

        int minDays = -1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(isPossible(mid, m, k, bloomDay))
            {
                minDays = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }

        } 

        return minDays;
    }
};