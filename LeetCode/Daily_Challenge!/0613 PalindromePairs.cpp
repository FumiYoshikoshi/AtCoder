// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/604/week-2-june-8th-june-14th/3777/
// https://www.youtube.com/watch?v=ewNE1UbjmJ8
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    bool isPalindrome(string s){
        int n = s.length();
        bool ans = true;
        for(int i=0;i<n;i++){
            if(i>=n-1-i)break;
            if(s[i]!=s[n-1-i]){
                ans = false;
                break;
            }
        }
        return ans;
    }
    
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int> > ans;
        int n = words.size();
        map<string, int> map;
    
        for(int i=0;i<n;i++){
            map[words[i]]=i;
        }
        
        if(map.find("")!=map.end()){
            int blankIdx = map[""];
            for(int i=0;i<n;i++){
                if(i==blankIdx)continue;
                if(isPalindrome(words[i])){
                   ans.push_back((vector<int> {i,blankIdx}));
                   ans.push_back((vector<int> {blankIdx,i}));
                    cout<<i<<" "<<blankIdx<< endl;
                }   
            }
        }
        
        for(int i=0;i<n;i++){
            string rev (words[i].rbegin(), words[i].rend());
            if(map.find(rev)!=map.end()){
                int revIdx = map[rev];
                if(revIdx!=i){
                    ans.push_back((vector<int> {i,revIdx}));
                }
            } 
        }
        
        for(int i=0;i<n;i++){
            if(words[i]=="")continue;
            for(int j=1;j<words[i].length();j++){
                string sub = words[i].substr(0,j);
                string sub2 = words[i].substr(j);
                
                if(isPalindrome(sub)){
                    string rev2 (sub2.rbegin(), sub2.rend());
                    if(map.find(rev2)!=map.end()){
                        int revIdx = map[rev2];
                        if(revIdx!=i){
                          /// ans.push_back((vector<int> {i,revIdx}));
                            ans.push_back((vector<int> {revIdx,i}));
                          //  cout<<sub<<" "<<rev2<<" "<<revIdx<<" "<<i<<endl;
                        }
                    }   
                }
                
                if(isPalindrome(sub2)){
                    string rev (sub.rbegin(), sub.rend());
                    if(map.find(rev)!=map.end()){
                        int revIdx = map[rev];
                        if(revIdx!=i){
                            ans.push_back((vector<int> {i,revIdx}));
                        }
                    }   
                }
            }      
        }
        
        return ans;
    }
    
};