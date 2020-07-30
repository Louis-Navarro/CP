def solve():
    h,w,k=map(int, input().split())
    c=[]
    rc=0
    t=0

    for r in range(h):
        i=input().split()
        c.append(i)
        cnt=i.count('#')
        if cnt >=k:
            rc+=1
        if cnt > k:
            

    if rc>1:
        t+=h
    elif rc==1:
        t+=h-1



if __name__=='__main__':
    t=1
    for _ in range(t):
        solve()
