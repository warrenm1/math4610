def LU_factor(A,b):
    n = len(b)

    for k in range(n-1):
        maxi = k
        max = 0
        for q in range(k,n):
            if A[q][k] > max:
                max, maxi = A[q][k],q
        if maxi != k:
            for r in range(k,n):
                A[maxi][r],A[k][r] = A[k][r], A[maxi][r]
            b[maxi],b[k] = b[k],b[maxi]

        for i in range(k+1,n):
            factor = A[i][k] / A[k][k]
            for j in range(k,n):
                A[i][j] = A[i][j] - factor * A[k][j]
            b[i] = b[i] - factor * b[k]
            A[i][k] = factor

    return back_sub(A,forward_sub(A,b))


def back_sub(A,b):
    #initialize x as an array of 0s
    x = [0 for i in range(len(b))]

    #Init X_n
    n = len(b)-1
    x[n] = b[n]/A[n][n]

    #Back Substitution logic
    for k in range(n-1,-1,-1):
        ax = 0
        for i in range(n,k,-1):
            ax += x[i]*A[k][i]
        x[k] = (b[k] - ax) / A[k][k]

    return x

def forward_sub(A,b):
    #initialize x as an array of 0s
    x = [0 for i in range(len(b))]

    #Init X_0
    x[0] = b[0]

    #Forward Substitution logic
    for i in range(1,len(A)):
        ax = 0
        for j in range(i):
            ax += x[j]*A[i][j]
        x[i] = b[i] - ax

    return x



A = [[0.02,0.01,0,0],[1,2,1,0],[0,1,2,1],[0,0,100,200]]
b = [0.02,1,4,800]

x = LU_factor(A,b)

print(x)