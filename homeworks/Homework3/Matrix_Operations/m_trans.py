def m_trans(A):
    At = []

    for i in range(len(A)):
        temp = []
        for j in range(len(A[i])):
            temp.append(A[j][i])

        At.append(temp)

    return At

A = [[1,2,3],[4,5,6],[7,8,9]]

C = m_trans(A)

for i in range(len(C)):
    print(C[i])