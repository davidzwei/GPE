import math

n = int(input())

i = 0
while i < n:
    x = int(input())
    number = str(math.factorial(x))
    res = 0
    for j in number:
        res += int(j)
    i += 1
    print(res)
