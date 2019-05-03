_ , A = int(input()), set(map(int, input().split()))
q = int(input())
for _ in range(q):
    command, B = input().split()[0], set(map(int, input().split()))
    getattr(A, command)(B)

print(sum(A))
