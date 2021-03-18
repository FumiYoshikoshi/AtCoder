// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/590/week-3-march-15th-march-21st/3676/
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return 1;
        
        int ans = 2;
        
        int dif;
        if(nums[1]-nums[0]<0)dif = -1;
        else if(nums[1]-nums[0]>0)dif = 1;
        else dif = 0;
        
        if(dif==0)ans = 1; 
        
        for(int i =2;i<n;i++){
            if((nums[i]-nums[i-1])*dif<0 || (dif==0 && nums[i]-nums[i-1]!=0)){
                ans +=1;
                dif = nums[i]-nums[i-1];
            }
        }
        return ans;
    }
};