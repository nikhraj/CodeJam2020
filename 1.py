#I am using logic of set in row as well as columns if length is not N then increment.

import numpy as np
l=[]
t=int(input())
for k in range(t):
    l.clear()
    r=0
    c=0
    n=int(input())
    for j in range(n):
        l+=[input().split()]
    a=np.array(l,dtype='int')
    for i in range(n):
        if len(set(a[i,:]))!=n:
            r+=1
        if len(set(a[:,i]))!=n:
            c+=1
    print('Case #{0}: {1} {2} {3}'.format(k+1,a.trace(),r,c))
