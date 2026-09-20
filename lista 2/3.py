p, c = map(int, input().split())
estado = input()

if estado == "Fez metade":
    tempo_desarme = 3.5
else:
    tempo_desarme = 7.0

tempo_total = p + c + tempo_desarme

if tempo_total <= 45.0:
    tempo_sobrando = 45.0 - tempo_total
    print("Vai desarmar!")
    print(f"{tempo_sobrando:.1f}")
else:
    print("Corre Felipe!")