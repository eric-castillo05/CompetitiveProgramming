def isPrime(n: int) -> bool:
    if n <= 1:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True
        
def _solve() -> None:
    t = int(input())
    for _ in range(t):
        x, k = map(int, input().split())
        # x = int(str(x) * k)
        if k > 1 and x > 1:
            print('NO')
        elif k == 1:
            print('YES') if isPrime(x) else print('NO')
        else:
            print('YES') if k == 2 else print('NO')
    


if __name__ == '__main__':
    _solve()
