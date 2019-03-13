m = int(input())
M = set(input().split())
n = int(input())
N = set(input().split())
l = []

for c in M:
    if c not in N:
        l.append(int(c))

for c in N:
    if c not in M:
        l.append(int(c))

l.sort()

for c in l:
    print(c)
