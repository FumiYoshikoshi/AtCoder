# https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/591/week-4-march-22nd-march-28th/3687/
class Solution(object):
    def originalDigits(self, s):
        numbers = [0]*10
        st = list(s)
        numbers[0] = st.count('z')
        numbers[2] = st.count('w')
        numbers[4] = st.count('u')
        numbers[6] = st.count('x')
        numbers[8] = st.count('g')
        numbers[1] = st.count('o')-numbers[0]-numbers[2]-numbers[4]
        numbers[3] = st.count('r')-numbers[0]-numbers[4]
        numbers[5] = st.count('f')-numbers[4]
        numbers[7] = st.count('s')-numbers[6]
        numbers[9] = (st.count('n')-numbers[1]-numbers[7])/2
        
        ans = ""
        for i in range(0,10):
            if numbers[i]>0:
                ans+=str(i)*numbers[i]
        
        return ans
        
        