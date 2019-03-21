def sums (num):
    result = 0
    for i in str(num):
        result = result + int(i)
    print("sums:",result)
    return result

def mul (num):
    result = 1
    for i in str(num):
        result = result * int(i)
    print("mul:",result)    
    return result

def compare (num1, num2):
    if num1>=num2:
        return num1
    else:
        return num2
    
def solution(pobi, crong):
    answer = 0
    
    pobi_left = compare(sums(pobi[0]), mul(pobi[0]))
    pobi_right = compare(sums(pobi[1]),mul(pobi[1]))
    pobi_ans = compare(pobi_left, pobi_right)
    crong_left = compare(sums(crong[0]),mul(crong[0]))
    crong_right = compare(sums(crong[0]),mul(crong[0]))
    crong_ans = compare(crong_left, crong_right)
    
    if pobi_ans>crong_ans:
        answer = 1
    elif crong_ans>pobi_ans:
        answer = 2
    elif pobi_ans==crong_ans:
        answer = 0
        
    return answer


pobi = [97,98]
crong = [197, 198]
solution (pobi, crong)
