arr = list(map(int, input().split()))
cnt = 0
result = 0

for i in range(10):

    if (arr[i]==0):
        break

    if (arr[i]%2==0):
        result += arr[i]
        cnt += 1

print(cnt, result)