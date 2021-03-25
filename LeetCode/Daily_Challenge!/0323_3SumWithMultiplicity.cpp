// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/591/week-4-march-22nd-march-28th/3681/
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        vector<int> vec(2, 0);
        for(int i = 0;i<arr.size();i++){
            vec[i]+=1;
        }

        long long ans = 0;

        for(int i = 0;i<arr.size();i++){
            if(vec[i]==0)continue;
            for(int j = i;i<arr.size();i++){
                if(vec[i]==0 || ((i==j)&&vec[i]<2))continue;
                int n1 = vec[i];
                int n2 = vec[j];
                if(i==j)n2--;
                int n3 = vec[target-i-j];
                ans += n1*n2%mod*n3%mod;

            }
        }
        return ans;
    }
};
