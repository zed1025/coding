'''
    https://www.codechef.com/NOV19B/problems/HRDSEQ
    Accepted

'''



try:
    t = int(input())
except:
    pass

def util(nums):
    '''
    if the last element of the list does not occour anywhere previously, method returns -1
    else method returns, diff between the positions of the last element and the first occourence of the last element scanning from the end of the list
    '''
    t = nums[-1]
    x = len(nums)-1
    if nums.index(t) == len(nums)-1:
        return 0
    else:
        for i in range(len(nums)-2, -1, -1):
            if nums[i] == t:
                return (x-i)
            
        
    
    

while t > 0:
    t = t-1
    n = int(input())

    if n == 1:
        print('1')
        continue
    
    nums = [0, 0]
    for i in range(2, n):
        x = util(nums)
        nums.append(x)
    # print(nums)
    
    print(nums.count(nums[-1]))
