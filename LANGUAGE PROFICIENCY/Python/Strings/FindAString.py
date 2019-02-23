def count_substring(string, sub_string):
    count = 0
    l = len(string)
    size = len(sub_string)
    for i in range (l - size + 1):
        if(string[i:size+i] == sub_string):
            count += 1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
