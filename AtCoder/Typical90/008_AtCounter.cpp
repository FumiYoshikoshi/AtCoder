//https://atcoder.jp/contests/typical90/tasks/typical90_h

#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define rep(i,s,n)for(int i=s;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const long long mod = 1000000007;



int main() {
  int n;
  string s;
  string tar = "atcoder";

  cin>>n>>s;
  vector<vector<int> > dp(8,vector<int>(n+1,0));

  rep(i, 0, 8){
    rep(j, 1, n+1){
      if(i==0){
        dp[i][j]=1;
        continue;
      }
      if(s[j-1]==tar[i-1])dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
      else dp[i][j]=dp[i][j-1];
    }
  }
  cout<<dp[7][n]<<endl;
  return 0;
}

