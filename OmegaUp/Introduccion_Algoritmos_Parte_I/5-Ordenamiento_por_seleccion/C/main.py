
def _solve() -> None:
    mon = {}
    n = int(input())
    for _ in range(n):
        h, s = input().split()
        h = int(h)
        mon[s] = h
    mon = sorted(mon.items(), key=lambda x: x[1])
    print(mon)
if __name__ == '__main__':
    _solve()