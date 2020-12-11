t = int(input())    #number of test cases

for i in range(t):
    text = input().strip()
    first = []
    second = []
    if len(text) % 2 == 0:  #string contains even number of characters
        first, second = text[:len(text)//2], text[len(text)//2:] #splitting string into half
        first = list(first)
        second = list(second)
        first.sort()
        second.sort()
        if first == second:
            print('YES')
        else:
            print('NO')
        # counts_first = char_freq(first)
        # counts_second = char_freq(second)
        # for key in counts_first.keys():
        #     if counts_first[key] == counts_second[key]:
        #         continue
        #     else:
        #         flag = True
        #         break
    else:
        first, second = text[:len(text)//2], text[len(text)//2:] #splitting string into half
        second = second[1:]
        first = list(first)
        second = list(second)
        first.sort()
        second.sort()
        if first == second:
            print('YES')
        else:
            print('NO')



# Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
# Your task is simple. Given a string, you need to tell if it is a lapindrome.
#
# Input:
# First line of input contains a single integer T, the number of test cases.
# Each test is a single line containing a string S composed of only lowercase English alphabet.
#
# Output:
# For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.
#
# Constraints:
# 1 ≤ T ≤ 100
# 2 ≤ |S| ≤ 1000, where |S| denotes the length of S
#
# Example:
# Input:
# 6
# gaga
# abcde
# rotor
# xyzxy
# abbaab
# ababc
#
#
# Output:
# YES
# NO
# YES
# YES
# NO
# NO




## function to count the frequency of each character in a string
# def char_freq(str1):
#     dict = {}
#     for i in str1:
#         keys = dict.keys()
#         if i in keys:
#             dict[i] += 1
#         else:
#             dict[i] = 1
#     return dict
