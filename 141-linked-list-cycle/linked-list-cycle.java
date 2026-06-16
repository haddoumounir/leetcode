/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {

        Set<ListNode> seens = new HashSet<>();
        while (head != null)
        {
            if(seens.contains(head))
                return true;
            else
                seens.add(head);
            head = head.next;
        }
        return false;
    }
}