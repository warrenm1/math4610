def m_scal_mult(A,s):
    for i in range(len(A)):
        for j in range(len(A[i])):
            A[i][j] = A[i][j] * s

    return A

A = [[1,2,3],[4,5,6],[7,8,9]]
s = 24

C = m_scal_mult(A,s)

for i in range(len(C)):
    print(C[i])