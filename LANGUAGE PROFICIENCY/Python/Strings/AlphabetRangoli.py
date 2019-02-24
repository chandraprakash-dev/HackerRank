import string

def print_rangoli(size):
    width = 4 * (size - 1) + 1  # 2 * (size - 1) on each side + 1 in centre
    l = []
    for i in range(size):
        s =  '-'.join(string.ascii_lowercase[i:n])
        l.append((s[::-1] + s[1:]).center(width, '-'))

    print('\n'.join(l[::-1] + l[1:]))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
