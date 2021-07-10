def minion_game(string):
    # your code goes here
    vowels = ['A','E','I','O','U']
    sc = 0
    kc = 0
   
    for i in range(len(s)):
        if s[i] in vowels:
            kc += (len(s)-i)
            # print(len(s)-i)
        else:
            print(len(s)-i)
            sc += (len(s)-i)

    if kc > sc:
        print("Kevin", kc)
    elif kc < sc:
        print("Stuart", sc)
    else:
        print("Draw")
        
if __name__ == '__main__':
    s = input()
    minion_game(s)