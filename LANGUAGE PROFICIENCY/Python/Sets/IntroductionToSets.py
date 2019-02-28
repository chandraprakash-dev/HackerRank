def average(array):
    sum = 0
    for h in set(array):
        sum += h
    return sum / len(set(array))

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
