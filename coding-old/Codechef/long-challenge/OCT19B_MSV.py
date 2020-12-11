import sys

T = int(input())
while T > 0:
    N = int(input())
    arr = list(map(int, input().split()))
    count = 0
    greatest = -sys.maxsize-1
    for i in range(1, N):
        count = 0
        for j in range(0, i):
            if arr[i] == 0:
                continue
            if arr[j]%arr[i] == 0:
                count = count + 1

        if count > greatest:
            greatest = count
    print(greatest)
