from collections import Counter
_, l = input(), list(map(int, input().split()))
rooms = set(l)

c = Counter(l)
for r in rooms:
    if c[r] == 1:
        print(r)
        break
