def v_scal_mult(v,s):
    for i in range(len(v)):
        v[i] = v[i] * s

    return v

v1 = [10,20,30]
s = 12

v = v_scal_mult(v1,s)

print(v)