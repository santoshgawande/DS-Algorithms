# Array implementation in Python
import array
# <arr_name> = array.array(<datatype>, [value list])
arr = array.array('i',[1,2,3,4,3])
for i in range(len(arr)):
    print(arr[i], end=" ")

print("\n")
#Insert at last in array
arr.append(22)
for i in range(len(arr)):
    print(arr[i], end=" ")
print("\n")

# Insert at specific position
arr.insert(2, 33)
for i in range(len(arr)):
    print(arr[i], end=" ")
print("\n")
#Remove at last element
arr.pop()
for i in range(len(arr)):
    print(arr[i], end=" ")
print("\n")

#Remove first occurence of given element
arr.remove(3)
for i in range(len(arr)):
    print(arr[i],end=" ")
