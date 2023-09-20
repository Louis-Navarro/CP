def solve():
    n=int(input())
    s=input()
    t=input()
    
    d1={'0':0, '1':0}
    d2={'0':0, '1':0}

    i1={}
    i2={}

    for i in range(n):
        d1[s[i]]+=1
        d2[t[i]]+=1
        
        i1[i]=s[i]
        i2[i]=t[i]

    if list(d1.values())!=list(d2.values()):
        print(-1)

    else:
        a=0
        for sz in range(n, 0, -1):
            c=0
            for _ in range(n//sz):
                
                if a==
                    a=min(a,c)


if __name__ == '__main__':
    t=1
    for _ in range(t):
        solve()
