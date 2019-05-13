

def fib1(n):
    if n <= 2:
        return 1
    else:
        return fib1(n-1)+fib1(n-2)


def fib2(n):
    a = 1
    b = 1
    c = a + b
    for i in range(n):
        a =b
        b = c
        c = a + b
    return a

def fib3(n,a,b,c):
    if n==0:
        return a
    else:
        return fib3(n-1,b,c,b+c)

ftable = {}
def fib4(n):
    if n <= 2:
        return 1
    elif n in ftable.keys():
        return ftable[n]
    else:
        result = fib4(n-1)+fib4(n-2)
        ftable[n]=result
        return result
    
#for i in range(1,100):
#    print(fib4(i))

import random


values = [60,100,120]
weights = [10,20,30]
n = len(values)
W=50

values = [random.randrange(10,100) for x in range(800)]
weights = [random.randrange(10,100) for x in range(800)]
n = len(values)
W=50

def knapsack(W,wts,vals,n):
    if n==0 or W==0:
        return 0

    if wts[n-1] > W:
        return knapsack(W,wts,vals,n-1)
    else:
        v1 = vals[n-1] + knapsack(W-wts[n-1],wts,vals,n-1)
        v2 = knapsack(W,wts,vals,n-1)
        m = max(v1,v2)
        return m

def mknapsack(W,wts,vals,n,table):
    k = str(W)+','+str(n)
    if k in table:
        return table[k]
    
    if n==0 or W==0:
        return 0

    if wts[n-1] > W:
        value=mknapsack(W,wts,vals,n-1,table)
        table[k]=value
        return value
    else:
        v1 = vals[n-1] + mknapsack(W-wts[n-1],wts,vals,n-1,table)
        v2 = mknapsack(W,wts,vals,n-1,table)
        m = max(v1,v2)
        table[k]=m
        return m

ans = knapsack(W,weights,values,n)
print(ans)

ans = mknapsack(W,weights,values,n,{})
print(ans)

