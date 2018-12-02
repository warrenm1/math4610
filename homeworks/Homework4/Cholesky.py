from math import sqrt

#Adapted from https://rosettacode.org/wiki/Cholesky_decomposition#Python
def cholesky(A):
    L = [[0.0] * len(A) for _ in range(len(A))]
    for i in range(len(A)):
        for j in range(i+1):
            s = sum(L[i][k] * L[j][k] for k in range(j))
            if i == j:
                L[i][j] = sqrt(A[i][i] - s)
            else:
                 L[i][j] = (1.0 / L[j][j] * (A[i][j] - s))
    return L

A = [[1.06,0.41,1.84,-0.85,0.34],[0.41,6.2,1.86,2.88,-0.08],[1.84,1.68,7.01,-0.28,-0.36],[-0.85,2.88,-0.28,2.56,-0.7],[0.34,-0.08,-0.36,-0.7,1.94]]

L = cholesky(A)

for i in range(len(L)):
    print(L[i])