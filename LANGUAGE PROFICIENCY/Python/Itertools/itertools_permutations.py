from itertools import permutations
s, n = input().split()

for p in sorted(list(permutations(s, int(n)))):
    print(''.join(p))
