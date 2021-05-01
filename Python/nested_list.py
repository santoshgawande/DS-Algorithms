class minmax:
    def __init__(self,data=None):
        self.min = data
        self.sec = data
    
    
if __name__ == '__main__':
    stlist = []
    st = []
    m = minmax()
    for _ in range(int(input())):
        name = input()
        score = float(input())
        st.append(name)
        st.append(score)
        stlist.append(st)
        st = []
    
    
    for st in stlist:
        if m.min == None:
            m.min = st
            m.sec = st
        else:
            if float(m.min[1])> float(st[1]):
                m.sec = m.min
                m.min = st
            elif float(m.min[1]) == float(st[1]):
                m.sec = m.min
                m.min = st
            else:
                if float(m.sec[1]) >st[1]:
                    m.sec = st


    # print(m.min[0])
    # print(m.sec[0])

    if float(m.min[1]) == float(m.sec[1]):
        if int(m.min[0]) > int(m.sec[0]):
            print("k:",m.sec[0])
            print(m.min[0])
        else:
            print("t:",m.min[0])
            print(m.sec[0])
    else:
        print("s",m.sec[0])

