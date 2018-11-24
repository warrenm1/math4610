def relErr_v_l1(v,u):
    return rel_error(v_l1_norm(v),v_l1_norm(u))

def v_l1_norm(a):
    sum = 0

    for i in range(len(a)):
        sum += abs(a[i])

    return sum

def rel_error(x,y):
    return abs(x-y)/x


v = [1,2,3,4,5,6,7,8,-23]
u = [1.0003,2.001,3.000001,3.999999999,5.00000000000126,6,7.0000000000006959,8.0,-23.00000009]

print(relErr_v_l1(v,u))