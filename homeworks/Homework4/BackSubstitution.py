import sys

def back_sub(A,b):
    #Check if determinant is 0
    #if m_det(A) == 0:
    #    print("Please use a matrix with a determinant that is not 0")
    #    sys.exit()

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


#def m_det(A):
#    if len(A) != len(A[0]):
#        return 0
#    if len(A) == 1:
#        return A[0][0]
#    if len(A) == 2:
#        return A[0][0]*A[1][1] - A[1][0]*A[0][1]
#    det = 0
#    for j in range(len(A)):
#        det += ((-1)**j) * A[0][j] * m_det(m_reduced(A,0,j))
#    return det

#def m_reduced(A,i,j):
#    return [row[:j] + row[j+1:] for row in (A[:i] + A[i+1:])]



#A = [[1, 2, 1, 0], [0.0, 1.0, 2.0, 1.0], [0.0, 0.0, 100.0, 200.0], [0.0, 0.0, 0.0, -0.04999999999999999]]
#b = [1, 3.98, 800.1194, -0.52004776]

#print(back_sub(A,b))