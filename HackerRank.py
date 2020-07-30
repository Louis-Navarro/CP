def main():
    n=int(input())
    ar=list(map(int, input().split()))

    d={}
    for i in ar:
        if d.get(i, None):
            d[i]+=1
        else:
            d[i]=1

    t=0
    for k, v in d.items():
        t+=v//2

    print(t)


if __name__ == '__main__':
    main()
