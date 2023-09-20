def solve():
    n=int(input())
    x=n//1000*1000
    if x==n:
        print(0)
    else:
        print(x+1000-n)


if __name__=='__main__':
    t=1
    for _ in range(t):
        solve()
