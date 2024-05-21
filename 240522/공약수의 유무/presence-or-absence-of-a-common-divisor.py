a, b = map(int, input().split())
t = 0

for i in range(a, b+1):
    if (1920%i==0 and 2880%i==0):
        t=1
        break

if t==1:
    print(1)
else:
    print(0)