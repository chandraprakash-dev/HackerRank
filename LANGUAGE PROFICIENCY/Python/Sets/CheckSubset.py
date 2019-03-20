for _ in range(int(input())):
    _, A = input(), set(map(int, input().split())) 
    _, B = input(), set(map(int, input().split()))
    print(A.issubset(B))
