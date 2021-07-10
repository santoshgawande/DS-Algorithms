# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
arr = []
for i in range(n):
   arr.append(input())
print(len(set(arr)))