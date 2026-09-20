x, y = map(int, input().split())

if 0 < x < 100 and 0 < y < 100:
    if x > 70 or y > 70:
        print("Coordenada valida e o navio esta longe")
    else:
        print("Coordenada valida e o navio esta perto")
else:
    print("Coordenada invalida")