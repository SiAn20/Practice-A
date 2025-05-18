n = int(input())
text1 = input()
text2 = input()
count = 0

for i in range(n):
    if text1[i] != text2[i]:
        count = count +1

print(count)
