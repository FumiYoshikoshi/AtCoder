// https://atcoder.jp/contests/abc196/tasks/abc196_c
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;


int main() {

  long n;
  cin>>n;

  int keta = to_string(n).length();
  int ans = 0;

  if(keta > 1){
    if(keta %2 == 1 )n = (long)pow(10,keta-1)-1;
    
    long x = n%(long)pow(10,keta/2);
    long y = (n-x)/(long)pow(10,keta/2);
    //cout<<x<<" "<<y<<endl;

    //if(x<(long)pow(10,keta/2-1))ans += y-1;
    if(x<y)ans += y-1;
    else ans += y;
    //else ans = ans + min(x,y);
    
  }
  

  
  
  cout<<ans<<endl;

  
  return 0;

  


}