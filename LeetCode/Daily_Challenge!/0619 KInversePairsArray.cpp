// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/605/week-3-june-15th-june-21st/3784/
// https://leetcode.com/problems/k-inverse-pairs-array/solution/

#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    int kInversePairs(int n, int k) {
        vector<vector<int> > dp(n+1, vector<int>(k+1,0));
        int mod = 1000000007;
        for(int i=1;i<=n;i++){
            dp[i][0]=1;
            for(int j=1;j<=min(i*(i-1)/2,k);j++){
                int tmp=0;
                if((j-i)>=0)tmp=dp[i-1][j-i];
                dp[i][j] = ((dp[i][j]+dp[i-1][j]+dp[i][j-1])%mod + mod-tmp)%mod;
            }
        }
        return dp[n][k];
        
    }
};

