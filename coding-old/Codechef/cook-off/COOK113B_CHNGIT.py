t, n = 0, 0
t = int(input())
while t > 0:
    t = t-1
    n = int(input())
    nums = list(map(int, input().split(' ')))
    my_dict = {}
    for i in nums:
        if i in my_dict:
            my_dict[i] += 1
        else:
            my_dict[i] = 1
    max = 0
    for vals in my_dict.values():
        if vals > max:
            max = vals
    print(n-max)