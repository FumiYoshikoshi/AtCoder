// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/605/week-3-june-15th-june-21st/3781/

#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<char> parenthesis;
        for(int i=0;i<n;i++){
            parenthesis.push_back('(');
            parenthesis.push_back(')');
        }
        sort(parenthesis.begin(), parenthesis.end());
        vector<string > ans;
        do {
            string tmp = string (parenthesis.begin(), parenthesis.end());
            int open = 0;
            bool flag = true;
            for(char c:tmp){
                if(c=='(')open+=1;
                else{
                    if(open>0)open-=1;
                    else{
                        flag = false;
                        break;
                    }
                }
                cout<<tmp<<' '<<c<<' '<<open<<endl;
            }
            if(flag)ans.push_back(tmp);
        } while (next_permutation(parenthesis.begin(), parenthesis.end()));
        
        return ans;

    }
};