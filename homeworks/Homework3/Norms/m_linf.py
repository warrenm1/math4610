def m_linf_norm(A):
    max = 0
    for i in range(len(A)):
        sum = 0
        for j in range(len(A[i])):
            sum += abs(A[i][j])

        if sum > max:
            max = sum

    return max

A = [[1,2,1,4],[2,4,7,8],[6,3,6,5],[9,8,7,6]]

print(m_linf_norm(A))