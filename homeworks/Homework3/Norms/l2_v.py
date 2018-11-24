def v_l2_norm(v):
    sum = 0

    for i in range(len(v)):
        sum += (v[i])**2

    return sum**(1/2)

v = [1,2,3,4,5,6,7,8,-23]

print(v_l2_norm(v))