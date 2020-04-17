print("Coin Denominations problem:\nYou provide the coins available and the amount of money. The program then calculates the minimum number of coins needed to make up exactly that amount of money.")
print("Example input: \nAmount of money: 7\nCoins: 1 3 4 5")
print("Example output: 2\n")
x=int(input("Amount of money: "))
coins=list(map(int,input("Coins: ").split()))
d={x:True}
for a in range(0,x):
    d1={}
    if 0 in d:
        print(a)
        break
    for each in d:
        for coin in coins:
            if each-coin>=0:
                d1[each-coin]=True
    d=d1
    print(d)
    
