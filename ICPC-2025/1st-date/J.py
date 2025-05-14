def _solve() -> None:
    n = int(input())
    s = input()
    seen = {}
    for i in s:
        if i in seen:
            seen[i] += 1
        else:
            seen[i] = 1
if __name__ == '__main__':
    _solve()
