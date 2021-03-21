// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/590/week-3-march-15th-march-21st/3679/
// Complexity : O((logN)!∗logN)
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class Solution {
public:
    bool reorderedPowerOf2(int N) {
        string str = to_string(N);
        for(int i = 1; i<999999999;){
            string str2 = to_string(i);
            do {
                if(str == str2)return true;
            }while (next_permutation(str.begin(), str.end()));
            i *= 2;
        }
        return false;
    }
};