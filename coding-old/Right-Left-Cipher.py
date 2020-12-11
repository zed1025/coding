#https://codeforces.com/contest/1087/problem/A

t = list(input())

even = 1
odd = 1

l = []

if len(t) % 2 == 0:
    for i in range(len(t)):
        if even == 1:
            l.append(t[-1])
            even = 0
            del t[-1]
        else:
            l.append(t[0])
            even = 1
            del t[0]
    l = l[::-1]
    print(''.join(l))
else:
    for i in range(len(t)):
        if odd == 1:
            l.append(t[0])
            odd = 0
            del t[0]
        else:
            l.append(t[-1])
            odd = 1
            del t[-1]
    l = l[::-1]
    print(''.join(l))
