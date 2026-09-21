n = int(input())
h = n // 3600
m = (n % 3600) // 60
s = n % 60
print(f"{h}h {m}m {s}s")