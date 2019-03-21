국어 = int(input("국어 점수를 입력하세요:"))
수학 = int(input("수학 점수를 입력하세요:"))
영어 = int(input("영어 점수를 입력하세요:"))
avg = (국어+수학+영어)/3
print ("국어:",국어, "수학:",수학, "영어", 영어, "평균", avg)
if avg>60 :
    if (국어 or 수학 or 영어) <50:
        print("과락")
    else:
        print("합격")
else:
    print ("불합격")
