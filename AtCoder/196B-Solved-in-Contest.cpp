// https://atcoder.jp/contests/abc196/tasks/abc196_b
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

int main() {

  string s;

  cin>>s;

  string str = "";
  rep(i,s.length()){
    if(s[i]=='.')break;
    str += s[i];
  }

  
  
  
  cout<<str<<endl;

  
  return 0;

  


}