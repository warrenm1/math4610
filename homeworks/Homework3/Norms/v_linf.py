def v_linf_norm(v):
    max = v[0]

    for i in range(len(v)):
        if max < abs(v[i]):
            max = abs(v[i])

    return max

v = [1,2,3,4,5,6,7,8,-23]

print(v_linf_norm(v))