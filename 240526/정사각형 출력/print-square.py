n = int(input())

for i in range(1, n+1):
    for j in range(1, n+1):
        print(f"{i*n+j-3} ", end="")
    print()