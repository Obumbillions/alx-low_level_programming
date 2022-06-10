no = 0
for no1 in range(9999, 100, -1):
    for no2 in range(a, 100, -1):
        a = no1 * no2
        if a > no:
            s = str(no1 * no2)
            if s == s[::-1]:
                no = no1 * no2
print(no)
