def quickSort(A,p,r): 
    if p < r: 
        q = partition(A,p,r) 
        quickSort(A, p, q-1) 
        quickSort(A, q+1, r) 

def partition(A,p,r): 
    x = A[r]             
    i = p - 1        
    
    for j in range(p , r):   
        if   A[j] <= x:         #En esta linea se cambia el signo '<' por '>' para asi cambiar el ordenamiento - a +, + a -
            i = i + 1 
            A[i],A[j] = A[j],A[i]
  
    A[i+1],A[r] = A[r],A[i+1] 
    return ( i + 1 ) 

A = [2, 8, 7, 1, 3, 5, 6, 4] 
n = len(A) 
quickSort(A,0,n-1) 
for i in range(n):
    print (A[i])