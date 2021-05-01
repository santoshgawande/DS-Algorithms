# Print All unique digit numbers between L and R
# Ex :  L = 10 R = 30
# Output : 10, 12, 13, 14, 15, 16, 17, 18, 19, 20
# Explainaton :  11 has two 1 digit therefore 11 is not unique number
# Expected Time Complexity: O(N)
# Expected Auxiliary Space: O(1)

def uniqueNumbers(L,R):
    m = []
    for n in range(L,R):
        mq = str(n)
        print(mq[0])
        if mq[0] != mq[1]:
            m.append(n)
    return m

d = uniqueNumbers(10,30)
print(d)