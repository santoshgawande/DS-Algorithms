def isunique(string):
    length = len(string)
    s1 = set(string)
    if length == len(s1):
        return True
    else:
        return False

if __name__ == "__main__":
    res = isunique("abc")
    print(res)
