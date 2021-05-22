from itertools import product
a = map(int, input().split())
b = map(int,input().split())

for t in list(product(a, b)):
    print(t, end = " ")
