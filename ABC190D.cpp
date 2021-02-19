//ABC190-D Out-of-time 
#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  long long n;
  cin>>n;

  long long ans = 0;
  for(long long i = 1; i * i <= 2*n;i++){
      if(2*n%i==0){
          if(i%2!=((2*n)/i)%2 || n==i){
              ans+=2;
          }
      }
  }

  cout<<ans<<endl;
  return 0;
}