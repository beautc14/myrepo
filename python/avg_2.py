def average (*nums) :
    total = 0
    for i in nums:
        total = i + total
    return total/len(nums)

print(average(1,2,3,4,5))
