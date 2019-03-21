def check (array):
    if array[0] != array[1]-1:
        print("1")
        return -1
    if (array[0]%2==0) or (array[1]%2==1):
        print("2")
        return -1
    if ((1>array[0] or array[0]>400) or (1>array[1] or array[1]<=400)):
        print("3")
        return -1

pobi = [97, 98]
check (pobi)
