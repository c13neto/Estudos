x, y, r = map(int, input().split())

diametro = 2 * r

qtd_x = x // diametro
qtd_y = y // diametro

print(qtd_x * qtd_y)