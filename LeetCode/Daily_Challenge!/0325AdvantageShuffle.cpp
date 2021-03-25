// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/591/week-4-march-22nd-march-28th/3681/
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size(),0);
        sort(A.begin(),A.end(),greater<>());
        
        vector<int> b_copy(B.size(),0);
        for(int i = 0;i<b_copy.size();i++)b_copy[i]=i;
        sort(b_copy.begin(),b_copy.end(),[&](int x, int y){return B[x]>B[y];});//Descending order
        
        
        int i = 0; int i_upper = A.size()-1;
        for(int b:b_copy){
            //cout<<"B[b] "<<B[b]<<" A[i] "<<A[i]<<" A[i_upper] "<<A[i_upper]<<endl;
            if(B[b]<A[i]){
                ans[b]=A[i];
                i++;
            }else{
                ans[b]=A[i_upper];
                i_upper--;
            }
        }
        return ans;
    }
};