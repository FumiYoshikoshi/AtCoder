// empty
#include <bits/stdc++.h>
#include <set>   
#include <iostream>
#include <algorithm>
#include <cmath>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int k = 5;

  vector<vector<int> > dp(1<<k,vector<int>(k,100));
  for(int i = 0; i < k; i++) dp[1 << i][i] = 1;

  rep(i,32){
    rep(j,k){
      cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }


  
  return 0;

  


}