using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        int n = difficulty.size(), m = worker.size();
        int maxDifficulty = 0;
        for(int i=0; i<n; i++)
        maxDifficulty = max(maxDifficulty, difficulty[i]);

        int arr[maxDifficulty + 1];
        memset(arr, 0, sizeof(arr));

        for(int i=0; i<n; i++)
        arr[difficulty[i]] = max(profit[i], arr[difficulty[i]]);

        for(int i=1; i<=maxDifficulty; i++)
        arr[i] = max(arr[i-1], arr[i]);

        int maxProfit = 0;
        for(int i=0; i<m; i++)
        {
            int diff = min(maxDifficulty, worker[i]);
            maxProfit += arr[diff];
        }
       

        return maxProfit;




    }
};