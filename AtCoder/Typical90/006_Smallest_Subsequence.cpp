//https://atcoder.jp/contests/typical90/tasks/typical90_e

#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
//#define rep(i,n)for(int i=0;i<(int)(n);i++)
#define rep(i,s,n)for(int i=s;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const long long mod = 1000000007;

int main() {
 
  string s = "";
  int n, k;
  cin>>n>>k>>s;
  int l = s.size();

  vector<vector <int> > dp(l, vector<int>(26)); 

  for(int i = l-1; i>=0; i--){
    rep(j,0,26){
      if((int)s[i]-'a'==j)dp[i][j]=i;
      else{
        if(i==l-1)dp[i][j]=-1;
        else dp[i][j]=dp[i+1][j];
      }
    }
  }

  string ans = "";
  int row = 0;
  rep(i,1,k+1){
    rep(j,0,26){
      int next = dp[row][j];
      if(next==-1)continue;
      int m = (int)(n-next-1)+i;
      if(m>=k){
        ans += char('a'+j);
        row = next +1;
        break;
      }

    }
  }

  cout<<ans<<endl;
  return 0;
}

