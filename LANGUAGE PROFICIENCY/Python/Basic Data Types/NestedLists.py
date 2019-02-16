if __name__ == '__main__':
    i = int(input())
    marksheet = [ [input(), float( input() )] for _ in range(i)]
    
    scores = sorted(set([entry[1] for entry in marksheet]))

    for name in sorted([entry[0] for entry in marksheet if entry[1] == scores[1]]):
        print(name)
