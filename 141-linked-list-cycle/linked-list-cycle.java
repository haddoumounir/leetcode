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
        ListNode tmp = head;
        while (tmp != null)
        {
            if (seens.contains(tmp))
                return true;
            else
                seens.add(tmp);
            tmp = tmp.next;
        }

        return false;
    }
}