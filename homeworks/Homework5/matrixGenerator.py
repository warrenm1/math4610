import random

def matrixGen(n):
    U = [[0.0]*n for _ in range(n)]

    for row in range(n):
        diag = 0
        for col in range(row,n):
            if row == col:
                U[row][col] = random.uniform(1,100)
                diag = U[row][col]
            else:
                U[row][col] = random.uniform(1,diag/n)

    A = m_mult(m_trans(U),U)
    return A

def vectorGen(A):
    x = [1.0 for _ in range(len(A))]

    b = m_v_mult(A,x)

    return b

def m_v_mult(A,x):
    b = []
    for i in range(len(x)):
        b.append(0)

    for i in range(len(A)):
        for j in range(len(x)):
            b[j] = b[j] + (A[i][j] * x[j])

    return b

def m_trans(A):
    At = []

    for i in range(len(A)):
        temp = []
        for j in range(len(A[i])):
            temp.append(A[j][i])

        At.append(temp)

    return At

def m_mult(A,B):
    C = []

    for row in range(len(A)):
        temp = []
        for col in range(len(B[row])):
            temp.append(v_dot(A[row],[i[col] for i in B]))

        C.append(temp)

    return C

def v_dot(v,u):
    prod = 0

    for i in range(len(v)):
        prod += v[i]*u[i]

    return prod