a, b, c, d, e, f = map(int, input().split())

luther = abs(2023 - a) * 2
diego = abs(2023 - b) * 2
alisson = abs(2023 - c) * 2
klaus = abs(2023 - d) * 2
ben = abs(2023 - e) * 2
viktor = abs(2023 - f) * 2

five = luther + diego + alisson + klaus + ben + viktor

print(f"Luther {luther}")
print(f"Diego {diego}")
print(f"Alisson {alisson}")
print(f"Klaus {klaus}")
print(f"Five {five}")
print(f"Ben {ben}")
print(f"Viktor {viktor}")