import sys

def m_mult(A,B):
    if len(A[0]) != len(B):
        print("Make sure the matrices are of size: A = mXn, B = nXp")
        sys.exit(1)

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

A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[4,5,6],[7,8,9],[1,2,3]]

C = m_mult(A,B)

for i in range(len(C)):
    print(C[i])