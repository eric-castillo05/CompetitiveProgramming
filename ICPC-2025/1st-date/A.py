def _solve() -> None:
    s = input()
    n = int(input())
    size = len(s)
    for _ in range(n):
        temp = input()
        sliced = [temp[i:i+size] for i in range(0, len(temp), size)]
        if all(i == s for i in sliced):
            print('YES')
        else:
            print('NO')
            
if __name__ == '__main__':
    _solve()
