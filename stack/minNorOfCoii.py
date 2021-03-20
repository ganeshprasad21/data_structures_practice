import sys
value = int(input("enter value"))
coins = [int(y) for y in input("enter the array :").strip().split(" ")]
minNorOfCoins = [-1 for i in range(value)]
minNorOfCoins[0] = 0
maxint = sys.maxsize
for countEle in coins:
    minNorOfCoins.append(int(-1))
def minCnt(amount,coins):
    if (amount == 0):
        return 0
    ans = sys.maxsize
    for coinValue in coins:
        if(coinValue <= amount):
            if(minNorOfCoins[coinValue] != -1):
                partialAnswer = minNorOfCoins[coinValue]
            partialAnswer = minCnt(amount-coinValue,coins)
        if(partialAnswer is not maxint  and partialAnswer+1 < ans):
            ans = partialAnswer + 1
    minNorOfCoins[amount] = ans
    return ans
print(minCnt(value,coins))
print(minNorOfCoins)