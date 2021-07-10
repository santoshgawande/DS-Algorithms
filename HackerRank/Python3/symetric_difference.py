# Enter your code here. Read input from STDIN. Print output to STDOUT
am = int(input())
a = set(map(int,input().split()))
bm = int(input())
b =set(map(int,input().split()))

sd = a.difference(b)
sdb = b.difference(a)
s = list(set(sd.union(sdb)))
s.sort()
for elem in s:
    print(elem)


# Sample Input

# STDIN       Function
# -----       --------
# 4           set a size M = 4
# 2 4 5 9     a = {2, 4, 5, 9}
# 4           set b size N = 4
# 2 4 11 12   b = {2, 4, 11, 12}

# Sample Output

# 5
# 9
# 11
# 12
