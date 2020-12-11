'''
	URL: https://practice.geeksforgeeks.org/problems/remove-common-characters-and-concatenate/0/?ref=self
	Problem Name: Remove common characters and concatenate
	Difficulty: Basic

	Two strings are given. Modify 1st string such that all the common characters of the 2nd strings,
	have to be removed and the uncommon characters of the 2nd string have to be concatenated with uncommon characters of the 1st string.

	Note: If the modified string is empty then print '-1'.

	Input:
	The first line consists of an integer T i.e number of test cases.
	The first line of each test case consists of a string s1.The next line consists of a string s2.

	Output:
	Print the required output.

	Constraints:
	1<=T<=200
	1<=|Length of Strings|<=100

	Example:
		Input:
		2
		aacdb
		gafd
		abcs
		cxzca

		Output:
		cbgf
		bsxz
'''

T = int(input())
for i in range(T):
	str1 = input()
	str2 = input()

	output = []
	for i in range(len(str1)):
		if str1[i] in list(str2):
			continue
		else:
			output.append(str1[i])
	for i in range(len(str2)):
		if str2[i] in list(str1):
			continue
		else:
			output.append(str2[i])

	if len(output) == 0:
		print('-1')
	else:
		print(''.join(output))
		print('\n')
