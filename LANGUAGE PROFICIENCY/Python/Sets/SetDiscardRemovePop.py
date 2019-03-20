n = int(input())
s = set(map(int, input().split()))
N = int(input())
for _ in range (N):
    command = input().split()
    if command[0] == 'pop':
        s.pop()
    elif command[0] == 'discard':
        s.discard(int(command[1]))
    elif command[0] == 'remove':
        s.remove(int(command[1]))

sum = 0
for x in s:
    sum += x
print(sum)


