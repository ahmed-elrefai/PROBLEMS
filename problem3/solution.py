
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1:ListNode, list2:ListNode) -> ListNode:
        dummy: ListNode = ListNode()
        nextNode: ListNode = dummy
        while (list1 is not None and list2 is not None):
            if list1.val < list2.val:
                nextNode.next = list1
                list1 = list1.next
            else:
                nextNode.next = list2
                list2 = list2.next
            nextNode = nextNode.next
        
        if list1 is not None:
            nextNode.next = list1
        elif list2 is not None:
            nextNode.next = list2
        
        return dummy.next


if __name__ == "__main__":
    solution = Solution()
    list1 = ListNode(1, ListNode(3, ListNode(5)))
    list2 = ListNode(2, ListNode(4, ListNode(6)))
    result = solution.mergeTwoLists(list1, list2)
    while result is not None:
        print(result.val)
        result = result.next