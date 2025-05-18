n = int(input())
exist = [False] * n
numeros = list(map(int, input().split()))

for x in numeros:
    if 1 <= x <= n:
        exist[x - 1] = True

for i in range(n):
    if not exist[i]:
        print(i + 1)
        break
