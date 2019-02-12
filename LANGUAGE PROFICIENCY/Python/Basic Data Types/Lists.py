if __name__ == '__main__':
    arr = []
    for i in range(int(input())):
        s = input().split()  
        for i in range(1, len(s)):
            s[i] = int(s[i])
        
        if(s[0] == "insert"):
            arr.insert(s[1], s[2])
            
        elif (s[0] == "append"):
            arr.append(s[1])
            
        elif (s[0] == "remove"):
            arr.remove(s[1])
            
        elif (s[0] == "pop"):
            arr.pop()
            
        elif (s[0] == "print"):
            print(arr)
            
        elif (s[0] == "sort"):
            arr.sort()
            
        elif (s[0] == "reverse"):
            arr.reverse()
            
        
