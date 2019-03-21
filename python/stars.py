while True:
    num = int(input("반복횟수를 입력하세요:"))
    if num<=0:
        print ("0보다 작은 수는 입력할 수 없습니다.")
    else:
        break

for i in range(num):
    for j in range(i+1):
        print('*', end="")
    print()
