items = [1,2,3,4,5]

# #Square without using Map Function
# squared = []
# for i in items:
# 	squared.append(i**2)

# Square using Map function
squared = list(map(lambda x:x**2, items))
print(squared)

# Map Function with FunctionsS
def multiply(x):
	return(x*x)

def add(x):
	return(x+x)

funcs = [add, multiply]
for i in range(5):
	value = list(map(lambda x:x(i), funcs))
	print(value)
