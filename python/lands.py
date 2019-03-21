def findLands (lands, point) :
    ans = True
    for i in range(len(lands)) :
        
        temp = False
        print("temp",i,":",temp)
        if point[0]>lands[i][2] :
            temp = True
        if point[1]>lands[i][3] :
            temp = True
        if point[2]<lands[i][0]:
            temp = True
        if point[3]<lands[i][1]:
            temp = True
        ans = ans and temp
    print("lands:",ans)
    return ans

def findWells (wells, point) :
   
    ans = False
    
    for i in range (len(wells)) :
        if ((point[0]<wells[i][2]) or (point[2]>wells[i][0])) and ((point[3]>wells[i][1]) or (point[1]<wells[i][3])):
            ans = True
        print("ans",i,":",ans)
    print("wells:",ans)
    return ans

def solution(lands, wells, point):
    answer = True
    lands_ans = findLands(lands, point)
    wells_ans = findWells(wells, point)
    answer = lands_ans and wells_ans
    return answer

lands = [[0,0,20,10],[10,20,20,40],[30,0,50,20]]
wells = [[20,40,30,50],[30,20,50,30]]
point = [20,30,30,40]

solution(lands, wells, point)
