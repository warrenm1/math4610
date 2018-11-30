def gauss_elim_nxm(A, b):
    n = len(A)
    m = len(A[0])

    if n > m:
        diff = n-m
        for i in range(len(A)):
            for j in range(diff):
                A[i].append(0.00000000000001)
        m = len(A[0])

    if m > n:
        diff = m-n
        for i in range(len(A)):
            temp = [0.00000000000001 for j in range(len(A[0]))]
        for j in range(diff):
            A.append(temp)
            b.append(0.00000000000001)
        n = len(A)

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

    return A,b


A = [[0.02,0.01,0,0,7],[1,2,1,0,2],[0,1,2,1,8],[0,0,100,200,400]]
b = [0.02,1,4,800]

A,b = gauss_elim_nxm(A,b)

for i in range(len(A)):
    print(A[i])

print()
print(b)