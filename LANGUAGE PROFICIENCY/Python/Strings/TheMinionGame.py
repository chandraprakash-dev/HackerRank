def minion_game(string):
    vowels = ['A', 'E', 'I', 'O', 'U']
    l = len(string)
    total = (l * (l + 1) ) / 2

    stuart = 0

    for i in range(len(string)):
        if string[i] not in vowels:
            stuart += len(string) - i
            
    kevin = total - stuart

    if(kevin > stuart):
        print("Kevin %d"%kevin)
    elif(kevin < stuart):
        print("Stuart %d"%stuart)
    else:
        print("Draw")
        
if __name__ == '__main__':
    s = input()
    minion_game(s)
