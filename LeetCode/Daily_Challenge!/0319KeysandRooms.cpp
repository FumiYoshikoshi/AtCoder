//https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/590/week-3-march-15th-march-21st/3677/
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
    
        queue<int> que;
        que.push(0);
        
        vector<int> visited(n,0);
        
        while(!que.empty()){
            int q=que.front();
            que.pop();
            if(visited[q]==1)continue;
            visited[q]=1;
            for(int room : rooms[q]){
                que.push(room);
            }
        }
        bool ans = true;
        for(int i =0;i<n;i++){
            if(visited[i]==0){
                ans = false;
                break;
            }
        }
        
       return ans;

    }
};