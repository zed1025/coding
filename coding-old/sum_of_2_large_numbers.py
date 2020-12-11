'''
    URL: https://practice.geeksforgeeks.org/problems/sum-of-numbers-or-number/0
    Problem Name: Sum of two large numbers
    Difficulty: Basic

    Given two non-negative numbers X and Y. The task is calculate the sum of X and Y.

    Input:
    The first line of input contains an integer T denoting the number of test cases.
    Then T test cases follow. Each test case contains two numbers X and Y.

    Output:
    For each test case, if the number of digits in sum (X+Y) are equal to the number of digits in X,
    then print sum, else print X.

    Constraints:
    1<=T<=500
    1<=|Number length |<=100

    Example:
    Input:
    2
    25 23
    3 5

    Output:
    48
    8
'''


T = int(input())
x, y = 0, 0
for i in range(T):
    x, y = input().split(' ')
    sum = int(x)+int(y)
    if len(str(sum)) == len(x):
        print(sum)
    else:
        print(x)
