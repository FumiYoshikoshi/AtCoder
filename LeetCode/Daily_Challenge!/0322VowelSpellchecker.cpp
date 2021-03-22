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
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        const int n = queries.size();
        vector<string> ans(n,"");
        
        
        auto replaceVowel = [&](string str){
            string s = str;
            for(int i=0;i<s.length();i++){
                char c = s[i];
                if(c=='a' || c=='i'||c=='u'||c=='e'||c=='o')s[i]='#';
                else if(c=='A' || c=='I'||c=='U'||c=='E'||c=='O')s[i]='#';
            }
            return s;
        };
        
        auto replaceCapital = [&](string str){
            string s = str;
            for(int i=0;i<s.length();i++){
                char c = s[i];
                s[i]=tolower(c);
            }
            return s;
        };
        
        unordered_map<string,string> lower_map;
        unordered_map<string,string> masked_map;
        unordered_map<string,string> map;
        
        for(int i = wordlist.size()-1;i>=0;i--){
            map[wordlist[i]]=wordlist[i];
            
            string k1=replaceCapital(wordlist[i]);
            lower_map[k1]=wordlist[i];
            
            string k2=replaceVowel(k1);
            masked_map[k2]=wordlist[i];
        
        }
        
       
        
        for(int i = 0;i<queries.size();i++){
            if(map.find(queries[i]) != map.end()){
                ans[i]=map[queries[i]];
                continue;
            }
            string k1=replaceCapital(queries[i]);
            if(lower_map.find(k1) != lower_map.end()){
                ans[i]=lower_map[k1];
                continue;
            }
            string k2=replaceVowel(k1);
            if(masked_map.find(k2) != masked_map.end()){
                ans[i]=masked_map[k2];
                continue;
            }
           
        
        }
        
        
        
        
        
        
        
        
       return ans;
    }
};