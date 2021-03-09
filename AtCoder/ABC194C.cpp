// https://atcoder.jp/contests/abc194/tasks/abc194_c
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n;

  cin>>n;
  
  long ans = 0;
  long a = 0;
  long sum = 0;

  rep(i,n){
    cin>>a;
    ans += a*a;
    sum += a;
  }

  ans = ans * n - sum*sum;





/*
This codes work for smaller n

  vector<long> a(n); // insert input into a
  vector<vector<int> > map(n,vector<int> (n,0));
  for(int i = 0; i < n ;i++){
    for(int j = i+1 ; j < n ; j++){
      map[i][j]=map[i][j-1] + a[j]-a[j-1];
      ans += (map[i][j] * map[i][j]);
    }
  }
*/


  
  
  
  cout<<ans<<endl;

  
  return 0;

  


}