# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        newl = None

        while curr:
            t = curr.next
            curr.next = newl
            newl = curr
            curr = t

        return newl
            