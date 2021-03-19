# https://leetcode.com/problems/add-two-numbers/
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        x = 0
        y = ans = ListNode(0)
        while x or l1 or l2:
            if l1:
                x = x + l1.val
                l1 = l1.next
            if l2:
                x+= l2.val
                l2 = l2.next
            ans.val = x % 10
            x = x//10
            
            if x or l1 or l2:
                ans.next = ListNode(0)
                ans = ans.next
           
        return y