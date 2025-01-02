for _ in range(int(input())):
    s = input()
    x, y, op = s[0], s[2], s[1]
    x = int(x)
    y = int(y)
    if op == '<':
        if x < y:
            print(f'{x}<{y}')
        elif x > y:
            print(f'{x}>{y}')
        else:
            print(f'{x}={y}')
    if op == '>':
        if x > y:
            print(f'{x}>{y}')
        elif x < y:
            print(f'{x}<{y}')
        else:
            print(f'{x}={y}')
    if op == '=':
        if x == y:
            print(f'{x}={y}')
        elif x > y:
            print(f'{x}>{y}')
        else:
            print(f'{x}<{y}')
