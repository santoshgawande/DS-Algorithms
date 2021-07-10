# Enter your code here. Read input from STDIN. Print output to STDOUT
# TestCase
# 1 4
# x**3 + x**2 + x +1 
# Output :
# True

inp = input().split()
x = inp[0]
k = inp[1]
fx = input()
# replace x with value
print(eval(fx.replace('x', str(x))) == int(k))
