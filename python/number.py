message = input('enter message:')
character = input('enter character:')
count = 0

for char in message:
    if char == character:
        count = count+1

if count==0:
    print ("character",character,"not in message")
else:
    print ("character",character,"counts :",count)
