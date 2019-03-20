e = int(input())
E = set(map(int, input().split()))
f = int(input())
F = set(map(int, input().split()))
S = E.intersection(F)
print(len(S))

