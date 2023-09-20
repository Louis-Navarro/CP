from math import ceil as c


def main():
    n, x = map(int, input().split())
    a=list(map(int, input().split()))
    a.sort()
    i=n-1
    r=0
    while n>0:
    # for i in range(n-1,0,-1):
        nd=c(x/a[i])
        i-=nd
        n-=nd
        r+=1 
        if nd==1:
            n-=1
            i-=1

    print(r)


if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        main()
