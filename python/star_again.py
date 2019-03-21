def print_star (num):
    for i in range(num,0,-1):
        for j in range(i):
            print ("*",end="")
        print()

inp = int(input("개수를 입력하세요:"))
print_star(inp)
