def quickSort(A,p,r):
    if p > r:
        return
    x = A[r]
    i = partition(A,p,r,x)
    quickSort(A,p,i-1)
    quickSort(A,i,r)

def partition(A,p,r,x):
    i = p - 1
    while(p <= r):
        while(A[p] < x):
            p = p +1
        while(A[r] > x):
            r = r - 1
        if(p <= r):
            A[i+1],A[r] = A[r],A[i+1]
            p = p + 1
            r + p - 1
    return p

A = [10, 7, 8, 9, 1, 5] 
n = len(A) 
quickSort(A,0,n-1) 
for i in range(n):
    print (A[i])