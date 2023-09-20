mod=1e9+7


def solve():
    n,k=map(int, input().split())
    a=map(int, input().split())
    a=sorted(a)
    cn=-1
    cp=-1
    ns=[]
    ps=[]
    for i in a:
        if i<0:
            ns.append(i)
            cn+=1
        else:
            ps.append(i)
            cp+=1

    res=1
    if not ns:
        for i in range(k):
            print(ps[cp-i])
            res*=ps[cp-i]

    elif not ps:
        if k&1:
            for i in range(k):
                res*=ns[cn-i]

        else:
            for i in range(k):
                res*=ns[i]

    print(int(res%mod))
    # print(ns)
    print(ps)
    print(res)

    

if __name__=='__main__':
    t=1
    for _ in range(t):
        solve()
