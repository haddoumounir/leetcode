class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        seens = set()

        tmp = head
        while tmp:
            if(tmp.next in seens):
                return True
            else:
                seens.add(tmp)
            tmp = tmp.next
        return False