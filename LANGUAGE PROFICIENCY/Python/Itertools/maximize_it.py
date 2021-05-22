from itertools import product

k, m = map(int, input().split())
ll = []

for _ in range(k):
    l = list(map(int, input().split()))[1:]
    ll.append(l)

res = -1
for i in product(*ll):
    res = max(res, sum(x ** 2 for x in i)%m)

print(res)
