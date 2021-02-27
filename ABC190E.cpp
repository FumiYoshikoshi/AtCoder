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
const int INF = 0x3fffffff;


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
    cin>>c[i];c[i]-=1;
  }
  
  auto bfs = [&] (int start){
    //shortest path to all of the reachable gems from the start gem
    queue<int> q;
    q.push(start);
    vector<int> cost(n,INF);
    cost[start]=0;
    while(!q.empty()){
      int next = q.front();
      q.pop();
      for(int nextnext : gems[next]){
        if(cost[nextnext]>cost[next]+1){
          cost[nextnext] = cost[next]+1;
          q.push(nextnext);
        }
      }
    }
    vector<int> cost_re(k,0);
    rep(i,k){
      cost_re[i]=cost[c[i]];
    }
    return cost_re;
  };

  vector<vector<int> > cost(k);
  //cost[i][j] <- shortest distance from i to j
  rep(i,k)cost[i]= bfs(c[i]);// 

  
  vector<vector<int> > dp( 1<<k ,vector<int>(k , INF));
  rep(i,k)dp[1<<i][i]=1;

  int ans = INF;

  for(int bit = 1; bit < (1 << k); bit++){
    rep(i,k){
      if(bit & 1<<i){ //when the i-th gem is to be included
          const int bit2 = bit ^ 1 << i;
          rep(j,k){
             if(bit2 & 1 << j) {
               if(dp[bit][i] > dp[bit2][j] + cost[i][j]) dp[bit][i] = dp[bit2][j] + cost[i][j];
            }
          }
      }
    }
  }



  if(dp[(1<<k)-1][k-1] == INF) ans = -1;
  else ans =  dp[(1<<k)-1][k-1];
  cout << ans << endl;
  
  return 0;

  

}