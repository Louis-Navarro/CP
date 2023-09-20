def solve():
    n, k=map(int, input().split())
    p=list(map(int, input().split()))
    p.sort()

    t=0
    for i in range(k):
        t+=p[i]

    print(t)


if __name__ == '__main__':
    t=1
    for _ in range(t):
        solve()
