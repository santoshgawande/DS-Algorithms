def average(array):
    # your code goes here
    s =set(array)
    avg =format(sum(s)/len(s),".3f")
    return avg
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)