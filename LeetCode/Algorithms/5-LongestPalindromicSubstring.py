# https://leetcode.com/problems/longest-palindromic-substring/

class Solution(object):
    def longestPalindrome(self, str):
        max_r = 0
        ind = 0
        s ="#"
        for i in range(0,len(str)):
            s+=str[i];
            s+="#"
                
        for i in range(0,len(s)):
            r = 0
            while i-r>=0 and i+r<len(s) and s[i-r]==s[i+r]:
                r += 1
            tmp = 0
            if max_r <r:
                max_r = r
                ind = i
            i = i+r
            
            
        return s[ind-max_r+1:ind+max_r].replace("#","")
        """
        :type s: str
        :rtype: str
        """
        