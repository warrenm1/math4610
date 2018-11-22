def v_dot(v,u):
    prod = 0

    for i in range(len(v)):
        prod += v[i]*u[i]

    return prod

v = [10,20,30]
u = [10,10,10,10]

product = v_dot(v,u)

print(product)