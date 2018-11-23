def m_sub(A,B):
    C = []

    for i in range(len(A)):
        temp = []
        for j in range(len(A[i])):
            temp.append(A[i][j] - B[i][j])
        C.append(temp)

    return C

A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[4,5,6],[7,8,9],[1,2,3]]

C = m_sub(A,B)

for i in range(len(C)):
    print(C[i])