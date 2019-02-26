def merge_the_tools(string, k):
    l = []
    for s in [string[i: k+i] for i in range(0, len(string), k)]:
        t = []
        for c in s:
            if c not in t:
                t.append(c)
        l.append(''.join(t))
    
    print('\n'.join(l))


if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
