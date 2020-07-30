def solve():
    n=int(input())
    r=range
    a=list(map(int, input().split()))
    q=int(input())

    d={}
    s=0
    for i in r(n):
        cu=a[i]

        if d.get(cu, None):
            d[cu]+=1
        else:
            d[cu]=1
        
        s+=cu
    
    for _ in r(q):
        bi, ci = map(int, input().split())
        diff=ci-bi

        if d.get(ci, None):
            d[ci]+=d.get(bi, 0)
        else:
            d[ci]=d.get(bi, 0)

        s+=diff * d.get(bi, 0)
        print(s)

        if d.get(bi, None):
            d[bi]=0


if __name__ == '__main__':
    t=1
    for _ in range(t):
        solve()
