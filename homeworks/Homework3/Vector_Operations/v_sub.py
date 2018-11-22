def toSameSize(v,u):
    if len(u) > len(v):
        toSameSize(u,v)

    while len(v) - len(u) > 0:
        u.append(0)

def v_sub(v,u):
    w = []

    if len(v) - len(u) != 0:
        toSameSize(v,u)

    for i in range(len(v)):
        w.append(v[i] - u[i])

    return w

v = [10,20,30]
u = [10,10,10,10]

v = v_sub(v,u)

print(v)