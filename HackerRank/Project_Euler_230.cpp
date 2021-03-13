// https://www.hackerrank.com/contests/projecteuler/challenges/euler230/problem
// Still working on minor mistakes!!!
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

vector<long long> dp;
string a; string b;
int la;int lb;

char rec(long long n, int index){
    if(index==0)return a[la-n];
    else if (index==1)return b[lb-n];
    else if(n<=dp[index-1]) return(rec(n,index-1));
    else return(rec(n-dp[index-1],index-2));
}

int main() {

  int q;

  cin>>q;

  
  rep(i,q){
    cin>>a>>b;
    la = a.length();
    lb = b.length();

    long long n;
    cin>>n;

    long long totallen = 0;

    dp = vector<long long> (50);

    rep(i,140){
        if(i==0)dp[i]=la;
        else if(i==1)dp[i]=lb;
        else dp[i]=dp[i-1]+dp[i-2];
    }

    int pos = 0;

    rep(i,140){
        if(n<dp[i]){
            break;
        }
        pos++;
    }

    cout<<pos<<endl;


    char ans = rec(n, pos);
    cout<<ans<<endl;

    
  }

  
  
  return 0;

  


}
