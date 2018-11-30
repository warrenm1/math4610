import sys

def LU_factor(A):
    n = len(A)

    for k in range(n-1):
        maxi = k
        max = 0
        for q in range(k,n):
            if A[q][k] > max:
                max, maxi = A[q][k],q
        if max == 0:
            print("Not a Unique Solution")
            sys.exit()
        if maxi != k:
            for r in range(k,n):
                A[maxi][r],A[k][r] = A[k][r], A[maxi][r]

        for i in range(k+1,n):
            factor = A[i][k] / A[k][k]
            for j in range(k,n):
                A[i][j] = A[i][j] - factor * A[k][j]
            A[i][k] = factor

    return A


A = [[0.02,0.01,0,0],[1,2,1,0],[0,1,2,1],[0,0,100,200]]

U = LU_factor(A)

for i in range(len(U)):
    print(U[i])
