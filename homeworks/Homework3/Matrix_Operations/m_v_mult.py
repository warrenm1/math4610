def m_v_mult(A,x):
    b = []
    for i in range(len(x)):
        b.append(0)

    for i in range(len(A)):
        for j in range(len(x)):
            b[j] = b[j] + (A[i][j] * x[j])

    return b

A = [[1,2,3],[4,5,6],[7,8,9]]
x = [10,11,12]

b = m_v_mult(A,x)

print(b)