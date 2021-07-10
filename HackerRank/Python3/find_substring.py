def count_substring(string, sub_string):
    sublen = len(sub_string)
    stlen = len(string)
    t = 0
    for i in range(len(string)):
        if stlen >=(i+sublen) :
            # print("Hello :", i+sublen, string[i:(i+sublen)], sub_string)
            if string[i:(i+sublen)] == sub_string:
                # print("Hi", string[i:sublen])
                t +=1
    return t

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)


# Sample Input

# ABCDCDC
# CDC

# Sample Output

# 2
