C, c, X = map(int, input().split())

if C % c == 0 and X >= (C // c) ** 3:
    print("Eh possivel")
else:
    print("!Eh possivel")