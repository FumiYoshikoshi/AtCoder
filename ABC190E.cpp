// Still working
// https://atcoder.jp/contests/abc190/tasks/abc190_e?lang=en
// sample code: https://atcoder.jp/contests/abc190/submissions/19761405
#include <bits/stdc++.h>
#include <set>   
#include <iostream>
#include <algorithm>
#include <cmath>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n,m;
  cin>>n>>m;

  vector<vector<int> > gems(n);

  rep(i,m){
    int a,b;
    cin>>a>>b;
    gems[a-1].push_back(b-1);
    gems[b-1].push_back(a-1);
  }

  int k;
  cin>>k;
  vector<int> c(k);

  rep(i,k){
    int tmp;
    cin>>tmp;
    c.push_back(tmp-1);
  }

  auto bfs = [&] (int start){
    //shortest path to all of the reachable gems from the start gem
    queue<int> q;
    q.push(start);
    vector<int> cost(n,mod);
    while(!q.empty()){
      int next = q.front();
      q.pop();
      for(int nextnext:gems[next]){
        if(cost[nextnext]>cost[next]+1){
          cost[nextnext] = cost[next]+1;
          q.push(nextnext);
        }

      }
    }
    rep(i,k)cost[i]=cost[c[i]];
    return cost;
  };

  vector<vector<int> > cost(n);
  rep(i,k)cost[i]= bfs(c[i]);// 

  vector<vector<int> > dp(1<<k,vector<int>(mod));
  rep(i,k)dp[2<<i][i]= 1;

  int ans = mod;

  rep(bit, 1<<k){
    rep(i,k){
      if(bit & 1<<i){ //when the i-th gem is to be included
          int b = bit^1<<i;
          rep(j,k){
            if(dp[bit][i] > dp[b][j]+cost[i][j]){
              dp[bit][i] = dp[b][j]+cost[i][j];
              ans = dp[bit][i];
            }
          }
      }
    }
  }

  if(ans == mod)cout<<-1<<endl;
  else cout<<ans<<endl;

  
  return 0;

  


}