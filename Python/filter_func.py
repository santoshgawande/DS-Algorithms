# Using Filter Func
# It will filter numer which is less than zero
number_list = range(-5, 5)
less_than_zero = list(filter(lambda x:x<0, number_list))
print(less_than_zero)