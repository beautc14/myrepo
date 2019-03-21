a = int(input('enter number:'))
b = int(input('enter number:'))
c = int(input('enter number:'))

'''if a>b:
        if a>c:
            print(a)
        else:
            print(c)
else:
        if b>c:
            print(b)
        else:
            print(c)'''

largest = 0
if a>largest:
    largest = a
if b>largest:
    largest = b
if c>largest:
    largest = c
print (largest)
