'''
    https://practice.geeksforgeeks.org/problems/four-elements/0
'''

#code
def crazyfunc(arr,val,depth):
    ans = 0
    if(depth>4):
        return 0
    if(val==0 and depth==4):
        return 1
    if(len(arr) == 0 or val <0):
        return 0

    for e in arr:
        newarr = arr[:arr.index(e)] + arr[arr.index(e)+1:]
        ans = ans or crazyfunc(newarr,val-e,depth+1)
    return ans

t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    val = int(input())
    print(crazyfunc(arr,val,0))
