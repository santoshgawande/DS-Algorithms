# timeit are use to calculate excution of time of python3 statement methods etc
import timeit

def binary_search(mylist, find):
    while(len(mylist) >0):
        # integer division
        mid = (len(mylist)) // 2
        if mylist[mid] == find:
            return True
        elif mylist[mid]< find:
            mylist = mylist[:mid]
        else:
            mylist = mylist[mid+1:]
    return False


# Linear Search
def linear_search(mylist, find):
    for x in mylist:
        if x == find:
            return True
    return False


## Compute Binary Search time
def binary_time():
    setup_code = '''
from __main__ import binary_search
from  random import randint
    '''

    test_code ='''
mylist = [1,2,4,5,6,7,8,9,11,12,14,15,16, 17 ,18 ,19]
find = randint(0, len(mylist))
binary_search(mylist, 9)
    '''

    times = timeit.repeat(setup=setup_code, stmt=test_code, repeat=3, number=10000)
    print("Binary Search Time: {}".format(times))


## Compute Linear Search time

def linear_time():
    setup_code ='''
from __main__ import linear_search
from  random import randint
    '''

    test_code ='''
mylist = [1,2,4,5,6,7,8,9,11,12,14,15,16, 17 ,18 ,19]
find = randint(0, len(mylist))
linear_search(mylist, 9)
    '''
    # setup_code is a import statement
    # stmt = Statement or function will execute 
    # repeat is how much time this code will test
    # numer 
    times = timeit.repeat(setup=setup_code, stmt=test_code, repeat=3, number=10000)
    print("Linear Search Time: {}".format(times))

if __name__ == '__main__':
    linear_time()
    binary_time()