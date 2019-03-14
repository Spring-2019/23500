import random

def qsort(l):
    if len(l)<=1:
        return l
    pivot = l[0]
    l=l[1:]
    lower = [x for x in l if x < pivot]
    upper = [x for x in l if x > pivot]
    l = qsort(lower) + [pivot] + qsort(upper)

    return l

l=[]

for i in range(20):
    l.append(random.randrange(0,100))



