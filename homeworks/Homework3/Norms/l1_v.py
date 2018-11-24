def v_l1_norm(a):
    sum = 0

    for i in range(len(a)):
        sum += abs(a[i])

    return sum

v = [1,2,3,4,5,6,7,8,-23]

print(v_l1_norm(v))