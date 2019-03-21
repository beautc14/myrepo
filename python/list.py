num = int(input("list element 개수 입력:"))
newlist = []
templist = [0]

for i in range(num):
    print(i,"번째")
    t = input(" 추가할 element 입력:")
    templist = [t]
    newlist = newlist + templist

print(newlist)
