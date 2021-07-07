// empty
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

int main() {

  int n;

  cin>>n;

  
  rep(i,n){
    
  }


  //binary search
  int n=0;
  bool cond = true;
  long long  right = n+1;
  long long  left = -1;
  while(right-left>1){
    long long  m = left+(right-left)/2;
    if(cond)right = m;
    else left = m;
  }
  
  
  cout<<" "<<endl;

  
  return 0;

  


}