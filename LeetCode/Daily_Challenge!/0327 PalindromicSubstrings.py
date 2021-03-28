# https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/591/week-4-march-22nd-march-28th/3686/
class Solution(object):
    def countSubstrings(self, str):
        max_r = 0
        ind = 0
        s ="#"
        for i in range(0,len(str)):
            s+=str[i];
            s+="#"
        ans = 0      
        for i in range(0,len(s)):
            r = 0
            while i-r>=0 and i+r<len(s) and s[i-r]==s[i+r]:
                r += 1
                ans += 1
            
            
        return (ans-len(str)-1)/2
        