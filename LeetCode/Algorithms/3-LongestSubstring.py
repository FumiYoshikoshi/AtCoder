# https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        n = len(s)
        if n==0:
            return 0
        
        dp = [0]*n
        dp[0]=1
        
        start = 0
        ans = 1
        
        for i in range(1,n) :
            dp[i]=dp[i-1]+1
            for j in range(0,i-start):
                if s[i] == s[start + j]:
                    dp[i]=dp[i-1]-j
                    start = start + j + 1
                    break
            print(s[i],dp[i])
            ans = max(ans,dp[i]) 
        
        return ans