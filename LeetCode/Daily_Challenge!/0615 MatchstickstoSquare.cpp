// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/605/week-3-june-15th-june-21st/3780/
// https://www.tutorialspoint.com/matchsticks-to-square-in-cplusplus

#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    bool match(vector<int>& matchsticks, vector<int>& edge, int index, int target){
        if(index>=matchsticks.size()){
            return(edge[0]==edge[1] && edge[1]==edge[2]&&edge[2]==edge[3]);
        }
        for(int i=0;i<4;i++){
            if(edge[i]+matchsticks[index]<=target){
                edge[i]+=matchsticks[index];
                if(match( matchsticks,edge,index+1,target))return true;
                edge[i]-=matchsticks[index];
            }
        }
        return false; 
    }
    
    
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size()<4)return false;
        int sum = 0;
        for(int n:matchsticks){
            sum+= n;
        }
        if(sum%4!=0)return false;
        int target = sum/4;
        vector <int> edge(4);
        edge[0]= matchsticks[0];
        vector<int> vec  = vector<int>(matchsticks.begin() + 1, matchsticks.end());
        return match(vec, edge, 0, target);
    }
};