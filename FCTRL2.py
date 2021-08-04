T = int(input())
for i in range(T):
    n = int(input())
    fact = 1
    for j in range(1, n + 1):
        fact *= j
    print(fact)
