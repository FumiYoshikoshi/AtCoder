// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/590/week-3-march-15th-march-21st/3674/
// solution 1 (LTE)
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  vector<int> prices = {5000,200,8,10,2,7,1000,6,5,20};
  int fee = 2;

  int n = prices.size();
  vector<int> dp(n,0);
  int ans = 0;

  for(int i = 1; i<n;i++){
    dp[i]=ans;
    for(int j = 1; j<=i;j++){
      if(i==j)dp[i]=max(dp[i], prices[i]-prices[0]-fee);
      else dp[i]=max(dp[i], dp[i-j-1]+prices[i]-prices[i-j]-fee);
    }
    cout<<dp[i]<<" ";
    ans = max(ans,dp[i]);
  }

  cout<<ans<<endl;
  return 0;

  


}