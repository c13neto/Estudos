t, d = map(int, input().split())
v, p = map(int, input().split())

total_pedagios = t // d
custo_distancia = t * v
custo_pedagios = total_pedagios * p

print(custo_distancia + custo_pedagios)