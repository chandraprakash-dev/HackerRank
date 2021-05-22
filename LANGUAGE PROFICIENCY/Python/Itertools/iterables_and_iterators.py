from itertools import combinations
_ = input()

s = input().split()
k = int(input())

c = list(combinations(s, k))
a = [i for i in c if 'a' in i]
print(len(a)/ len(c))
