'''
Amit Kumar
HackerEarth Internship Test
11 October 2018, @11:45PM

Maximize the palindromic substrings
You are given a string S of length SL and a palindromic string P of length PL. You are allowed to rearrange the characters of S.
Write a program to find the maximum number of times that the string P can distinctly occur as a substring in the string S.

Input format
    First line: Two space-separated integers SL and PL
    Second line: S
    Third line: P

Output format
    Print the maximum number of times that the string P can distinctly occur as a substring in the string S.

Constraints

Sample Input
    10 4
    abcbbcabcc
    bccb

Sample Output
    2

Explanation
    In given case, String S="abcbbcabcc" and P="bccb". Now after rearranging, S=bccbaabccb. Maximum number of palindromic strings are 2, first starting from index=0 and second from index=6.
'''

inp = input().split()
SL = int(inp[0])
PL = int(inp[1])

S = input()
P = input()

#convert the strings to list of characters
S = list(S)
P = list(P)

count = 0
flag = True
while(flag):
    for i in range(PL):
        if P[i] in S:
            S.remove(P[i])
        else:
            flag = False
            break
    print(S)
    count = count + 1
print(count-1)
