#Time limit exceeded


t = int(input())
for i in range(t):
    g = int(input())    #G, denoting the number of games played by Elephant
    for i in range(g):
        I, N, Q = input().split(' ')
        I = int(I)  #I denotes the initial state of the coins
        N = int(N)  #N denotes the number of coins and rounds
        Q = int(Q)  #Q is either 1(Head) or 2(Tails)

        coins = []
        if I == 1:
            for i in range(N):
                coins.append('H')
        else:
            for i in range(N):
                coins.append('T')
        print("Initial list: ", coins)

        #main loop
        for i in range(N):
            for j in range(i+1):
                if coins[j] == 'H':
                    coins[j] = 'T'
                elif coins[j] == 'T':
                    coins[j] = 'H'
                else:
                    continue
            print(coins)


        print("Final list: ", coins)

        if Q == 1:  #guess number of heads
            print(coins.count('H'))
        else:
            print(coins.count('T'))
