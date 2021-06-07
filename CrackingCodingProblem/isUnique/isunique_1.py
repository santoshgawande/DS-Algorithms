def isunique(s):
    for i in range(len(s)):
        for j in range(len(s)):
            if i != j:
                if(s[i] == s[j]):
                    return False
    
    return True

if __name__ == "__main__":
    res = isunique("hsjdfhjdhjfk")
    print(res)

