name = input("이름을 입력하세요:")

while name[0:1] != ('김' or '이' or '박') :
    print ("wrong sirname!")
    name = input ("Name again:")

print (name)
