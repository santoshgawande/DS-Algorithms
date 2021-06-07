MAX = 1000

def replaceSpace(string):
    # print(string, len(string))
    # Remove starting and ending spaces
    string = string.strip()
    slen = len(string)
    # print("ss:", string, len(string))
    space_count = string.count(' ')
    print(space_count)
    new_len = slen + space_count
    
    return 0



if __name__=='__main__':
    s = " Mr John Smith    "
    s = replaceSpace(s)