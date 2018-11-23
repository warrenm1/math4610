#taken from https://rosettacode.org/wiki/Kronecker_product#Python
def m_kronecker(A,B):
    return [[num1 * num2 for num1 in elem1 for num2 in B[row]] for elem1 in A for row in range(len(B))]

A = [[1,2,1,4],[2,5,7,4],[7,4,2,7],[4,6,7,7]]
B = [[1,1,4,3],[6,4,7,6],[4,3,4,3],[7,7,7,7]]

for row in m_kronecker(A,B):
    print(row)