z, g = input().split()
d, c = input().split()

if z == d:
    print("Bloqueado")
else:
    print("Driblado")
    if c == g:
        print("...e o goleiro pega")
    else:
        print("Gol")