import math

arr = list(map(float, input().split(" ")))
result = sum(arr)/len(arr)

print(math.ceil(result*10)/10)