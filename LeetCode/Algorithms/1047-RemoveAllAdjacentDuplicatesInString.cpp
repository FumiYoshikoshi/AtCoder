// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// https://www.geeksforgeeks.org/recursively-remove-adjacent-duplicates-given-string/

#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    string removeDuplicates(string s){
        int n = s.length();
        char char_array[n+1];
        strcpy(char_array, s.c_str());
        char last = '\0';
        char* ans = rec(char_array,&last);
        int len = 0;
        int size = getSize(ans);
        string str = "";
        for(int i=0;i<size;i++){
            str+=ans[i];
        }
        return str;
    }
    
    char* rec(char *s,char *last){
        if (s[0] == '\0' || s[1] == '\0')return s;
        if(s[0]==s[1]){
            *last = s[0];
            while(s[1] && s[1]==s[0])s++;
            s++;
            return rec(s,last);
        }
        
        char* r = rec(s+1, last);
        if(r[0] && r[0]==s[0]){
            *last = s[0];
            return (r+1);
        }
        
        if(r[0]=='\0' && *last ==s[0])return r;
        
        r-=1;
        r[0]=s[0];
        return r;
    }
    
    int getSize (char * s) {
        char * t; 
        int size = 0;
        for (t = s; *t != '\0'; t++) size++;
        return size;
}
};

