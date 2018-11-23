def m_det(A):
    if len(A) != len(A[0]):
        return 0
    if len(A) == 1:
        return A[0][0]
    if len(A) == 2:
        return A[0][0]*A[1][1] - A[1][0]*A[0][1]

    det = 0

    for j in range(len(A)):
        det += ((-1)**j) * A[0][j] * m_det(m_reduced(A,0,j))

    return det

def m_reduced(A,i,j):
    return [row[:j] + row[j+1:] for row in (A[:i] + A[i+1:])]

A = [[1,2,3,4],[6,8,2,7],[9,5,6,1],[3,9,8,12]]

print(m_det(A))