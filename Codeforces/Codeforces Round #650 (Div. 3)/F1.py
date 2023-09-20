def solve():
    n=int(input())
    a=list(map(int, input().split()))
    l=0
    t=0
    c=True
    ms=0
    for i in range(n):
        if a[i] < a[l]:
            t+=1
            c=True
        else:
            l=i

    print(t)


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        solve()
