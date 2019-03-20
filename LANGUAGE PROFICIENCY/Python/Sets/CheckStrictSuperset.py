A = set(map(int, input().split()))
r = True
for _ in range(int(input())):
    B = set(map(int, input().split()))
    if A.issuperset(B) == False:
        r = False

print(r)
