t = int(input())
for i in range(t):
    n, m = input().split(' ')
    n = int(n)
    m = int(m)

    completed = []      #contains m jobs that are already completed
    # for i in range(m):
    #     temp = int(input())
    #     completed.append(temp)
    completed = list(map(int, input().split()))

    #print(completed)
    completed.sort()
    #print(completed)


    chef_turn = True
    chef_jobs = []
    assistant_jobs = []
    for i in range(1, n+1, 1):
        if i in completed:
            continue
        else:
            if chef_turn:
                chef_jobs.append(i)
                chef_turn = False
            else:
                assistant_jobs.append(i)
                chef_turn = True

    #print(chef_jobs)
    #print(assistant_jobs)
    for i in range(len(chef_jobs)):
        print(chef_jobs[i], end=' ')
    print()
    for i in range(len(assistant_jobs)):
        print(assistant_jobs[i], end=" ")
    print()





# Problem: Cleaning Up
# URL: https://www.codechef.com/problems/CLEANUP
#
# After a long and successful day of preparing food for the banquet, it is time to clean up.
# There is a list of n jobs to do before the kitchen can be closed for the night.
# These jobs are indexed from 1 to n.
#
# Most of the cooks have already left and only the Chef and his assistant are left to clean up.
# Thankfully, some of the cooks took care of some of the jobs before they left so only a subset of
# the n jobs remain. The Chef and his assistant divide up the remaining jobs in the following manner.
# The Chef takes the unfinished job with least index, the assistant takes the unfinished job with the
# second least index, the Chef takes the unfinished job with the third least index, etc.
# That is, if the unfinished jobs were listed in increasing order of their index then the Chef would
# take every other one starting with the first job in the list and the assistant would take every other
# one starting with the second job on in the list.
#
# The cooks logged which jobs they finished before they left. Unfortunately, these jobs were not
# recorded in any particular order. Given an unsorted list of finished jobs, you are to determine which
# jobs the Chef must complete and which jobs his assitant must complete before closing the kitchen
# for the evening.
#
# Input
# The first line contains a single integer T ≤ 50 indicating the number of test cases to follow.
# Each test case consists of two lines. The first line contains two numbers n,m satisfying 0 ≤ m ≤ n ≤ 1000.
# Here, n is the total number of jobs that must be completed before closing and m is the number of jobs
# that have already been completed. The second line contains a list of m distinct integers between 1 and n.
# These are the indices of the jobs that have already been completed. Consecutive integers are separated
# by a single space.
#
# Output
# The output for each test case consists of two lines. The first line is a list of the indices of the
# jobs assigned to the Chef. The second line is a list of the indices of the jobs assigned to his
# assistant. Both lists must appear in increasing order of indices and consecutive integers should
# be separated by a single space. If either the Chef or the assistant is not assigned any jobs, then
# their corresponding line should be blank.
#
# Example
# Input:
# 3
# 6 3
# 2 4 1
# 3 2
# 3 2
# 8 2
# 3 8
#
# Output:
# 3 6
# 5
# 1
#
# 1 4 6
# 2 5 7
