'''
    https://www.codechef.com/OCT19B/problems/S10E
    October 2019 Long Chanllenge Problem 1
    Problem Code S10E
'''


def checkGood(arr, x):
    t = min(arr)
    if x < t:
        return True
    return False
try:
    T = int(input())
except:
    pass
while T > 0:
    N = int(input())
    arr = list(map(int, input().split()))
    count = 1
    fiveNums = [arr[0]]
    for i in range(1, N):
        x = checkGood(fiveNums, arr[i])
        if x:
            count = count + 1
        fiveNums.append(arr[i])
        if len(fiveNums) > 5:
            del fiveNums[0]
    print(count)
    T = T-1
     
     
