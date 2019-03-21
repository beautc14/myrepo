num = int(input("enter number:"))
while num<=0:
    num = int(input("enter number:"))

count = 0
for i in range (0,num):
    i = int(input("enter number for avg:"))
    count = count+i
print ("avg:", count/num)
    
