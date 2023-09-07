while True:
    n = int(input())
    
    if n == 0:
        break
    
    total = 1
    for i in range(n+2, 2*n+1):
        total *= i
    
    print(total)