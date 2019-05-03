# Enter your code here. Read input from STDIN. Print output to STDOUT
import cmath

# input is of type complex
c = complex(input())
# cmath.polar(x) returns a pair (abs(x), phase(x))
# * prefix unpacks list and passes them as seperate arguments to the function
# use sep = '\n' to print function to print on new lines
print(*cmath.polar(c), sep='\n')

