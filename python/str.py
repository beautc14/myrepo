def solution(word):
    answer = ''
    temp = ''
    for i in word :
        if 65<=ord(i)<=90:
            temp = chr(155-ord(i))
            answer+temp
            print(temp,"ans",answer)
        elif 97<=ord(i)<=122:
            temp = chr(219-ord(i))
            answer+temp
            print(temp, answer)
        else:
            temp = i
            answer+temp
            print(temp, answer)
        
    return answer

word = 'I love you'
solution(word)
