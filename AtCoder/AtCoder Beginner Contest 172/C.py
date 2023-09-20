def main():
    n,m,k = map(int, input().split())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))
    nB=0
    nM=0
    while True:
        if (not a) and (b):
            c=b.pop(0)
        
        elif (not b) and (a):
            c=a.pop(0)

        elif (not a) and (not b):
            break

        else:
            if a[0]<b[0]:
                c=a.pop(0)
            else:
                c=b.pop(0)


        if c+nM<=k:
            nB+=1
            nM+=c
        else:
            break

    print(nB)


if __name__=='__main__':
    main()
