// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/590/week-3-march-15th-march-21st/3674/
// solution 2
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  vector<int> prices = {5000,200,8,10,2,7,1000,6,5,20};
  int fee = 2;

  int n = prices.size();

  int pos = -60000;
  int npos = 0;

  for(int i = 0; i<n;i++){
    pos = max(pos,npos-prices[i]);
    npos = max(npos,pos+prices[i]-fee);
  }

  cout<<npos<<endl;
  return 0;

  


}