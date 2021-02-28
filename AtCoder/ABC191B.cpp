//https://atcoder.jp/contests/abc191/tasks/abc191_b
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n,x;

  cin>>n>>x;

  
  rep(i,n){
    int a;
    cin>>a;
    if(a!=x)cout<<a;
    if(i!=n)cout<<" ";
  }

  
  
  
  cout<<endl;

  
  return 0;

  


}