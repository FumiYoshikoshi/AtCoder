class Solution(object):
    def isPalindrome(self, x):
        boo = True
        sx = str(x)
        l = len(sx)
        for i in range(0,l):
            if str(x)[i] != str(x)[l-i-1]:
                boo = False
                return boo
        return boo
        
        