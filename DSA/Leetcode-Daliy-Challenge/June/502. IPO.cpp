using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        int n = profits.size();

        pair<int, int> arr[n];
        for(int i=0; i<n; i++)
        {
            arr[i].first = capital[i];
            arr[i].second = profits[i];
        }

        sort(arr, arr + n);

        priority_queue<int> pq;
        int maxProfit = 0;

        int i = 0;
        while(k--)
        {
            while(i < n && arr[i].first <= w)
            {
                pq.push(arr[i].second);
                i++;
            }

            if(pq.empty())
            break;

            w += pq.top();
            pq.pop();
            
        }

        return w;
    }
};