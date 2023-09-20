import math


mod=1e9+7

def solve():
    k=int(input())
    s=input()
    n=len(s)

    d={}
    for c in s:
        if s in d:
            d[s]+=1
        else:
            d[s]=1
    
    t=1
    for c in d.values():
        t*=c % mod

    nC=26**k % mod
    nA=math.factorial(n+k)/t % mod
    print(int(nC*nA % mod))


if __name__ == '__main__':
    t=1
    for _ in range(t):
        solve()
