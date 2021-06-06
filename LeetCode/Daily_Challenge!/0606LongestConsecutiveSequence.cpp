// https://leetcode.com/explore/featured/card/june-leetcoding-challenge-2021/603/week-1-june-1st-june-7th/3769/
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        priority_queue<long> q;
        for(long i:nums){
            q.push(i);
        }
        int max = 1;
        int count = 1;
        long now = q.top();
        q.pop();
        while(!q.empty()){
            long next = q.top();
            q.pop();
            if(next+1 == now){
                count+=1;
                if(count>max)max = count;
            }else if(next != now){
                count = 1;
            }
            cout<<now<<' '<<next<<' '<<count<<endl;
            now = next;
        }
        return max;
        
    }
};