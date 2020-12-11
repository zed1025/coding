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
