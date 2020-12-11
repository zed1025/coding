# Python program to print prime factors

import math

# A function to print all prime factors of
# a given number n
def primeFactors(n):
    count = 0
    l = []
    # Print the number of two's that divide n
    while n % 2 == 0:
        #print 2,
        if 2 not in l:
            l.append(2)
        #count = count + 1
        n = n / 2

    # n must be odd at this point
    # so a skip of 2 ( i = i + 2) can be used
    for i in range(3,int(math.sqrt(n))+1,2):

        # while i divides n , print i ad divide n
        while n % i== 0:
            #print i,
            if i not in l:
                l.append(i)
            n = n / i

    # Condition if n is a prime
    # number greater than 2
    if n > 2:
        #print n
        l.append(n)

    print(len(l))

# Driver Program to test above function

n = 10
primeFactors(n)
