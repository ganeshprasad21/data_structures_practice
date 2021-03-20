def fastPow(base,exp):
    if (exp == 0):
        return 1
    if (exp %2 == 0):
        return fastPow(base,exp/2) * fastPow(base,exp/2)
    return base* (fastPow(base,exp-1))
print(fastPow(3,3))