mydict = {}
if __name__ == "__main__":
    for _ in range(int(raw_input())):
        name = raw_input()
        score = float(raw_input())
        mydict[name] = score
    temp = list(mydict.values())[0]
    for i in mydict:
        if temp > mydict[i]:
            temp = mydict[i]
    for key, value in mydict.items():
        if value == temp:
            del mydict[key]
    temp = list(mydict.values())[0]
    for i in mydict:
        if temp > mydict[i]:
            temp = mydict[i]
    list1 = []
    for i in mydict:
        if temp == mydict[i]:
            list1.append(i)
    list1.sort()
    for i in list1:
        print(i)
