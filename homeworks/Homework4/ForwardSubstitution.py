def forward_sub(A,b):
    #initialize x as an array of 0s
    x = [0 for i in range(len(b))]

    #Init X_0
    x[0] = b[0]

    #Forward Substitution logic
    for i in range(1,len(A)):
        ax = 0
        for j in range(i):
            ax += x[j]*A[i][j]
        x[i] = b[i] - ax

    return x

#A = [[1,0,0,0],[0.02,1,0,0],[0,-0.03,1,0],[0,0,0.0004,1]]
#b = [1,4,800,-0.2]

#print(forward_sub(A,b))