def frobenius(A):
    sum = 0
    for i in range(len(A)):
        for j in range(len(A[i])):
            sum += abs(A[i][j])

    return sum**(1/2)

A = [[1,2,1,4],[2,4,7,8],[6,3,6,5],[9,8,7,6]]

print(frobenius(A))