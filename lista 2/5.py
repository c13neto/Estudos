r1, r2, r3, r4, r5 = map(int, input().split())

medicoes = [r1, r2, r3, r4, r5]
media = sum(medicoes) / 5.0

if media < 300:
    print("Ambiente seguro")
elif media <= 600:
    print("Ambiente instavel")
else:
    print("Ambiente altamente perigoso")

if any(r > 600 for r in medicoes):
    print("Pelo menos um local altamente perigoso")