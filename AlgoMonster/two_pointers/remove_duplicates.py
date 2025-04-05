# https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def generate_list(nums) -> ListNode:
    head = ListNode(nums[0])
    dummy = head
    for i in range(1, len(nums)):
        head.next = ListNode(val=nums[i], next = None)
        head = head.next
    return dummy
        

def remove_duplicates(head: Optional[ListNode]) -> Optional[ListNode]:
    if head is None:
        return None
    dummy = head
    slow = head
    fast = head.next
    while head and fast:
        if slow.val == fast.val:
            if fast.next is None:
                slow.next = None
                return dummy
            fast = fast.next
            
        else:
            slow.next = fast
            slow = slow.next
            fast = fast.next
    return head

def print_list(head: ListNode) -> None:
    while head:
        print(head.val)
        head = head.next


if __name__ == '__main__':
    nums = [1, 1, 2, 3, 3]
    head = generate_list(nums)
    print_list(head)
    dummy = remove_duplicates(head)
    print()
    print_list(dummy)
