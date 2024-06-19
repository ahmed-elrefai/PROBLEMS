class Solution {

    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode dummy = new ListNode();
        ListNode nextNode = dummy;
        while (list1 != null && list2 != null) {
            if (list1.val < list2.val) {
                nextNode.next = list1;
                list1 = list1.next; // Move list1 pointer forward
            } else {
                nextNode.next = list2;
                list2 = list2.next; // Move list2 pointer forward
            }
            nextNode = nextNode.next;
        }

        if (list1 != null) {
            nextNode.next = list1;
        } else if (list2 != null) {
            nextNode.next = list2;
        }
        return dummy.next;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        ListNode list1 = new ListNode(1, new ListNode(3, new ListNode(5)));
        ListNode list2 = new ListNode(2, new ListNode(4, new ListNode(6)));

        ListNode answer = solution.mergeTwoLists(list1, list2);
        while (answer != null) {
            System.out.println(answer.val);
            answer = answer.next;
        }
    }
}
