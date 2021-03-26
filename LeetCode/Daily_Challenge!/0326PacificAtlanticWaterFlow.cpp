// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/591/week-4-march-22nd-march-28th/3684/
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
      //  if(matrix.size()==0)return null;
        vector<vector<int>> ans;
        
        if(matrix.size()==0)return ans;
        int rmax = matrix.size();
        int cmax = matrix[0].size();
        vector<vector<int>> map_pa(rmax, vector<int> (cmax,0));
        vector<vector<int>> map_at(rmax, vector<int> (cmax,0));
        
        
        
        auto bfs = [&](int row, int col,vector<vector<int>> map){
            queue<pair<int,int>> que;
            que.push(pair<int,int>(row,col));
            
            while(!que.empty()){
                   
                    pair<int,int> q=que.front();
                    que.pop();
                    int r = q.first;
                    int c = q.second;
            
                    for(int dy = -1; dy <=1; dy++){
                        int y = r + dy;
                        if(y <0 || y >=rmax)continue;
                        
                        for(int dx = -1; dx<=1;dx++){
                            int x = c + dx;
                            if(x<0 || x>=cmax)continue;
                    
                            if( dx*dy ==1 || dx*dy ==-1)continue;
                            if(map[y][x]==1)continue;
                            
                            if(matrix[y][x]>=matrix[r][c]){
                                que.push(pair<int,int>(y,x));
                                map[y][x]=1;
                            }
                        }
                    }
            }
            return map;
                    
        };
        
        for(int i=0;i<rmax;i++){
            map_pa[i][0]=1;
            map_pa = bfs(i,0,map_pa);
        }
        
         for(int i=0;i<rmax;i++){
            map_at[i][cmax-1]=1;
            map_at = bfs(i,cmax-1,map_at);
        }
        
        for(int j=0;j<cmax;j++){
            map_pa[0][j]=1;
            map_pa = bfs(0,j,map_pa);
        }
       
        for(int j=0;j<cmax;j++){
            map_at[rmax-1][j]=1;
            map_at = bfs(rmax-1,j,map_at);
        }
        
        for(int i = 0;i<rmax;i++){
            for(int j= 0; j <cmax;j++){
                if(map_pa[i][j]==1 && map_at[i][j]==1){
                    ans.push_back({i,j});
                }
            }
            cout<<endl;
        }
        
        
       
        
        return ans;
        
    }
};