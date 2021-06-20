// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/605/week-3-june-15th-june-21st/3782/
// https://dev.to/seanpgallivan/solution-number-of-subarrays-with-bounded-maximum-3mmh

#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans = 0;
        int lowInd=0;
        int maxInd=0;
        
        for(int num:nums){
            if(num>right)maxInd=0;
            else{
                maxInd+=1;
                ans += maxInd;
            }
            if(num>=left)lowInd=0;
            else{
                lowInd+=1;
                ans -= lowInd;
            }
        }
        
        return ans;
        
    }
};