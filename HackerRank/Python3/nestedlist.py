   
if __name__ == '__main__':
    stlist = []
    marks = set()
    lower_name = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        stlist.append([name, score])
        marks.add(score)
    # Increasing order
    sec = sorted(marks)[1]
    # print(sec)
    for name, score in stlist:
        if score == sec :
            lower_name.append(name)
                    
    for name in sorted(lower_name):
        print(name)      



# Sample Input 0

# 5
# Harry
# 37.21
# Berry
# 37.21
# Tina
# 37.2
# Akriti
# 41
# Harsh
# 39

# Sample Output 0

# Berry
# Harry

