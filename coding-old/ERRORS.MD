# Codechef

- SIGTSTP (C++)
	-You should first see that anything more than 20! cannot be stored in any data type of C++/C . You should either switch to JAVA/python for this Q, or learn how to store huge numbers in C/C++. And then, declare the array of size 101 instead of 100. Due to 0 based indexing, valid memory locations are [0,1,2…99] not [1,2,3…100]. So for n=100 your code can give error.
- SIGSEGV (C++)
	-This is an error caused by an invalid memory reference or segmentation fault. The most common causes are accessing an array element out of bounds, or using too much memory.
	- Some things for you to try:
	Make sure you aren’t using variables that haven’t been initialised. These may be set to 0 on your computer, but aren’t guaranteed to be on the judge.
	Check every single occurrence of accessing an array element and see if it could possibly be out of bounds.
	Make sure you aren’t declaring too much memory. 64 MB is guaranteed, but having an array of size [10000][10000] will never work.
	Make sure you aren’t declaring too much stack memory. Any large arrays should be declared globally, outside of any functions - putting an array of 100000 ints inside a function probably won’t work.
- NZEC (Python)
	- use try-except block where error occours