a, b, c = map(int, input().split())

total = a + b + c

if total > 80 or total < 20 or a > 50 or b > 50 or c > 50:
    print("Shrek vai dar o urro!")
else:
    print("Shrek ficou calmo.")