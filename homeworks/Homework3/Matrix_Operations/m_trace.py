def m_trace(A):
    trace = 0

    for i in range(len(A)):
        for j in range(len(A[i])):
            if i == j:
                trace = trace + A[i][j]

    return trace

A = [[1,2,3],[4,5,6],[7,8,9]]

trace = m_trace(A)

print(trace)