'''
	https://www.codechef.com/problems/MAXDIFF
'''

for _ in range(int(input())):
    n,k = map(int,input().split())
    l = sorted(list(map(int,input().split())))
    print(max(abs(sum(l[:k])-sum(l[k:])),abs(sum(l[:n-k])-sum(l[n-k:]))))
