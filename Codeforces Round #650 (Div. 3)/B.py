def solve():
    n=int(input())
    a=list(map(int, input().split()))
    d={
        0:0,
        1:0
    }
    for i in range(n):
        if i%2 != a[i]%2:
            d[i%2]+=1
    
    if d[0]!=d[1]:
        print(-1)
    else:
        print(d[0])


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        solve()
