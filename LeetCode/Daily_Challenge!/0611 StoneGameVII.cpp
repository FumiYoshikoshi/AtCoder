// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/604/week-2-june-8th-june-14th/3775/
// https://www.youtube.com/watch?v=lPsRl16NmV4
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    int stoneGameVII(vector<int>& stones) {
        int n = stones.size();
        vector<int> dp(n,0);
        for(int i=n-1;i>=0;i--){
            int temp = 0;
            int sum = stones[i];
            for(int j=i;j<n;j++){
                if(i!=j){
                    sum += stones[j];
                    int end = sum - stones[j];
                    int start = sum - stones[i];
                    dp[j] = max(end-temp, start-dp[j]);
                }
                temp=dp[j];
            }

        }
        return dp[n-1];
            
        
    }
};