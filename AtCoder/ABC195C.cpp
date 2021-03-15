// https://atcoder.jp/contests/abc195/tasks/abc195_c?lang=en
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const long long mod = 1000000007;

int main() {

  long long n;

  cin>>n;

  long long count = 0;

  if(n>=1000)count += n-999;
  if(n>=1000000)count += n-999999;
  if(n>=1000000000)count += n-999999999;
  if(n>=1000000000000)count += n-999999999999;
  if(n>=1000000000000000)count += n-999999999999999; //10^15

  cout<<count<<endl;

  
  return 0;

  


}
/* Failed Codes: WHY DID I GET THIS WRONG
int main() {

  long long n;

  cin>>n;

  long long N=n;

  long long count = 0;

  
  long long k = 0;
  long long kk = 999;
  rep(i,15){
    //cout<<n<<endl;
    if(n<1000){
     // cout<<k<<endl;
      long long mod = 1;
      rep(j,i){
        mod *=1000;
      }
      count += (N-mod)*k;
      break;
    }
    count += k * kk;
    n = (n-n%1000)/1000;
   // n/=1000;
    if(n<0)break;
    kk *= 1000;
    k+=1;
    
  }


  
  cout<<count<<endl;

  
  return 0;

  


}
*/