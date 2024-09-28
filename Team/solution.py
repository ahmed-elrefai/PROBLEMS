n = int(input())
ans = 0

for i in range(n):
    a,b,c = input().split(" ")
    a = int(a)
    b = int(b)
    c = int(c)
    if a + b + c >= 2:
        ans += 1

print(ans)