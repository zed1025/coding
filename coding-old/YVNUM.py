
t = int(input())
X = pow(10, 9) + 7
for i in range(t):
    n = list(input())
    l = []
    l.append(''.join(n))
    #print(''.join(n))
    for i in range(len(n)-1):
        t = n.pop(0)
        n.append(t)
        #print(''.join(n))
        l.append(''.join(n))

    l = int(''.join(l))
    print(l%X)