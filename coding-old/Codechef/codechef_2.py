a, b = input().split(' ')
a = int(a)
b = int(b)

diff = a-b
str_diff = str(diff)
#print("{}, {}".format(str_diff, type(str_diff)))
#print(len(str(diff)))

if len(str_diff) == 1:
    if diff == 0 or diff == 9:
        print(4)
    else:
        print(diff+1)
else:
    if str_diff[0] == '9':
        # temp = (diff/10)%10 #second digit of the number
        # temp2 = diff - (temp*10)
        # temp = 1
        # temp3 = diff + (temp*10)
        temp_str = '1' + str_diff[1:]
        print(int(temp_str))
    else:
        # temp = (diff/10)%10 #second digit of the number
        # temp2 = diff - (temp*10)
        # temp = temp + 1
        # temp3 = diff + (temp*10)
        x = int(str_diff[0])
        x = x+1
        temp_str = str(x) + str_diff[1:]
        print(int(temp_str))



'''
    Problem: Ciel and A-B Problem
    URL: https://www.codechef.com/problems/CIELAB

    In Ciel's restaurant, a waiter is training. Since the waiter isn't good at arithmetic,
    sometimes he gives guests wrong change.
    Ciel gives him a simple problem. What is A-B (A minus B) ?
    Surprisingly, his answer is wrong. To be more precise, his answer has exactly one wrong digit.
    Can you imagine this? Can you make the same mistake in this problem?

    Input
    An input contains 2 integers A and B.

    Output
    Print a wrong answer of A-B. Your answer must be a positive integer containing the same number of
    digits as the correct answer, and exactly one digit must differ from the correct answer. Leading zeros are not allowed.
    If there are multiple answers satisfying the above conditions, anyone will do.

    Constraints
    1 ≤ B < A ≤ 10000

    Sample Input
    5858 1234

    Sample Output
    1624

    Output details
    The correct answer of 5858-1234 is 4624. So, for instance, 2624, 4324, 4623, 4604 and 4629 will be accepted,
    but 0624, 624, 5858, 4624 and 04624 will be rejected.

'''
