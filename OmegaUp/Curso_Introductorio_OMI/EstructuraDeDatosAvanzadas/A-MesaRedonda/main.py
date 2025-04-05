class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next

def generate_list(n: int) -> ListNode:
    head = ListNode(1)
    aux = head
    for i in range(2, n+1):
        head.next = ListNode(i)
        head = head.next
    head.next = aux
    return aux


def mesa(head: ListNode, k:int) -> int:
    cont = 0
    prev = None
    curr = head

    while True:
        for _ in range(k):
            prev = curr
            curr = curr.next
        prev.next = curr.next
        cont += 1
        if curr.val == 1:
            return cont
        curr = prev.next


def _solve() -> None:
    n, k = map(int, input().split())
    # n = int(input())
    # k = int(input())
    # print(n, k)
    head = generate_list(n)
    ans = mesa(head, k)
    print(ans -1)


if __name__ == '__main__':
    _solve()