# https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/604/week-2-june-8th-june-14th/3774/
# Reference: https://leetcode.com/problems/my-calendar-i/solution/
class Node:
    def __init__(self,start, end):
        self.start  = start
        self.end  = end
        self.left = None
        self.right = None
        

    def insert(self, node):
        if node.start >= self.end:
            if not self.right:
                self.right = node
                return True
            return self.right.insert(node)
        elif node.end <= self.start:
            if not self.left:
                self.left = node
                return True
            return self.left.insert(node)
        else:
            return False

class MyCalendar:

    def __init__(self):
        self.root  = None

    def book(self, start, end) -> bool:
        if not self.root:
            self.root= Node(start,end)
            return True
        return self.root.insert(Node(start, end))
        

            
            
            
        

