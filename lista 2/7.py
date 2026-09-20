a, b = map(int, input().split())
c, d = map(int, input().split())

area_tri = (a * b) / 2.0
area_ret = float(c * d)

cabe_direto = (a <= c and b <= d)
cabe_girado = (a <= d and b <= c)

possivel = (cabe_direto or cabe_girado) and (area_tri <= area_ret)

if possivel:
    sobra = area_ret - area_tri
    print("Ao infinito e alem.")
    print(f"{area_tri:.1f} {area_ret:.1f} {sobra:.1f}")
else:
    print("Vamos treinar na caverna do Superman.")
    print(f"{area_tri:.1f} {area_ret:.1f} {area_ret:.1f}")