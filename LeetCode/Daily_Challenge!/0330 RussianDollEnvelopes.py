# https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/592/week-5-march-29th-march-31st/3690/
# Reference: https://dev.to/seanpgallivan/solution-russian-doll-envelopes-459i
# Reference: https://qiita.com/ta7uw/items/d6d8f0ddb215c3677cd3
import bisect

class Solution(object):
    def maxEnvelopes(self, envelopes):
      
        envelopes = sorted(envelopes, key = lambda x: (x[0], -x[1]))
        print(envelopes)
        dp = []
        
        
        
        for w,h in envelopes:
            ind = bisect.bisect_left(dp,h)
            if ind >= len(dp):
                dp.append(h)
            else:
                dp[ind]=h
            print(dp)
        
                
        return len(dp)
         
        
        """
        :type envelopes: List[List[int]]
        :rtype: int
        """
        
        
        