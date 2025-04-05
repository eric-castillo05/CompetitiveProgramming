# https://leetcode.com/problems/middle-of-the-linked-list/

from typing import Optional


class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next

def middle_node(head: Optional[ListNode]) -> Optional[ListNode]:
    if head is None:
        return None
    dummy = head
    slow = head
    fast = head.next
    cont = 1
    while fast
        cont += 1
        fast = fast.next


def generate_list(nums) -> ListNode:
    head = ListNode(nums[0])
    dummy = head
    for i in range(1, len(nums)):
        head.next = ListNode(nums[i])
        head = head.next
    return dummy

def print_list(head: ListNode) -> ListNode:
    while head:
        print(head.val)
        head = head.next



if __name__ == '__main__':
    nums = [1 , 3, 4, 5]
    head = generate_list(nums)
    print_list(head)

