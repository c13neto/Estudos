sc, mm, ck = map(int, input().split())

if sc == 30:
    print("PROXIMO MUNDO")
else:
    falta_sc = 30 - sc
    falta_mm = 6 - mm
    falta_ck = 3 - ck
    print(f"{falta_sc} {falta_mm} {falta_ck}")