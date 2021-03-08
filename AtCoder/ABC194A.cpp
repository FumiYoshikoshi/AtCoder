// https://atcoder.jp/contests/abc194/tasks/abc194_a
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int a,b;

  cin>>a>>b;

  
  if(a+b>=15 && b>=8)cout<<1<<endl;
  else if(a+b>=10 && b>=3)cout<<2<<endl;
  else if(a+b>=3)cout<<3<<endl;
  else cout<<4<<endl;

  
  return 0;

  


}