# https://leetcode.com/problems/reverse-integer/

class Solution(object):
    def reverse(self, x):
        ans = 0
        flag = 1
        if x<0:
            flag = -1
            x = x*(-1)
        
        while x!=0:
            print(x)
            
            ans = ans * 10
            ans += x%10
            if (flag == 1 and ans >= 2147483648) or (flag == -1 and ans > 2147483648):
                return 0
            x/=10
            
        return ans*flag
        """
        :type x: int
        :rtype: int
        """
        