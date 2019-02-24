n, width = map(int, input().split())
list = [('.|.' * (2*i + 1)).center(width, '-') for i in range (n//2)]
print ('\n'.join(list + ['WELCOME'.center(width, '-')] + list[::-1]))


