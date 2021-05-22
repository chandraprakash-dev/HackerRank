# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import groupby
s = list(map(int, input()))
for i, j in groupby(s):
    print(tuple([len(list(j)), i]),end = ' ')
