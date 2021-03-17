// https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first;int second;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target)return(vector<int> {i,j});
            }
        }
        return(vector<int> {0});
    }
};