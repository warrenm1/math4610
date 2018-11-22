def v_cross(v,u):
    A = []

    for i in range(len(v)):
        temp = []
        for j in range(len(u)):
            temp.append(v[i] * u[j])

        A.append(temp)

    return A

v = [10,20,30]
u = [10,30,50,70]

B = v_cross(v,u)

for i in range(len(B)):
    print(B[i])