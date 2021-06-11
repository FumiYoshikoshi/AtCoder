// https://leetcode.com/explore/featured/card/june-leetcoding-challenge-2021/603/week-1-june-1st-june-7th/3769/
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
       
        int n = cost.size();
        vector<int> dp(n,0);
        
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i = 2;i<n; i++){
            dp[i]= min(dp[i-1],dp[i-2])+cost[i];
        }
        
        return(dp[n-1]);
    }
};