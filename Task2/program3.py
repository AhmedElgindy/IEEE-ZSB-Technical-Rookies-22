import random
n = random.randint(100,999)
con = True
counter = 0
main = [int(x) for x in str(n)]  # insert number into array
while con:
    hit = 0
    miss = 0
    temp = []
    val = int(input("Enter your value between 100 to 1000: "))
    temp = [int(x) for x in str(val)]
    for i in range(len(main)):
        if(main[i] == temp[i]):
            hit +=1
            temp[i] = '*'
    for i in range(len(main)):
        for z in range(len(temp)):
            if main[i] == temp[z]:
                if ( i == z ):
                    hit += 1
                    temp[z]='*' 
                    break #value to make sure to not duplcatie the number of miss or hits
                else:
                    miss += 1
                    temp[z]='*'
                    break
    print(miss, "miss", hit, "hit")
    counter += 1
    if hit == 3:
        print("congratlation you found the number after", counter, "attempts")
        con = False
